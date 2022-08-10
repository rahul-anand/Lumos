//
//  ViewController.swift
//  Prototype
//
//  Created by Joanne  Park  on 4/6/21.
//

import UIKit

class ViewController: UIViewController {

    let loginContentView:UIView = {
        let view = UIView()
        view.backgroundColor = .white
        
        return view
    }()
    
    let appTitle: UILabel = {
        let text = UILabel()
        text.text = "LUMOS"
        text.textColor = .black
        text.font = UIFont.boldSystemFont(ofSize: 55)
        return text
    }()
    
    let emailField: UITextField = {
        let ef = UITextField()
        ef.attributedPlaceholder = NSAttributedString(string: "Email", attributes:[NSAttributedString.Key.foregroundColor: UIColor.systemGray])
        ef.textColor = .black
        ef.layer.borderWidth = 1.0
        ef.layer.borderColor = UIColor.orange.cgColor
        ef.layer.sublayerTransform = CATransform3DMakeTranslation(13, 0, 0)
        ef.layer.cornerRadius = 5
        return ef
    }()
    
    let passwordField: UITextField = {
        let pf = UITextField()
        pf.attributedPlaceholder = NSAttributedString(string: "Password", attributes:[NSAttributedString.Key.foregroundColor: UIColor.systemGray])
        pf.textColor = .black
        pf.layer.borderWidth = 1.0
        pf.layer.sublayerTransform = CATransform3DMakeTranslation(13, 0, 0)
        //F37945
        pf.layer.borderColor = UIColor.orange.cgColor
        pf.layer.cornerRadius = 5
       return pf
    }()
    
    let loginButton: UIButton = {
        let lb = UIButton(type: .system)
        lb.setTitle("LOGIN", for: .normal)
        lb.setTitleColor(.white, for: .normal)
        lb.addTarget(
            self,
            action: #selector(loginButtonPressed),
            for: UIControl.Event.touchUpInside)
        lb.layer.cornerRadius = 25
        return lb
    }()
    
    let registerButton: UIButton = {
        let lb = UIButton(type: .system)
        lb.setTitle("REGISTER", for: .normal)
        lb.setTitleColor(.white, for: .normal)
        lb.addTarget(
            self,
            action: #selector(loginButtonPressed),
            for: UIControl.Event.touchUpInside)
        lb.layer.cornerRadius = 25
        return lb
    }()
    
    let orText: UILabel = {
        let text = UILabel()
        text.text = "-or-"
        text.textColor = .black
        return text
    }()
    
    @objc func loginButtonPressed(sender: UIButton!){
        self.performSegue(withIdentifier: "LoginToMain", sender: sender) // go to Unity view
    }
    override func viewDidLoad() {
        super.viewDidLoad()
        view.backgroundColor = .white
        setupLoginViewController()
        self.hideKeyboardWhenTappedAround()
        // Do any additional setup after loading the view.
    }

}
