//NSBluetoothAlwaysUsageDescription//
//  HomeNavbarView.swift
//  lumost-test
//
//  Created by Asad Sheikh on 4/27/22.
//

import SwiftUI

struct HomeNavbarView: View {
    var body: some View {
        HStack {
            
            
            Spacer()
            
            
            
            Image(systemName: "antenna.radiowaves.left.and.right")
                .foregroundColor(.white)
            
            Circle()
                .fill(.green)
                .frame(width: 8, height: 8)
                
        }
        .padding()
    }
}

struct HomeNavbarView_Previews: PreviewProvider {
    static var previews: some View {
        HomeNavbarView()
            .previewLayout(.fixed(width: 320, height: 25))
            .background(.teal)
            .frame(maxWidth: .infinity, maxHeight: .infinity)
                .background(.teal)
                
    }
}
