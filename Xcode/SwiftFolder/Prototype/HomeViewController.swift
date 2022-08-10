    import UIKit
    import CoreBluetooth
    import SwiftUI
    import Foundation


    extension String {

        func slice(from: String, to: String) -> String? {

            return (range(of: from)?.upperBound).flatMap { substringFrom in
                (range(of: to, range: substringFrom..<endIndex)?.lowerBound).map { substringTo in
                    String(self[substringFrom..<substringTo])
                }
            }
        }
    }


    //
    //  Phases.swift
    //  lumost-test
    //
    //  Created by Asad Sheikh on 4/21/22.
    //

    import Foundation
    //
    //struct Phases {
    //    var title: String
    //    var description: String
    //    var ready: Bool
    //    var complete: Bool
    //    var click: Bool
    //}
    //
    //extension Phases {
    //    static let sampleData: [Phases] =
    //    [
    //        Phases(title: "Connect", description: "Using Bluetooth you will connect the external Lumos Device.", ready: true, complete: true, click: false),
    //
    //        Phases(title: "Scan", description: "Lumos will take 30 minutes to identify devices in your area.", ready: true, complete: false, click: true),
    //
    //        Phases(title: "Locate", description: "Using Augmented Reality you will be able to view hidden devices.", ready: false, complete: false, click: false)
    //    ]
    //}



    //
    //
    //class GlobalState: ObservableObject {
    //    @Published var initial = true
    //    @Published var scanInstructions = false
    //    @Published var connectInstructions = false
    //
    //    @Published var scanStart = false
    //    @Published var scanComplete = false
    //    @Published var deviceDetails = false
    //    @Published var showToast = false
    //    @Published var stopEarly = false
    //    @Published var phases = [
    //        Phases(title: "Connect", description: "Using Bluetooth you will connect the external Lumos Device.", ready: true, complete: true, click: true),
    //
    //        Phases(title: "Scan", description: "Lumos will take 30 minutes to identify devices in your area.", ready: true, complete: false, click: true),
    //
    //        Phases(title: "Locate", description: "Using Augmented Reality you will be able to view hidden devices.", ready: false, complete: false, click: false)
    //    ]
    //    @Published var locateInstructions = false
    //    @Published var locateStart = false
    //}
//
//
//    struct CardsView: View {
//
//        var body: some View {
//
//            VStack(alignment: .leading, spacing: 10) {
//
//                Spacer()
//
//                Text("Own your privacy!")
//                    .font(.system(size: 24.0))
//                    .fontWeight(.bold)
//                    .foregroundColor(.white)
//                    .multilineTextAlignment(.leading)
//                    .padding()
//
//
//            }
//        }
//    }
    class HomeViewController: UIViewController, UITextFieldDelegate
    {
        

        
        
        
        
        private let myArray: NSArray = ["First","Second","Third"]
    //    private var myTableView: UITableView!
        
        
    //    func tableView(_ tableView: UITableView, didSelectRowAt indexPath: IndexPath) {
    //         print("Num: \(indexPath.row)")
    //         print("Value: \(myArray[indexPath.row])")
    //     }
    //
    //     func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
    //         return myArray.count
    //     }
    //
    //     func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
    //         let cell = tableView.dequeueReusableCell(withIdentifier: "MyCell", for: indexPath as IndexPath)
    //         cell.textLabel!.text = "\(myArray[indexPath.row])"
    //         return cell
    //     }
        
        
        @IBOutlet weak var theContainer: UIView!

    //    @IBOutlet var bt: UILabel!

        
    //    let v1 = CardsView()
    //    let viewCtrl = UIHostingController(rootView: v1)

        
        // view
        let loginContentView:UIView = {
            let view = UIView()
            return view
        }()
        
        
        // variables
        var bluetooth: BluetoothManager! // instance of bluetooth connection
        
        var detectedDevices = [0:""]
        var tableView: UITableView!
//        var tableView:UITableView!

//          let animals = ["Horse", "Cow", "Camel", "Sheep", "Goat"]
        var animalNames =  ["Devices"]
        {
            didSet {
//                tableView.scrollRectToVisible(CGRect(x: 0, y: tableView.contentSize.height, width: 1, height: 1), animated: true)
                tableView.reloadData()
                if(self.animalNames.count > 5)
                {
                    let indexPath = NSIndexPath(row: self.animalNames.count-1, section: 0)
                    print("ID",indexPath)
                    self.tableView.scrollToRow(at: indexPath as IndexPath, at: .bottom, animated: true)
                }
//                dispatch_async(dispatch_get_main_queue(), { () -> Void in
//                    let indexPath = NSIndexPath(forRow: animalNames.count-1, inSection: 0)
//                    tableView.scrollToRowAtIndexPath(indexPath as IndexPath, atScrollPosition: .Bottom, animated: true)
//
//                })
                
//                DispatchQueue.main.async {
//                    let index = IndexPath(row: self.itens.count-1, section: 0)
//                    self.tableView.scrollToRow(at: index, at: .bottom, animated: true)
//                }
                }
        }

//          let cellReuseIdentifier = "cell"
        var deviceList = ""
        
        // whether or not to show the device or not
        var showDevice = false;

        
        // UI variables
        let topNav: UIView = {
            let nav = UIView()
            nav.backgroundColor = .black
            return nav
        }()
        
        // logo of the app
        let logo: UILabel = {
            let logo = UILabel()
            logo.text = "Lumos"
            logo.font = UIFont.boldSystemFont(ofSize: 30)
            logo.textColor = .white
            return logo
        }()
        
        
            
                
        
        
        // Static title: bluetooth connection
        let logoBT: UILabel = {
    //        Image(systemName: "antenna.radiowaves.left.and.right")
    //            .foregroundColor(.white)
            let logo = UILabel()
            logo.text = "Connect"
            logo.font = UIFont.boldSystemFont(ofSize: 25)
            logo.textColor = .black
            
            return logo
        }()
        
        // displays bluetooth status
        let btInfo: UILabel = {
            let logo = UILabel()
            logo.text = "Not Connected"
            logo.font = UIFont.boldSystemFont(ofSize: 15)
            logo.textColor = .black
            return logo
        }()
        
        // static label: "Devices found in area"
        let logoDL: UILabel = {
            let logo = UILabel()
            logo.text = "Detect"
            logo.font = UIFont.boldSystemFont(ofSize: 25)
            logo.textColor = .black
            return logo
        }()
        
        let logoStatus: UILabel = {
            let logo = UILabel()
            logo.text = "Status--"
            logo.font = UIFont.boldSystemFont(ofSize: 20)
            logo.textColor = .black
            return logo
        }()
        
        
        
        // list of devices found
        let deviceListInfo: UITextView = {
    //        let holderView = UIView()

            
            
            let logo = UITextView()
    //        logo.numberOfLines = 10;
    //        logo.textAlignment=.left
            logo.text = "Not connected to bluetooth or have not localized"
            logo.font = UIFont.boldSystemFont(ofSize: 12)
            logo.textColor = .white
    //        logo.textAlignment = .left
            logo.isScrollEnabled = false
    //        logo.widthAnchor
    //        let fixedWidth = logo.frame.size.width
    //        let newSize = logo.sizeThatFits(CGSize(width: fixedWidth, height: CGFloat.greatestFiniteMagnitude))
    //        logo.frame.size = CGSize(width: max(newSize.width, fixedWidth), height: newSize.height)
            
    //        logo.bottomAnchor=preview.bottomAnchor
            return logo
            
        }()
        
//        let showTable: UITableView = {
//            let tableView = UITableView()
//    //        logo.numberOfLines = 0;
//    //        logo.text = "Not connected to bluetooth or have not localized"
//    //        logo.font = UIFont.boldSystemFont(ofSize: 12)
//    //        logo.textColor = .black
//            return tableView
//        }()
        
        // for tried implementation of scrolling
        let previewScroll: UIScrollView = {
            let prev = UIScrollView()
            return prev
        }()
        
        // the list of devices found nearby container
        let preview: UIView = {
            let prev = UIView()
            prev.backgroundColor = .white
            return prev
        }()
        
        // container for bluetooth info
        let btContainer: UIView = {
            let prev = UIView()
            prev.backgroundColor = .white
            return prev
        }()
            
        let stopDevices: UIButton = {
            let lb = UIButton(type: .system)
            lb.setTitle("Stop", for: .normal)
            lb.setTitleColor(.white, for: .normal)
            lb.addTarget(
                self,
                action: #selector(showDevicesPressed),
                for: UIControl.Event.touchUpInside)
            lb.layer.cornerRadius = 25
            return lb
        }()
        
        let startDevices: UIButton = {
            let lb = UIButton(type: .system)
            lb.setTitle("Start", for: .normal)
            lb.setTitleColor(.white, for: .normal)
            lb.addTarget(
                self,
                action: #selector(startFinding),
                for: UIControl.Event.touchUpInside)
            lb.layer.cornerRadius = 25
            return lb
        }()
        
        // show devices variable
        let showDevices: UIButton = {
            let lb = UIButton(type: .system)
            lb.setTitle("Show", for: .normal)
            lb.setTitleColor(.white, for: .normal)
            lb.addTarget(
                self,
                action: #selector(showFinding),
                for: UIControl.Event.touchUpInside)
            lb.layer.cornerRadius = 25
            return lb
        }()
        
        // localize button variable
        let localizeButton: UIButton = {
            let lb = UIButton(type: .system)
            lb.setTitle("Localize & Visualize", for: .normal)
            lb.setTitleColor(.white, for: .normal)
            lb.addTarget(
                self,
                action: #selector(localizePressed),
                for: UIControl.Event.touchUpInside)
            lb.layer.cornerRadius = 25
            return lb
        }()
        
        var screenState = "start"
        var status="start"
        
        @objc func startFinding(sender: UIButton!){

            if (bluetooth.myPeripheral == nil) {
                let alert = UIAlertController(title: "Cannot Localize", message: "Please connect to your Raspberry pi before localization and visualization", preferredStyle: .alert)
                alert.addAction(UIAlertAction(title: "OK", style: .default, handler: { action in
                    switch action.style{
                        case .default:
                        print("default")
                        
                        case .cancel:
                        print("cancel")
                        
                        case .destructive:
                        print("destructive")
                        
                    }
                }))
        }
            else{
                
                let instruction = "Instruction:StartSSID"
                let instructionData = instruction.data(using: .utf8)


                self.bluetooth.writeData(withValue: instructionData!)
                self.status = "started"
            }
            
        }
        
        @objc func showFinding(sender: UIButton!){

            if (bluetooth.myPeripheral == nil) {
                let alert = UIAlertController(title: "Cannot Localize", message: "Please connect to your Raspberry pi before localization and visualization", preferredStyle: .alert)
                alert.addAction(UIAlertAction(title: "OK", style: .default, handler: { action in
                    switch action.style{
                        case .default:
                        print("default")
                        
                        case .cancel:
                        print("cancel")
                        
                        case .destructive:
                        print("destructive")
                        
                    }
                }))
        }
            else{
                
          

                
                
                let instruction = "Instruction:FetchSSID"
                
                
                let stat = logoStatus.text! as String
                
                print("STAT",stat)
                
                
                let slicedString = stat.slice(from: "Found ", to: " ") // Optional("encendedor")

                print("SLICED",slicedString)

                
                
                let instructionData = instruction.data(using: .utf8)


    //            self.bluetooth.writeData(withValue: instructionData!)
                self.status = "started"
                print(self.bluetooth.myCharacteristic)
                
                
    //            let instruction = "Instruction:SSID"
    //            let instructionData = instruction.data(using: .utf8)


                self.bluetooth.writeData(withValue: instructionData!) // write request of vio data into the RPI

                
                
                
                
                self.bluetooth.read()

                var data = self.bluetooth.readData
                print("data",data)

                data = parsePreviewInfo(data: data ?? "")
                self.deviceListInfo.text = data
                updateText(logo: deviceListInfo, data: data!)

                updateLogo(logo: logoStatus, data: self.bluetooth.message)

                
    //            self.bluetooth.read()
    //            self.showDevices.setTitle("Done Collecting", for: .normal)
    //            self.clear_unity_devices()
                
                
            }
            
        }
        

        @objc func showDevicesPressed(sender: UIButton!){
            if (bluetooth.myPeripheral == nil) {
                let alert = UIAlertController(title: "Cannot Localize", message: "Please connect to your Raspberry pi before localization and visualization", preferredStyle: .alert)
                alert.addAction(UIAlertAction(title: "OK", style: .default, handler: { action in
                    switch action.style{
                        case .default:
                        print("default")
                        
                        case .cancel:
                        print("cancel")
                        
                        case .destructive:
                        print("destructive")
                        
                    }
                }))
                present(alert, animated: true, completion: nil)
            }
            else if self.screenState == "finding" {
                self.screenState = "done"
                self.showDevices.setTitle("Find Devices", for: .normal)
                
                let instruction = "Instruction:SSID"
                let instructionData = instruction.data(using: .utf8)


                self.bluetooth.writeData(withValue: instructionData!) // write request of vio data into the RPI

                
                var data = self.bluetooth.readData
                print(data)
                data = parsePreviewInfo(data: data ?? "")
                self.deviceListInfo.text = data
                updateText(logo: deviceListInfo, data: data!)
            }
            else {
                let alert = UIAlertController(title: "Finding Devices Nearby", message: "Collecting device information nearby. Press Done Collecting when you wish to stop collecting device information. The devices found during this process will be displayed in the localization process.", preferredStyle: .alert)
                alert.addAction(UIAlertAction(title: "OK", style: .default, handler: { action in
                    switch action.style{
                        case .default:
                            print("default")
                            self.screenState = "finding"
                            print(self.bluetooth.myCharacteristic)
                            self.bluetooth.read()
                            self.showDevices.setTitle("Done Collecting", for: .normal)
                            self.clear_unity_devices() // clear the data of devices found from previous localizations
                        case .cancel:
                            print("cancel")
                            self.clear_unity_devices() // clear the data of devices found from f=previous localizations
                            
                        case .destructive:
                            print("destructive")
                            self.clear_unity_devices() // clear the data of devices found from previous localizations
                    }
                }))
                present(alert, animated: true, completion: nil)
            }
        }
        
        @objc func localizePressed(sender: UIButton!){
            if (bluetooth.myPeripheral == nil) {
                let alert = UIAlertController(title: "Cannot Localize", message: "Please connect to your Raspberry pi before localization and visualization", preferredStyle: .alert)
                alert.addAction(UIAlertAction(title: "OK", style: .default, handler: { action in
                    switch action.style{
                        case .default:
                        print("default")
                        
                        case .cancel:
                        print("cancel")
                        
                        case .destructive:
                        print("destructive")
                        
                    }
                }))
                present(alert, animated: true, completion: nil)
            }
//            else if (self.screenState != "done") {
//                print(self.screenState)
//                let alert = UIAlertController(title: "Find Devices Nearby First", message: "Find Devices first or finish finding devices before localization.", preferredStyle: .alert)
//                alert.addAction(UIAlertAction(title: "OK", style: .default, handler: { action in
//                    switch action.style{
//                        case .default:
//                            print("default")
//                        case .cancel:
//                            print("cancel")
//                        case .destructive:
//                            print("destructive")
//                    }
//                }))
//                present(alert, animated: true, completion: nil)
//            }
            else {
                let alert = UIAlertController(title: "Localization Instructions", message: "Localization will occur immediately after you press OK on this alert. Start from a corner of the room, then walk around the room (following the walls). When returned to your original start position, press the done button at the bottom", preferredStyle: .alert)
                alert.addAction(UIAlertAction(title: "OK", style: .default, handler: { action in
                    switch action.style{
                        case .default:
                            print("default")
                            self.clear_unity_devices() // clear the data of devices found from previous localizations
                            self.performSegue(withIdentifier: "UnitySegue", sender: sender) // go to Unity view
                        
                        case .cancel:
                            print("cancel")
                            self.clear_unity_devices() // clear the data of devices found from previous localizations
                            self.performSegue(withIdentifier: "UnitySegue", sender: sender) // go to Unity view
                        case .destructive:
                            print("destructive")
                            self.clear_unity_devices() // clear the data of devices found from previous localizations
                            self.performSegue(withIdentifier: "UnitySegue", sender: sender) // go to Unity view
                    }
                }))
                present(alert, animated: true, completion: nil)
            }
        }
        
        
        // Prepare to segue into the Unity view
        // Sends over the instatiated bluetooth instance to the next view
        override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
            let unityViewController = segue.destination as? UnityViewController
            unityViewController?.bluetooth = self.bluetooth
        }
        
        @objc func connectedBT() {
            if (bluetooth.deviceName != "") {
                updateLogo(logo: btInfo, data: bluetooth.deviceName)
                var data = ""
                if (self.bluetooth.readData != nil) {
                    data = self.bluetooth.readData
                    data = parsePreviewInfo(data: data)
                    updateText(logo: deviceListInfo, data: data)
                }
            }
        }
        
        @objc func message(_ notification: Notification) {
            let target = notification.object as! NSDictionary
            
            let stat =  (target["item"] as! String)
            print("TARGET",target)
            
            if stat.range(of:"Ins") != nil {
                print("exists")
                let fullNameArr = stat.components(separatedBy: "!")
                print(fullNameArr)
                
                let val = Int(fullNameArr[1]) ?? 0
                          
                    print(val)
                
                self.detectedDevices[val] = fullNameArr[2]
                
                print(self.detectedDevices)
                var llg = self.detectedDevices.count
                
                var newnames = ["Devices"]
                
                animalNames = []
                let sortedYourArray = self.detectedDevices.sorted( by: { $0.0 < $1.0 })

                for (k1, v1) in sortedYourArray {
//                    dets+=k1+":"+v1+"\n"
                    newnames.append(String(k1)+":"+v1)
                }
                animalNames = newnames
//                self.tableView.reloadData()
//                animalNames = ["Dogs", "Tiger"]

                
            }
            
            if stat.range(of:"Camera") != nil
            {
                let fileManager = FileManager.default
                let documentsURL = fileManager.urls(for: .documentDirectory, in: .userDomainMask)[0]
                let filename = documentsURL.appendingPathComponent("CameraDataCSV.csv")
                print("fname",filename)
                // for checking what files are in persistent data path
                do {
                    try stat.write(to: filename, atomically: true, encoding: .utf8)
                }
                catch {
                    print("Error while enumerating files \(documentsURL.path): \(error.localizedDescription)")
                }
                
                
//                UnityViewController.
                
                
            }
            
            
    //        updateLogo(logo: logoStatus, data: target ?? "")

    //        print("NC1",target,"NC2")
    ////        if let target = notification.userInfo?["item"] as? Item {
    ////          print(target)
    ////        }
    //
            
    //        print("InsideMessage",bluetooth.deviceName,bluetooth.message,"END")
            if (bluetooth.deviceName != "") {
                updateLogo(logo: logoStatus, data: stat )
                var dets=""
                
                print("Names:",self.animalNames)
                
                updateText(logo: deviceListInfo, data:dets)

    //            var data = ""
    //            if (self.bluetooth.readData != nil) {
    //                data = self.bluetooth.readData
    //                data = parsePreviewInfo(data: data)
    //                updateText(logo: deviceListInfo, data: data)
    //            }
            }
        }
        @objc func disconnectedBT() {
            updateLogo(logo: btInfo, data: "Not Connected")
            updateText(logo:deviceListInfo, data: "Not connected to bluetooth or have not localized")
        }
        
        // For when the view loads
        
    //    private let myArray: NSArray = ["First","Second","Third"]
    //      private var myTableView: UITableView!

    //      override func viewDidLoad() {
    //          super.viewDidLoad()
    //
    //
    //      }
    //
    //
        
        override func viewDidLoad()
        {
            super.viewDidLoad()
            setupHomeViewController()
         
//            setupTableView()
            self.tableView.reloadData()
            
            
            
            bluetooth = BluetoothManager.shared() // bluetooth instance
            if (bluetooth.deviceName != "") {
                updateLogo(logo: btInfo, data: bluetooth.deviceName)
                var data = ""
                if (self.bluetooth.readData != nil) {
                    data = self.bluetooth.readData
                    data = parsePreviewInfo(data: data)
                    updateText(logo: deviceListInfo, data: data)
                }
            }
            
            let nc = NotificationCenter.default
            nc.addObserver(self, selector: #selector(connectedBT), name: Notification.Name("ConnectedBluetooth"), object: nil)
            nc.addObserver(self, selector: #selector(disconnectedBT), name: Notification.Name("DisconnectedBluetooth"), object: nil)
            
            nc.addObserver(self, selector: #selector(message), name: Notification.Name( "message"), object: nil)

    //        nc.addObserver(self, selector: #selector(message), name: Notification.Name("message"), object: nil)

            
    //        let circleView = CardsView().background(Color("main")).edgesIgnoringSafeArea(.bottom)
    //
    //             let controller = UIHostingController(rootView: circleView)
    //             addChild(controller)
    //             controller.view.translatesAutoresizingMaskIntoConstraints = false
    //             view.addSubview(controller.view)
    //             controller.didMove(toParent: self)
    //
    //             NSLayoutConstraint.activate([
    //                 controller.view.widthAnchor.constraint(equalTo: view.widthAnchor, multiplier: 0.1),
    //                 controller.view.heightAnchor.constraint(equalTo: view.heightAnchor, multiplier: 0.1),
    //                 controller.view.centerXAnchor.constraint(equalTo: view.centerXAnchor),
    //                 controller.view.centerYAnchor.constraint(equalTo: view.centerYAnchor)
    //             ])
            
            
    //        let childView = UIHostingController(rootView: CardsView())
    //        addChild(childView)
    //        childView.view.frame = theContainer.bounds
    //        theContainer.addSubview(childView.view)
    //        childView.didMove(toParent: self)
        }
        
    
        

     
        // Helper function to clear list of devices found from previous localizations
        
        func clear_found_devices(){
            // getting file URL to the device list file
            let fileManager = FileManager.default
            let documentsURL = fileManager.urls(for: .documentDirectory, in: .userDomainMask)[0]
            let filename = documentsURL.appendingPathComponent("found_devices.csv")
            
            // empty file should have just the header
            var header = Data("Name,Channel,MAC\n".utf8)
            
            // if the file exists at given path write the empty header
            do {
                if FileManager.default.fileExists(atPath: filename.path) {
                    try header.write(to: filename)
                }
            } catch {
                print(error)
            }
        }
        
        
        func clear_unity_devices(){
            // getting file URL to the device list file
            let fileManager = FileManager.default
            let documentsURL = fileManager.urls(for: .documentDirectory, in: .userDomainMask)[0]
            let filename = documentsURL.appendingPathComponent("CameraDataCSV.csv")
            
            // empty file should have just the header
            var header = Data("Camera Type,X Location,Y Location,Z Location,X Rotation,Y Rotation,Z Rotation,Image File\n".utf8)
            
            // if the file exists at given path write the empty header
            do {
                if FileManager.default.fileExists(atPath: filename.path) {
                    try header.write(to: filename)
                }
            } catch {
                print(error)
            }
        }
        
        // parse data to write into the list of devices found (before localization)
        func parsePreviewInfo(data: String) -> String {
            var yourArray = [String]()

            
            let devices = (data.split(whereSeparator: \.isNewline)).dropFirst()
            print("DDEI",devices)
            var previewInfo = String(devices.count) + " Devices in Parameter: \n"
            for device in devices {
                let components = device.components(separatedBy: ",")
                previewInfo = previewInfo + components[0] + "\n"
                yourArray.append(components[0])
            }
            print(previewInfo)
            print(yourArray)
            return previewInfo
        }
        
    }

extension HomeViewController : UITableViewDataSource {
    func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return animalNames.count
    }
    
    
    func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        let cell = tableView.dequeueReusableCell(withIdentifier: "AnimalCell")! as UITableViewCell
        cell.textLabel?.text = animalNames[indexPath.row]
//        cell.textLabel?.font = UIFont.systemFont(ofSize: 5.0)
        return cell
    }
}

extension HomeViewController: UITableViewDelegate {
    func tableView(_ tableView: UITableView, didSelectRowAt indexPath: IndexPath) {
        tableView.deselectRow(at: indexPath, animated: true)
        print(animalNames[indexPath.row])
    }
}

//func scrollToBottom(){
//    DispatchQueue.main.async {
//        let indexPath = IndexPath(row: self.dataArray.count-1, section: 0)
//        self.tableView.scrollToRow(at: indexPath, at: .bottom, animated: true)
//    }
//}
