import UIKit
import CoreBluetooth

class UnityViewController: UIViewController, UITextFieldDelegate
{
    // View
    
//    let nc = NotificationCenter.default
//    nc.addObserver(self, selector: #selector(connectedBT), name: Notification.Name("ConnectedBluetooth"), object: nil)
//    nc.addObserver(self, selector: #selector(disconnectedBT), name: Notification.Name("DisconnectedBluetooth"), object: nil)
//
    func updateLogo(logo: UILabel, data: String) {
        print("DDDDDDDDDDD")
        logo.text = data
        
    }
    
    let contentView:UIView = {
        let view = UIView()
        return view
    }()
    
    // Top navigation bar
    let topNav: UIView = {
        let nav = UIView()
        nav.backgroundColor = .white
        return nav
    }()
    
    // Nav bar title
    let logo: UILabel = {
        let logo = UILabel()
        logo.text = "L1"
        logo.font = UIFont.boldSystemFont(ofSize: 30)
        logo.textColor = .black
        return logo
    }()
    
    // Stop localizing
    let dsButton: UIButton = {
        let lb = UIButton(type: .system)
        lb.setTitle("Done", for: .normal)
        lb.setTitleColor(.white, for: .normal)
        lb.addTarget(
            self,
            action: #selector(finishScanning),
            for: UIControl.Event.touchUpInside)
        return lb
    }()
    
    // Exit
    let exitButton: UIButton = {
        let lb = UIButton(type: .system)
        lb.setTitle("<", for: .normal)
        lb.titleLabel?.font = .systemFont(ofSize: 30)
        lb.setTitleColor(.black, for: .normal)
        lb.addTarget(
            self,
            action: #selector(exitUnityView),
            for: UIControl.Event.touchUpInside)
        return lb
    }()
    
    // Variables
    var bluetooth: BluetoothManager! // bluetooth instance
    var unityStatus: String! // status of Unity (active or resigned active)
    @IBOutlet weak var vioTracker: UITextView! // tracks the Vio you are currently at
    
    // Buttons
    @IBOutlet weak var unitySwitch: UIButton!
    
    // For debugging - check content of found devices file
    func debug_checkDeviceFile() {
        let fileManager = FileManager.default
        let documentsURL = fileManager.urls(for: .documentDirectory, in: .userDomainMask)[0]
        let filename = documentsURL.appendingPathComponent("CameraDataCSV.csv")
        // for checking what files are in persistent data path
        do {
            let inString = try String(contentsOf: filename)
            print("Device File: ", inString)
            // process files
        } catch {
            print("Error while enumerating files \(documentsURL.path): \(error.localizedDescription)")
        }
    }
    
    // Streaming VIO data from Unity to RPI
    @objc func isDataGet(_ n: NSNotification) {
        // stream data to rpi
        let vioString = ((n.userInfo?["data"])! as! String)
        let vio = vioString.data(using: .utf8)
        self.vioTracker.text = vioString // track VIO for debugging on screen
        self.bluetooth.writeData(withValue: vio!) // write request of vio data into the RPI
    }
    
    @objc func message(_ notification: Notification) {
        let target = notification.object as! NSDictionary
        
        let stat =  (target["item"] as! String)
        print("TARGET Unity",target,stat)
 
        if stat.range(of:"Camera") != nil
        {
            self.stopUnity()
            
            
            
//            self.bluetooth.read()
            self.dsButton.setTitle("Visualize", for: .normal)
            
            
            self.unityStatus = "Visualize"
            let alert = UIAlertController(title: "Visualization Instructions", message: "Start from the original point you walked in. While walking around the room you should see the device images pop up. Click on the button Start at the bottom when you are ready to start visualizing.", preferredStyle: .alert)
            alert.addAction(UIAlertAction(title: "OK", style: .default, handler: { [self] action in
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
//        print("InsideMessage",bluetooth.deviceName,bluetooth.message,"END")
        if (bluetooth.deviceName != "") {
            updateLogo(logo: logo, data: stat )
//            logo.text = stat
//            var dets=""
//
//            print("Names:",self.animalNames)
//
//            updateText(logo: deviceListInfo, data:dets)

//            var data = ""
//            if (self.bluetooth.readData != nil) {
//                data = self.bluetooth.readData
//                data = parsePreviewInfo(data: data)
//                updateText(logo: deviceListInfo, data: data)
//            }
        }
    }
    
    
    // View load
    override func viewDidLoad()
    {
        super.viewDidLoad()
        setupUnityViewController()
        
        dsButton.isHidden = false // unity switch is visible in beginning
        self.unityStatus = "Scanning" // we are in scanning mode in the beginning
        let vio = "startCapture".data(using: .utf8)

        self.bluetooth.writeData(withValue: vio!)
        
        
        
        // for Unity -> Swift vio data streaming
        NotificationCenter.default.addObserver(self, selector: #selector(isDataGet(_:)),
              name: NSNotification.Name("NotificationName") , object: nil)
        
        NotificationCenter.default.addObserver(self, selector: #selector(message), name: Notification.Name( "message"), object: nil)

        
        // Starting unity
        if let appDelegate = UIApplication.shared.delegate as? AppDelegate
        {
            if appDelegate.isUnityRunning == false {
                handleUnityReady()
                startUnity()
            }
        }
        
    }
    
    // Unity Initialization
    @objc func handleUnityReady() {
        showUnitySubView()
    }
    
    // Show the Unity subview above Swift view
    func showUnitySubView() {
        if let unityView = UnityGetGLView() {
            // insert subview at index 0 ensures unity view is behind current UI view
            view?.insertSubview(unityView, at: 0)
        }
    }
    
    // Start Unity
    func startUnity() {
        if let unityView = UnityGetGLView()
        {
            unityView.isHidden = false;
        }

        if let appDelegate = UIApplication.shared.delegate as? AppDelegate
        {
            appDelegate.startUnity()

           NotificationCenter.default.addObserver(self, selector: #selector(handleUnityReady), name: NSNotification.Name("UnityReady"), object: nil)
        }
    }
    
    // Go back to main page when clicking on exit
    @objc func exitUnityView(_ sender: Any) {
        print("exit unity view")
        stopUnity()
        dsButton.setTitle("Done Scanning", for: .normal)
        self.performSegue(withIdentifier: "MainPageSegue", sender: sender)
        self.unityStatus = "Scanning"
    }
    
    // Has two functionalities
    // if on Scanning mode - finish scanning and get device found info from RPI
    // if on Visualize mode - show the devices found on Unity view
    @objc func finishScanning(_ sender: Any) {
        print("finish scanning")
        if (self.unityStatus == "Visualize") {
            startUnity()
            dsButton.isHidden = false;
        }
        else {
            self.stopUnity()
            
            
            
//            self.bluetooth.read()
            self.dsButton.setTitle("Visualize", for: .normal)
            
            
            self.unityStatus = "Visualize"
            let alert = UIAlertController(title: "Visualization Instructions", message: "Start from the original point you walked in. While walking around the room you should see the device images pop up. Click on the button Start at the bottom when you are ready to start visualizing.", preferredStyle: .alert)
            alert.addAction(UIAlertAction(title: "OK", style: .default, handler: { [self] action in
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
    }
    
    // Stop Unity
    func stopUnity() {
        if let appDelegate = UIApplication.shared.delegate as? AppDelegate
        {
            appDelegate.stopUnity()
            
            if let unityView = UnityGetGLView()
            {
                unityView.isHidden = true;
            }
        }
    }
    
}
