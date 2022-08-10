//
//  UnityScreenView.swift
//  Prototype
//
//  Created by Joanne  Park  on 4/13/21.
//

import Foundation

extension UnityViewController {
    func setupUnityViewController() {
        // placing views on screen
        view.addSubview(contentView)
        contentView.addSubview(topNav)
        topNav.addSubview(logo)
        topNav.addSubview(exitButton)
        contentView.addSubview(dsButton)
        
        // auto layout
        contentView.translatesAutoresizingMaskIntoConstraints = false

        // Login container
        contentView.heightAnchor.constraint(
            equalToConstant: view.frame.height).isActive = true
        contentView.topAnchor.constraint(equalTo: view.topAnchor).isActive = true
        contentView.widthAnchor.constraint(
            equalToConstant: view.frame.width).isActive = true
        contentView.leftAnchor.constraint(equalTo: view.leftAnchor).isActive = true
        contentView.centerYAnchor.constraint(
            equalTo: view.centerYAnchor).isActive = true
        
        setupNavBar()
        setupExitButton()
        setupLogo()
        setupDSButton()
    }
    
    func setupExitButton(){
        exitButton.translatesAutoresizingMaskIntoConstraints = false
        exitButton.isUserInteractionEnabled = true
        
        exitButton.layer.cornerRadius = 40
        exitButton.topAnchor.constraint(
            equalTo: view.safeAreaLayoutGuide.topAnchor,
            constant: 5).isActive = true
        exitButton.leftAnchor.constraint(equalTo: view.leftAnchor, constant: 40)
    }
    
    func setupDSButton() {
        dsButton.translatesAutoresizingMaskIntoConstraints = false
        dsButton.isUserInteractionEnabled = true
        dsButton.backgroundColor = .orange
        dsButton.frame.size.width = 80
        dsButton.frame.size.height = 80
        dsButton.layer.cornerRadius = 40
        dsButton.topAnchor.constraint(
            equalTo: view.safeAreaLayoutGuide.bottomAnchor,
            constant: -80).isActive = true
        dsButton.centerXAnchor.constraint(
            equalTo: contentView.centerXAnchor).isActive = true
        dsButton.widthAnchor.constraint(
            equalToConstant: 80).isActive = true
        dsButton.heightAnchor.constraint(
            equalToConstant: 80).isActive = true
    }
    
    func setupLogo() {
        logo.translatesAutoresizingMaskIntoConstraints = false
        logo.topAnchor.constraint(
            equalTo: view.safeAreaLayoutGuide.topAnchor, constant: 5).isActive = true
        logo.centerXAnchor.constraint(
            equalTo: contentView.centerXAnchor).isActive = true
    }
    
    
    
    func setupNavBar() {
        topNav.frame = CGRect(x: 0, y: 0, width: view.frame.size.width, height: 100)
        topNav.isUserInteractionEnabled = true
        topNav.topAnchor.constraint(
            equalTo: contentView.topAnchor,
            constant: 100).isActive = true
        topNav.layer.shadowColor = UIColor.gray.cgColor
        topNav.layer.shadowOpacity = 0.3
        topNav.layer.shadowOffset = CGSize(width: 0, height: 5)
        topNav.layer.shadowRadius = 1
        topNav.layer.shadowPath = UIBezierPath(rect: topNav.bounds).cgPath
        topNav.layer.shouldRasterize = true
        topNav.layer.rasterizationScale = UIScreen.main.scale
    }
}
