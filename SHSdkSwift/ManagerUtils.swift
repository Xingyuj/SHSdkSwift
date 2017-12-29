//
//  ManagerUtils.swift
//  SHSdkSwift
//
//  Created by Xingyuji on 29/12/17.
//  Copyright © 2017 com.xingyuji. All rights reserved.
//

import Foundation

open class ManagerUtils{
    
    public static func getPlistValue(_ value: String) -> String{
        var version = ""
        if let fileUrl = Bundle.main.url(forResource: "info", withExtension: "plist"),
            let data = try? Data(contentsOf: fileUrl) {
            if let result = try? PropertyListSerialization.propertyList(from: data, options: [], format: nil) as? [[String: Any]] {
                version = result![0][value] as! String
            }
        }
        return version
    }
    
    public static func getPlistVersion() -> String{
        return Bundle.main.infoDictionary!["CFBundleShortVersionString"] as! String
    }
    
}

