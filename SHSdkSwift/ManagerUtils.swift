//
//  ManagerUtils.swift
//  SHSdkSwift
//
//  Created by Xingyuji on 29/12/17.
//  Copyright © 2017 com.xingyuji. All rights reserved.
//

import Foundation
import SwiftyJSON

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
    
    public static func getSDKVersion() -> String{
        return ManagerConstants.versionSDK
    }
    
    public static func assembleLogRecords(_ logBuffer: inout Array<Any>, _ content: JSON){
        var targetJson = content
        let formatter = DateFormatter()
        formatter.dateFormat = "yyyy/MM/dd HH:mm:ss"
        let createdAt = formatter.string(from: Date())
        targetJson[ManagerConstants.LOGID].string = UUID().uuidString
        targetJson[ManagerConstants.CREATED_ON_CLIENT].string = createdAt
        targetJson[ManagerConstants.CREATED_LOCAL_TIME].string = createdAt
        logBuffer.append(targetJson.rawValue)
    }
    
}

