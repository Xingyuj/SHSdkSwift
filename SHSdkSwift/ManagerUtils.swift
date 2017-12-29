//
//  ManagerUtils.swift
//  SHSdkSwift
//
//  Created by Xingyuji on 29/12/17.
//  Copyright © 2017 com.xingyuji. All rights reserved.
//

import Foundation

open class ManagerUtils{
    
    public static func getPlistVersion() -> String{
        var version = ""
        if let fileUrl = Bundle.main.url(forResource: "info", withExtension: "plist"),
            let data = try? Data(contentsOf: fileUrl) {
            if let result = try? PropertyListSerialization.propertyList(from: data, options: [], format: nil) as? [[String: Any]] {
                version = result![0]["Bundle version"] as! String
            }
        }
        return version
    }
}

