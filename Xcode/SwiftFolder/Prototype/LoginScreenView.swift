//
//  LoginScreenView.swift
//  Prototype
//
//  Created by Joanne  Park  on 4/6/21.
//

import Foundation

// modifications to https://betterprogramming.pub/how-to-build-ios-uis-programmatically-e0c4be2c3f24
// close keyboard on tap code from: https://stackoverflow.com/questions/24126678/close-ios-keyboard-by-touching-anywhere-using-swift

extension ViewController {
    func setupLoginViewController() {
        // placing views on screen
        view.addSubview(loginContentView)
        loginContentView.addSubview(appTitle)
        loginContentView.addSubview(emailField)
        loginContentView.addSubview(passwordField)
        loginContentView.addSubview(loginButton)
        loginContentView.addSubview(orText)
        loginContentView.addSubview(registerButton)
        
        // auto layout
        loginContentView.translatesAutoresizingMaskIntoConstraints = false

        // Login container
        loginContentView.heightAnchor.constraint(
            equalToConstant: view.frame.height).isActive = true
        loginContentView.topAnchor.constraint(equalTo: view.topAnchor, constant: 100).isActive = true
        loginContentView.widthAnchor.constraint(
            equalToConstant: view.frame.width - 40).isActive = true
        loginContentView.leftAnchor.constraint(equalTo: view.leftAnchor, constant: 20).isActive = true
        loginContentView.centerYAnchor.constraint(
            equalTo: view.centerYAnchor).isActive = true
        setupAppTitle()
        setupEmailTextField()
        setupPasswordTextField()
        setupLoginButton()
        setupOrText()
        setupRegisterButton()
    }
    
    @objc func dismissKeyboard() {
        view.endEditing(true)
    }
    
    func hideKeyboardWhenTappedAround() {
            let tap = UITapGestureRecognizer(target: self, action: #selector(ViewController.dismissKeyboard))
            tap.cancelsTouchesInView = false
            view.addGestureRecognizer(tap)
        }
        
    func setupAppTitle() {
        appTitle.translatesAutoresizingMaskIntoConstraints = false
        appTitle.topAnchor.constraint(
            equalTo: loginContentView.topAnchor,
            constant: 20).isActive = true
        appTitle.centerXAnchor.constraint(
            equalTo: loginContentView.centerXAnchor).isActive = true
    }
    func setupEmailTextField() {
        emailField.translatesAutoresizingMaskIntoConstraints = false
        emailField.isUserInteractionEnabled = true
        emailField.backgroundColor = .white
        emailField.frame.size.width = 273
        emailField.frame.size.height = 40
        emailField.topAnchor.constraint(
            equalTo: appTitle.topAnchor,
            constant: 180).isActive = true
        emailField.centerXAnchor.constraint(
            equalTo: loginContentView.centerXAnchor).isActive = true
        emailField.widthAnchor.constraint(
            equalToConstant: 273).isActive = true
        emailField.heightAnchor.constraint(
            equalToConstant:40).isActive = true
    }
    
    func setupPasswordTextField() {
        passwordField.translatesAutoresizingMaskIntoConstraints = false
        passwordField.isUserInteractionEnabled = true
        passwordField.backgroundColor = .white
        passwordField.frame.size.width = 273
        passwordField.frame.size.height = 40
        passwordField.topAnchor.constraint(
            equalTo: emailField.bottomAnchor,
            constant: 20).isActive = true
        passwordField.centerXAnchor.constraint(
            equalTo: loginContentView.centerXAnchor).isActive = true
        passwordField.widthAnchor.constraint(
            equalToConstant: 273).isActive = true
        passwordField.heightAnchor.constraint(
            equalToConstant: 40).isActive = true
    }
    
    func setupLoginButton(){
        loginButton.translatesAutoresizingMaskIntoConstraints = false
        loginButton.isUserInteractionEnabled = true
        loginButton.backgroundColor = .orange
        loginButton.frame.size.width = 119
        loginButton.frame.size.height = 50
        loginButton.topAnchor.constraint(
            equalTo: passwordField.bottomAnchor,
            constant: 40).isActive = true
        loginButton.centerXAnchor.constraint(
            equalTo: loginContentView.centerXAnchor).isActive = true
        loginButton.widthAnchor.constraint(
            equalToConstant: 119).isActive = true
        loginButton.heightAnchor.constraint(
            equalToConstant: 50).isActive = true
    }
    
    func setupOrText(){
        orText.translatesAutoresizingMaskIntoConstraints = false
        orText.topAnchor.constraint(
            equalTo: loginButton.bottomAnchor,
            constant: 20).isActive = true
        orText.centerXAnchor.constraint(
            equalTo: loginContentView.centerXAnchor).isActive = true
    }
    
    func setupRegisterButton(){
        registerButton.translatesAutoresizingMaskIntoConstraints = false
        registerButton.isUserInteractionEnabled = true
        registerButton.backgroundColor = .orange
        registerButton.frame.size.width = 119
        registerButton.frame.size.height = 50
        registerButton.topAnchor.constraint(
            equalTo: orText.bottomAnchor,
            constant: 20).isActive = true
        registerButton.centerXAnchor.constraint(
            equalTo: loginContentView.centerXAnchor).isActive = true
        registerButton.widthAnchor.constraint(
            equalToConstant: 119).isActive = true
        registerButton.heightAnchor.constraint(
            equalToConstant: 50).isActive = true
    }
}
