iw dev
sudo iw phy phy1 interface add mon0 type monitor
sudo iw dev wlan1 del
sudo ifconfig mon0 up
sudo iw dev mon0 set freq 2437
sudo iw dev mon0 set channel 1