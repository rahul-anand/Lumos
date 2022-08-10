import os
import shelve
import textwrap
import time
from datetime import datetime
from os import curdir

import pandas as pd
import psutil
from mac_vendor_lookup import BaseMacLookup, MacLookup
from scapy.all import *

for proc in psutil.process_iter():
    pinfo = proc.as_dict(attrs=["pid", "name"])
    procname = str(pinfo["name"])
    procpid = str(pinfo["pid"])
    if "python3" in procname and procpid != str(os.getpid()):
        print("Stopped Python Process ", proc)
        proc.kill()


sv_path = "./ssid_list.csv"
sv_path1 = "./ssid_list1.csv"

if os.path.exists(sv_path):
    os.remove(sv_path)
    print("The file has been deleted successfully")
else:
    print("The file does not exist!")

if os.path.exists(sv_path1):
    os.remove(sv_path1)
    print("The file has been deleted successfully")
else:
    print("The file does not exist!")


BaseMacLookup.cache_path = "location"

mac = MacLookup()


def find_mac(mac_address):
    if mac_address == "ff:ff:ff:ff:ff:ff":
        return "Broadcast"
    try:
        val = mac.lookup(mac_address)
    except Exception as e:
        val = "NA"
        print(e)

    return val


filename = "devices.txt"
file_object = open(filename, "w")
missed_count = 0
# global
list_prob = []
d1 = {}
d2 = {}
channel_c = 0


def method_filter_HTTP(packet1):
    global d1, d2, channel_c
    if (
        (packet1.haslayer(Dot11))
        and (packet1[Dot11].type == 0)
        and (packet1[Dot11].subtype == 8)
    ):
        if packet1[Dot11].addr2 not in d1:
            d1[packet1[Dot11].addr2] = {}
            d1[packet1[Dot11].addr2]["info"] = packet1[Dot11].info.decode("utf-8")
            d1[packet1[Dot11].addr2]["type"] = "AP"

            d1[packet1[Dot11].addr2]["channel"] = channel_c

    src = packet1.addr1
    dst = packet1.addr2

    for each in [src, dst]:
        if each not in d2 and each is not None:
            d2[each] = {}
            d2[each]["channel"] = channel_c
            d2[each]["info"] = ""
            d2[each]["type"] = "DEV"

    return


print(list_prob)

import shlex
import subprocess
import threading
import time
from threading import Thread

locky = threading.Lock()


def Change_Freq_channel(channel_c):
    print("Channel:", str(channel_c))
    command = "iwconfig mon0 channel " + str(channel_c)
    command = shlex.split(command)
    subprocess.Popen(command, shell=False)


time_each_channel = 5

channels = [1, 2, 3]


def main():
    for channel_c in channels:
        print("Channel\t", channel_c)
        t = Thread(target=Change_Freq_channel, args=(channel_c,))
        t.daemon = True
        locky.acquire()
        t = AsyncSniffer(iface="mon0", prn=method_filter_HTTP, store=0)
        t.start()
        time.sleep(time_each_channel)
        t.stop()
        locky.release()

    print(d1)
    torem = []
    for k1, v1 in d2.items():
        if k1 in d1:
            torem.append(k1)

    for k in torem:
        d2.pop(k, None)
        # del d2[k1]
    print(d2)

    z = d1.copy()
    z.update(d2)

    print(z)
    # ()+1
    dflist = []

    for k1, v1 in z.items():
        cd = {}
        if v1["type"] == "AP":
            cd["Name"] = v1["info"]
        else:
            cd["Name"] = find_mac(k1)

        cd["Name"] = textwrap.shorten(cd["Name"], width=40)
        cd["Channel"] = v1["channel"]
        cd["type"] = v1["type"]
        cd["MAC"] = k1
        dflist.append(cd)

    df = pd.DataFrame(dflist)
    print(df)
    df.to_csv(sv_path, index=False)

    df = pd.DataFrame(dflist)
    del df["MAC"]

    df = df.drop_duplicates(subset=["Name"], keep="last")
    df.sort_values(by=["type"], ascending=False, inplace=True)
    print(df)
    df.to_csv(sv_path1, index=False)

    print("SAVED")
    time.sleep(1)
    return 1


if __name__ == "__main__":
    main()
