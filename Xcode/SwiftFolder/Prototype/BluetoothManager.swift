//
//  Bluetooth.swift
//  Prototype
//
//  Created by Joanne  Park  on 3/19/21.
//
import Foundation
import UIKit
import CoreBluetooth


//<CBPeripheral: 0x280c04140, identifier = C7CB1125-7B11-6940-C62B-50AD199E9630, name = raspberrypi, mtu = 0, state = disconnected>
//Optional(<CBCharacteristic: 0x281918720, UUID = FFF1, properties = 0xE, value = (null), notifying = NO>)

let BEAN_SERVICE_UUID = CBUUID(string: "FFF1")
// Singleton of a bluetooth manager so that we can access same bluetooth instance from all views
class BluetoothManager: NSObject, CBCentralManagerDelegate, CBPeripheralDelegate  {
    private static var sharedBluetoothManager: BluetoothManager = {
        let bluetoothManager = BluetoothManager()
        return bluetoothManager
    }()
    
    // variables
    var centralManager: CBCentralManager!
    var myPeripheral: CBPeripheral!
    var myCharacteristic: CBCharacteristic!
    var readData: String! // data that we get from RPI when we read
    var deviceName = ""
    var message = ""
    
    // initialization
    private override init() {
        super.init()
        // initializing bluetooth process
        self.centralManager = CBCentralManager(delegate: self, queue: DispatchQueue.main)
    }
    
    // return the bluetooth instance
    class func shared() -> BluetoothManager {
            return sharedBluetoothManager
    }
    
    // Turning on BLE
    func centralManagerDidUpdateState(_ central: CBCentralManager) {
        if central.state == CBManagerState.poweredOn {
            print("BLE powered on")
            // Turned on
            central.scanForPeripherals(withServices: nil, options: nil)
        }
        else {
            print("Something wrong with BLE")
            // Not on, but can have different issues
        }
    }
    
    // Connecting to the rpi -- If your rpi name is different modify the rpi name here (line 54)
    func centralManager(_ central: CBCentralManager, didDiscover peripheral: CBPeripheral, advertisementData: [String : Any], rssi RSSI: NSNumber) {
        let nc = NotificationCenter.default
        print("tet",peripheral.name )
//        let sfor="rahul’s MacBook Air"
        let sfor="raspberrypi"
//        raspberrypi
        if let pname = peripheral.name {
            if pname == sfor { // connect only to the rpi
            //if pname == "LAPTOP-DC63EHHB" {
                self.centralManager.stopScan()
                self.myPeripheral = peripheral
                self.deviceName = pname
                nc.post(name: Notification.Name("ConnectedBluetooth"), object: nil)
                print("Setting my peripheral to:")
                print(self.myPeripheral.name)
                self.myPeripheral.delegate = self
                self.centralManager.connect(self.myPeripheral, options: nil) // connect to this peripheral
                
//                print("here",self.myCharacteristic)
//                per
//
            }
        }
    }
    
    func subscribeToNotifications(peripheral: CBPeripheral, characteristic: CBCharacteristic) {
        peripheral.setNotifyValue(true, for: characteristic)
     }
    // Did the device disconnect
    func centralManager(_ central: CBCentralManager,
         didDisconnectPeripheral peripheral: CBPeripheral,
         error: Error?) {
        let nc = NotificationCenter.default
        nc.post(name: Notification.Name("DisconnectedBluetooth"), object: nil)
        self.deviceName = ""
        self.myPeripheral = nil
//        self.message = nil

        self.myCharacteristic = nil
    }
    // Discovering a service within the connected bluetooth connection
    func peripheral(_ peripheral: CBPeripheral, didDiscoverServices error: Error?) {
        if let services = peripheral.services {
            for service in services {
                peripheral.discoverCharacteristics(nil, for: service)
                return
            }
        }
    }

    // Discovering the characteristic we need to write to rpi and setting it in a variable
    func peripheral(_ peripheral: CBPeripheral, didDiscoverCharacteristicsFor service: CBService, error: Error?) {
        if let characteristics = service.characteristics {
            for characteristic in characteristics {
                self.myCharacteristic = characteristic
//                myCharacteristic.readValue(for: characteristic)
                
                print("Characteristic we are using: ")
                print(self.myCharacteristic)
                self.myPeripheral.setNotifyValue(true, for: self.myCharacteristic)

            }
        }
    }

    // Making sure we connected to the peripheral
    func centralManager(_ central: CBCentralManager, didConnect peripheral: CBPeripheral) {
        if peripheral == self.myPeripheral {
            print("connected")
            peripheral.discoverServices(nil)
//            peripheral.setNotifyValue(<#T##enabled: Bool##Bool#>, for: <#T##CBCharacteristic#>)
        }
    }
    
//    func subData(){
//        if self.myCharacteristic != nil && self.myCharacteristic.properties.contains(.writeWithoutResponse) && self.myPeripheral != nil {
//            self.myPeripheral.writeValue(value, for: self.myCharacteristic, type: .withoutResponse)
//        }
//    }
//
    
    // Write data to RPI
    func writeData(withValue value: Data){
        if self.myCharacteristic != nil && self.myCharacteristic.properties.contains(.writeWithoutResponse) && self.myPeripheral != nil {
            self.myPeripheral.writeValue(value, for: self.myCharacteristic, type: .withoutResponse)
        }
    }
    
    // Handles a write request to RPI
    func peripheral(_ peripheral: CBPeripheral, didWriteValueFor characteristic: CBCharacteristic, error: Error?) {
        print("Successful write")
    }
    
    // Handles a read request to RPI
    func peripheral(_ peripheral: CBPeripheral, didUpdateValueFor characteristic: CBCharacteristic, error: Error?) {
        self.readData = String(data:characteristic.value!, encoding: String.Encoding.utf8)!
        print("READ",self.readData)
//        self.message = self.readData

        //        nc.post(name: Notification.Name("message"), object: self.readData)
 

//        nc.post(name: Notification.Name("message"), object: self.readData)
        
        
        write_unity_devices(data: self.readData)
//        updateText(logoStatus, self.readData)
    }
    
    func peripheral(_ peripheral: CBPeripheral, didUpdateNotificationStateFor characteristic: CBCharacteristic, error: Error?) {
        // Check subscription here
        print("isNotifying: \(characteristic.isNotifying)")
    }
    
//    func peripheral(_ peripheral: CBPeripheral, didUpdateValueFor characteristic: CBCharacteristic, error: Error?) {
//        // read updated value for characteristic.
//        print("isNotifying: \(characteristic.isNotifying)")
//
//    }
    // Read from RPI
    func read() {
//        self.myPeripheral.setNotifyValue(true, forCharacteristic: myCharacteristic)

        self.myPeripheral.readValue(for: self.myCharacteristic)
    }
    
    // Write value of read from RPI into the list of devices file
    func write_unity_devices(data: String){
        
        let nc = NotificationCenter.default
//        let userInfo = self.readData
        
        let userInfo = ["item": data,"dummy":"dummy"]

        print("sending",userInfo)
        nc.post(name: Notification.Name("message"), object: userInfo)
//        dispatch_async(dispatch_get_main_queue(), {
//            let lst = HomeViewController()
    
//            lst.updateLogo(logo: lst.logoStatus, data: data)
//
//
////        self.StringSteps.text = data.numberOfSteps.stringValue
//        });
        
        
        
//        lst.btInfo.text = data
//        lst.updateText( UITextView, data: <#T##String#>)

//        [lst.btInfo setNeedsDisplay];

//        lst.updateText(lst.logoStatus,data)
//        updateText(HomeViewController:logoStatus, self.readData)
//        self.message = String(data)
//        print("writing unity file\n",data);
//
//        let nc = NotificationCenter.default
//        nc.post(name: Notification.Name("message"), object: nil)
//
       
    }
}
