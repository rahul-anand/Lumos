//
//  ShowDeviceScreen.swift
//  Prototype
//
//  Created by Joanne  Park  on 4/9/21.
//

import Foundation
class ShowDevicesController: UIViewController, UITextFieldDelegate
{
    var data = ""
    
    let contentView:UIView = {
        let view = UIView()
        view.backgroundColor = .white
        
        return view
    }()
    
    var devicesList: UILabel = {
        let text = UILabel()
        text.text = ""
        text.textColor = .black
        text.font = UIFont.boldSystemFont(ofSize: 20)
        return text
    }()
    
    var devicesListLabel: UILabel = {
        let text = UILabel()
        text.text = "Devices Found"
        text.textColor = .black
        text.font = UIFont.boldSystemFont(ofSize: 50)
        return text
    }()
    
    
    func setupDeviceListLabel() {
        devicesListLabel.translatesAutoresizingMaskIntoConstraints = false
        devicesListLabel.topAnchor.constraint(
            equalTo: contentView.topAnchor,
            constant: 20).isActive = true
        devicesListLabel.centerXAnchor.constraint(
            equalTo: contentView.centerXAnchor).isActive = true
    }
    
    func setupDeviceList() {
        devicesList.text = self.data
        devicesList.translatesAutoresizingMaskIntoConstraints = false
        devicesList.topAnchor.constraint(
            equalTo: devicesList.topAnchor,
            constant: 20).isActive = true
        devicesList.centerXAnchor.constraint(
            equalTo: contentView.centerXAnchor).isActive = true
    }
    
    func setupShowDevicesViewController() {
        // placing views on screen
        view.addSubview(contentView)
        contentView.addSubview(devicesListLabel)
        contentView.addSubview(devicesList)
        
        
        // auto layout
        contentView.translatesAutoresizingMaskIntoConstraints = false

        // Login container
        contentView.heightAnchor.constraint(
            equalToConstant: view.frame.height).isActive = true
        contentView.topAnchor.constraint(equalTo: view.topAnchor, constant: 0).isActive = true
        contentView.widthAnchor.constraint(
            equalToConstant: view.frame.width).isActive = true
        contentView.leftAnchor.constraint(equalTo: view.leftAnchor, constant: 0).isActive = true
        contentView.centerYAnchor.constraint(
            equalTo: view.centerYAnchor).isActive = true
        setupDeviceListLabel()
        setupDeviceList()
    }
    
    override func viewDidLoad()
    {
        super.viewDidLoad()
        setupShowDevicesViewController()
    }
}
