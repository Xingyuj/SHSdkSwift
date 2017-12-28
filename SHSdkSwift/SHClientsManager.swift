//
//  Created by Xingyuji on 27/12/17.
//  Copyright © 2017 com.xingyuji. All rights reserved.
//

import Foundation
import Alamofire
import os.log

/// This is a convenience class for the typical single user case. To use this

open class SHClientsManager {
    var appKey: String
    var locationUpdates: String?
    var host: String?
    var libVersion: String?
    var growthHost: String?
    var installId: String?
    
    init(appKey: String) {
        self.appKey = appKey
        if let version = Bundle.main.infoDictionary?["CFBundleVersion"]  as? String {
            self.libVersion = version
        }
    }
    
    public static func setupWithAppKey(_ appKey: String) {
        NSLog("[StreetHawk] setupWithAppKey [" + appKey + "]")
        let manager = SHClientsManager.init(appKey: appKey)
        manager.findAppHost()
    }
    
    private func findAppHost(){
        print("findAppHost beginning....")
        let managerUtils = ManagerUtils.init(ManagerConstants.ROUTE_SERVER)
        managerUtils.requestScheme = ManagerConstants.HTTPS_SCHEME
        managerUtils.encoding = URLEncoding.default
        managerUtils.path = ManagerConstants.ROUTE_QUERY
        managerUtils.parameters = ["app_key": appKey]
        managerUtils.method = HTTPMethod.get
        managerUtils.headers = ["X-App-Key": "hipointX", "X-Version": "1.8.8", "User-Agent": "hipointX(1.8.8)"]
        
        print("prepare processing SHApi....")
        managerUtils.requestHandler(){ res, error in
            if let _res = res {
                if let locationUpdates = _res["app_status"]["location_updates"].rawString() {
                    self.locationUpdates = locationUpdates
                } else {
                    print("app_status.location_updates is nil")
                }
                if let host = _res["app_status"]["host"].rawString() {
                    self.host = host
                    self.registerInstall()
                } else {
                    print("app_status.host is nil")
                }
                if let growthHost = _res["app_status"]["growth_host"].rawString() {
                    self.growthHost = growthHost
                } else {
                    print("app_status.growth_host is nil")
                }
            } else if let _error = error {
                NSLog(_error.localizedDescription)
            } else {
                os_log("Both response and error are nil return from server", type: .error)
            }
        }
    }
    
    private func registerInstall(){
        print("registerInstall beginning....")
        if let _host = host {
            print("registerInstall host got....")
            let managerUtils = ManagerUtils.init((URL(string: _host)?.host)!)
            print("init ManagerUtil done....")
            managerUtils.requestScheme = ManagerConstants.HTTPS_SCHEME
            managerUtils.encoding = JSONEncoding.default
            managerUtils.path = ManagerConstants.INSTALL_REGISTER
            managerUtils.parameters = ["sh_version": "1.8.8", "operating_system": "ios"]
            managerUtils.headers = ["X-App-Key": appKey, "Content-Type": "application/json"]
            managerUtils.method = HTTPMethod.post
            print("registerInstall initial done....")
            managerUtils.requestHandler(){ res, error in
                print("registerInstall res returned....")
                if let _res = res {
                    if let installid = _res["value"]["installid"].rawString() {
                        self.installId = installid
                        NSLog("install id: "+installid)
                    } else {
                        print("app_status.location_updates is nil")
                    }
                }
            }
        } else {
            os_log("host is unclear", type: .error)
        }
        
    }
    
    
}
