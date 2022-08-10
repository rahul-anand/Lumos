//
//  HomeView.swift
//  Prototype
//
//  Created by Joanne  Park  on 4/9/21.
//

import Foundation
import SwiftUI


extension HomeViewController {
    
    
    
    func setupHomeViewController() {
        
        // placing views on screen
        view.addSubview(loginContentView)
        
//        view.addSubview(HomeNavbarView)

//        Text("Do not move external device.")
//            .font(.system(size: 22.0))
            
            
        
        
        loginContentView.addSubview(topNav)
//        loginContentView.addSubview(preview)
        loginContentView.addSubview(previewScroll)
        previewScroll.addSubview(preview)
        preview.addSubview(logoDL)
        preview.addSubview(logoStatus)

        preview.addSubview(deviceListInfo)
        preview.addSubview(startDevices)
        preview.addSubview(showDevices)
        preview.addSubview(stopDevices)

//        preview.addSubview(showTable)
        
        loginContentView.addSubview(btContainer)
        btContainer.addSubview(logoBT)
        btContainer.addSubview(btInfo)
        loginContentView.addSubview(localizeButton)
        topNav.addSubview(logo)
        
        
        // auto layout
        loginContentView.translatesAutoresizingMaskIntoConstraints = false

        // Login container
        loginContentView.backgroundColor = .systemTeal
        loginContentView.heightAnchor.constraint(
            equalToConstant: view.frame.height).isActive = true
        loginContentView.topAnchor.constraint(equalTo: view.safeAreaLayoutGuide.topAnchor).isActive = true
        loginContentView.widthAnchor.constraint(
            equalToConstant: view.frame.width).isActive = true
        loginContentView.leftAnchor.constraint(equalTo: view.leftAnchor).isActive = true
        loginContentView.centerYAnchor.constraint(
            equalTo: view.centerYAnchor).isActive = true
        
//        @State var navigated = false

//        NavigationLink("HomeNavbarView", destination: HomeNavbarView(), isActive: $navigated)

        
    
//        var body: some View {
//
//        VStack(alignment: .leading, spacing: 10) {
//
//
//            let x = HomeNavbarView()
//
//            Spacer()
//        HomeNavbarView()
//
////        Spacer()
//
//        Text("Own your privacy!")
//            .font(.system(size: 24.0))
//            .fontWeight(.bold)
//            .foregroundColor(.white)
//            .multilineTextAlignment(.leading)
//            .padding()
//        }
//        }
            

        setupNavBar()
        setupLogo()
        setupBTLogo()
        setupBTInfo()
        setupDLLogo()
        setuplogoStatus()

        setupDLInfo()
        setupPreviewScroll()
        setupPreview()
        setupbtContainer()
        setupShowDevicesButton()
        setupLocalizeButton()
        setupTableView()

    }
    func setupTableView() {
          tableView = UITableView()
        
        topNav.addSubview(tableView)
        
//        tableView.backgroundColor = UIColor.white
//            tableView.frame = CGRect(x: 20, y: 0, width: view.frame.width-20, height: 200)
        
//          preview.addSubview(tableView)
          
          tableView.register(UITableViewCell.self,
                             forCellReuseIdentifier: "AnimalCell")
//        tableView.rowHeight = UITableView.automaticDimension
//        tableView.translatesAutoresizingMaskIntoConstraints = false
//        tableView.bottomAnchor.constraint(
//            equalTo: localizeButton.topAnchor, constant: 0).isActive = true
        tableView.topAnchor.constraint(
            equalTo: loginContentView.topAnchor,
            constant: 00).isActive = true
        tableView.isUserInteractionEnabled = true

//        tableView.bottomAnchor.constraint(
//            equalTo: loginContentView.bottomAnchor,
//            constant: 00).isActive = true
//        tableView.widthAnchor.constraint(
//            equalToConstant: view.frame.size.width - 40).isActive = true
//        tableView.leftAnchor.constraint(equalTo: view.leftAnchor, constant: 20).isActive = true
//        tableView.autoresizingMask = UIView.AutoresizingMask.flexibleHeight;
//        tableView.scrollEnabled = YES
//        tableView.bottomAnchor.constraint(
//            equalTo: logoDL.bottomAnchor, constant: 60).isActive = true
        

            tableView.centerXAnchor.constraint(
                equalTo: loginContentView.centerXAnchor).isActive = true
        
//              tableView.topAnchor.constraint(equalTo: previewScroll.topAnchor).isActive = true
//              tableView.bottomAnchor.constraint(equalTo: previewScroll.bottomAnchor).isActive = true
//              tableView.leftAnchor.constraint(equalTo: view.leftAnchor).isActive = true
//              tableView.rightAnchor.constraint(equalTo: view.rightAnchor).isActive = true
            tableView.frame.size.width = view.frame.size.width
            tableView.frame.size.height = 190
//        self.tableView.estimatedRowHeight = 1000
//        self.tableView.estimatedSectionFooterHeight = 100.0
//        self.tableView.estimatedSectionHeaderHeight = 500.0
          tableView.dataSource = self

          tableView.delegate = self
        tableView.rowHeight = 20

      }
    
    func updateText(logo: UITextView, data: String) {
        print("DDDDDDDDDDD")
        logo.text = data
        
    }
    func updateLogo(logo: UILabel, data: String) {
        print("DDDDDDDDDDD")
        logo.text = data
        
    }
    
    func setupLogo() {
        
        logo.translatesAutoresizingMaskIntoConstraints = false
        logo.topAnchor.constraint(
            equalTo: topNav.topAnchor, constant: 5).isActive = true
        logo.centerXAnchor.constraint(
            equalTo: loginContentView.centerXAnchor).isActive = true
//        logo.backgroundColor = .orange
    }
    
    func setupBTLogo() {
        
        logoBT.translatesAutoresizingMaskIntoConstraints = false
        logoBT.topAnchor.constraint(
            equalTo: btContainer.topAnchor, constant: 5).isActive = true
        logoBT.centerXAnchor.constraint(
            equalTo: loginContentView.centerXAnchor).isActive = true
    }
    
    func setupDLLogo() {
        logoDL.translatesAutoresizingMaskIntoConstraints = false
        logoDL.topAnchor.constraint(
            equalTo: preview.topAnchor, constant: 10).isActive = true
        logoDL.centerXAnchor.constraint(
            equalTo: loginContentView.centerXAnchor).isActive = true
    }
    
    func setuplogoStatus() {
        logoStatus.translatesAutoresizingMaskIntoConstraints = false
        logoStatus.topAnchor.constraint(
            equalTo: preview.topAnchor, constant: 40).isActive = true
        logoStatus.centerXAnchor.constraint(
            equalTo: loginContentView.centerXAnchor).isActive = true
    }


    func setupBTInfo() {
        btInfo.translatesAutoresizingMaskIntoConstraints = false
        btInfo.topAnchor.constraint(
            equalTo: logoBT.topAnchor, constant: 40).isActive = true
        btInfo.centerXAnchor.constraint(
            equalTo: loginContentView.centerXAnchor).isActive = true
    }
    
    func setupDLInfo() {
        
        
        deviceListInfo.translatesAutoresizingMaskIntoConstraints = false
        deviceListInfo.topAnchor.constraint(
            equalTo: logoDL.topAnchor, constant: 60).isActive = true
        
//        deviceListInfo.frame = CGRect(x: 0, y: 0, width: view.frame.size.width, height: 50)

        
        //        logo.frame.size = CGSize(width: max(newSize.width, fixedWidth), height: newSize.height)

//        deviceListInfo.frame.width = view.frame.size.width
//        deviceListInfo.centerXAnchor.constraint(
//            equalTo: loginContentView.centerXAnchor).isActive = true
    }
    
    func setupNavBar() {
        
        topNav.backgroundColor = .systemTeal
        topNav.frame = CGRect(x: 0, y: 0, width: view.frame.size.width, height: 50)
        topNav.isUserInteractionEnabled = true
//        topNav.topAnchor.constraint(
//            equalTo: tableView.bottomAnchor,
//            constant: 40).isActive = true
//        topNav.layer.shadowColor = UIColor.gray.cgColor
//        topNav.layer.shadowOpacity = 0.3
//        topNav.layer.shadowOffset = CGSize(width: 0, height: 5)
//        topNav.layer.shadowRadius = 1
//        topNav.layer.shadowPath = UIBezierPath(rect: topNav.bounds).cgPath
//        topNav.layer.shouldRasterize = true
//        topNav.layer.rasterizationScale = UIScreen.main.scale
    }
    
    func setupPreview() {
//        preview.backgroundColor = .blue
        preview.translatesAutoresizingMaskIntoConstraints = false
       
        preview.frame.size.width = view.frame.size.width - 40
        preview.frame.size.height = 380
//        preview.frame = CGRect(x: 20, y: 100, width: view.frame.size.width - 40, height: view.frame.size.width - 40)
        preview.isUserInteractionEnabled = true
        preview.heightAnchor.constraint(
            equalToConstant: 380).isActive = true
        preview.widthAnchor.constraint(
            equalToConstant: view.frame.size.width - 40).isActive = true
        preview.topAnchor.constraint(
            equalTo: previewScroll.topAnchor).isActive = true
        preview.leftAnchor.constraint(equalTo: previewScroll.leftAnchor).isActive = true
        preview.layer.shadowColor = UIColor.gray.cgColor
        preview.layer.shadowOpacity = 0.5
        preview.layer.shadowOffset = .zero
        preview.layer.shadowRadius = 3
        preview.layer.cornerRadius = 10
        preview.layer.shadowPath = UIBezierPath(rect: preview.bounds).cgPath
        preview.layer.shouldRasterize = true
        preview.layer.rasterizationScale = UIScreen.main.scale
    }
    
    func setupPreviewScroll() {
        
        previewScroll.contentSize = preview.frame.size
        previewScroll.translatesAutoresizingMaskIntoConstraints = false
        previewScroll.backgroundColor = .white
        previewScroll.frame.size.width = view.frame.size.width - 20
        previewScroll.frame.size.height = 580
//        preview.frame = CGRect(x: 20, y: 100, width: view.frame.size.width - 40, height: view.frame.size.width - 40)
        previewScroll.isUserInteractionEnabled = true
        previewScroll.heightAnchor.constraint(
            equalToConstant: 380).isActive = true
        previewScroll.widthAnchor.constraint(
            equalToConstant: view.frame.size.width - 40).isActive = true
        previewScroll.topAnchor.constraint(
            equalTo: btContainer.topAnchor, constant: 100).isActive = true
        previewScroll.leftAnchor.constraint(equalTo: view.leftAnchor, constant: 20).isActive = true
        previewScroll.layer.shadowColor = UIColor.gray.cgColor
        previewScroll.layer.shadowOpacity = 0.5
        previewScroll.layer.shadowOffset = .zero
        previewScroll.layer.shadowRadius = 3
        previewScroll.layer.cornerRadius = 10
        previewScroll.layer.shadowPath = UIBezierPath(rect: preview.bounds).cgPath
        previewScroll.layer.shouldRasterize = true
        previewScroll.layer.rasterizationScale = UIScreen.main.scale
        previewScroll.layer.masksToBounds = false
    }
    
    func setupbtContainer() {
        btContainer.translatesAutoresizingMaskIntoConstraints = false
        btContainer.backgroundColor = .white
        btContainer.frame.size.width = view.frame.size.width - 40
        btContainer.frame.size.height = 100
        btContainer.isUserInteractionEnabled = true
        btContainer.heightAnchor.constraint(
            equalToConstant: 100).isActive = true
        btContainer.widthAnchor.constraint(
            equalToConstant: view.frame.size.width - 40).isActive = true
        btContainer.topAnchor.constraint(
            equalTo: topNav.topAnchor, constant: 200).isActive = true
        btContainer.leftAnchor.constraint(equalTo: view.leftAnchor, constant: 20).isActive = true
        btContainer.layer.shadowColor = UIColor.gray.cgColor
        btContainer.layer.shadowOpacity = 0.5
        btContainer.layer.shadowOffset = .zero
        btContainer.layer.shadowRadius = 3
        btContainer.layer.cornerRadius = 10
        btContainer.layer.shadowPath = UIBezierPath(rect: btContainer.bounds).cgPath
        btContainer.layer.shouldRasterize = true
        btContainer.layer.rasterizationScale = UIScreen.main.scale
    }
    
    func setupShowDevicesButton() {
        
        let wid=250.0
        let height = 50.0
//        let color = .systemGray4
        
        startDevices.translatesAutoresizingMaskIntoConstraints = false
        startDevices.isUserInteractionEnabled = true
        startDevices.backgroundColor = .systemGray4
        startDevices.frame.size.width = wid
        startDevices.frame.size.height = height
        startDevices.topAnchor.constraint(
            equalTo: preview.bottomAnchor,
            constant: -200).isActive = true
        startDevices.centerXAnchor.constraint(
            equalTo: loginContentView.centerXAnchor).isActive = true
        startDevices.widthAnchor.constraint(
            equalToConstant: wid).isActive = true
        startDevices.heightAnchor.constraint(
            equalToConstant:height).isActive = true
        
        
        stopDevices.translatesAutoresizingMaskIntoConstraints = false
        stopDevices.isUserInteractionEnabled = true
        stopDevices.backgroundColor = .systemGray4
        stopDevices.frame.size.width = wid
        stopDevices.frame.size.height = wid
        stopDevices.topAnchor.constraint(
            equalTo: preview.bottomAnchor,
            constant: -130).isActive = true
        stopDevices.centerXAnchor.constraint(
            equalTo: loginContentView.centerXAnchor).isActive = true
        stopDevices.widthAnchor.constraint(
            equalToConstant: wid).isActive = true
        stopDevices.heightAnchor.constraint(
            equalToConstant:height).isActive = true
        
        
        showDevices.translatesAutoresizingMaskIntoConstraints = false
        showDevices.isUserInteractionEnabled = true
        showDevices.backgroundColor = .systemGray4
        showDevices.frame.size.width = wid
        showDevices.frame.size.height = height
        showDevices.topAnchor.constraint(
            equalTo: preview.bottomAnchor,
            constant: -70).isActive = true
        showDevices.centerXAnchor.constraint(
            equalTo: loginContentView.centerXAnchor).isActive = true
        showDevices.widthAnchor.constraint(
            equalToConstant: wid).isActive = true
        showDevices.heightAnchor.constraint(
            equalToConstant:height).isActive = true
    }
    
    func setupLocalizeButton() {
        localizeButton.translatesAutoresizingMaskIntoConstraints = false
        localizeButton.isUserInteractionEnabled = true
        localizeButton.backgroundColor = .orange
        localizeButton.frame.size.width = 273
        localizeButton.frame.size.height = 50
        localizeButton.topAnchor.constraint(
            equalTo: loginContentView.bottomAnchor,
            constant: -50).isActive = true
        localizeButton.centerXAnchor.constraint(
            equalTo: loginContentView.centerXAnchor).isActive = true
        localizeButton.widthAnchor.constraint(
            equalToConstant: 273).isActive = true
        localizeButton.heightAnchor.constraint(
            equalToConstant:50).isActive = true
    }
}
