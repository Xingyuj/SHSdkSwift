//
//  Created by Xingyuji on 27/12/17.
//  Copyright © 2017 com.xingyuji. All rights reserved.
//

import Foundation
import Alamofire
import os.log
import SwiftyBeaver
let log = SwiftyBeaver.self

/// This is a convenience class for the typical single user case. To use this

open class SHClientsManager {
    var appKey: String
    var locationUpdates: String?
    var host: String?
    var libVersion: String?
    var growthHost: String?
    var installId: String?
    var model: String?
    var osVersion: String?
    
    init(appKey: String) {
        self.appKey = appKey
        if let version = Bundle.main.infoDictionary?["CFBundleVersion"]  as? String {
            self.libVersion = version
        }
        // set log
        let console = ConsoleDestination()  // log to Xcode Console
        let file = FileDestination()  // log to default swiftybeaver.log file
        let url = URL.init(string: "/tmp/streethawk.log")
        file.logFileURL = url
        log.addDestination(console)
        log.addDestination(file)
    }
    
    public static func setupWithAppKey(_ appKey: String) {
        NSLog("[StreetHawk] setupWithAppKey [" + appKey + "]")
        let manager = SHClientsManager.init(appKey: appKey)
        manager.findAppHost()
    }
    
    private func findAppHost(){
        print("findAppHost beginning....")
        let managerUtils = SHApiProcessor.init(ManagerConstants.ROUTE_SERVER)
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
            let apiProcessor = SHApiProcessor.init((URL(string: _host)?.host)!)
            print("init ManagerUtil done....")
            apiProcessor.requestScheme = ManagerConstants.HTTPS_SCHEME
            apiProcessor.encoding = JSONEncoding.default
            apiProcessor.path = ManagerConstants.INSTALL_REGISTER
            apiProcessor.parameters = ["sh_version": "1.8.8", "operating_system": "ios"]
            apiProcessor.headers = ["X-App-Key": appKey, "Content-Type": "application/json"]
            apiProcessor.method = HTTPMethod.post
            print("registerInstall initial done....")
            apiProcessor.requestHandler(){ res, error in
                print("registerInstall res returned....")
                if let _res = res {
                    if let installid = _res["value"]["installid"].rawString() {
                        self.installId = installid
                        NSLog("install id: "+installid)
                        self.updateInstall()
                    } else {
                        print("app_status.location_updates is nil")
                    }
                }
            }
        } else {
            os_log("host is unclear", type: .error)
        }
        
    }
    
    private func updateInstall(){
        print("updateInstall beginning....")
        if let _host = host {
            print("updateInstall host got....")
            let managerUtils = SHApiProcessor.init((URL(string: _host)?.host)!)
            print("init ManagerUtil done....")
            managerUtils.requestScheme = ManagerConstants.HTTPS_SCHEME
            managerUtils.encoding = JSONEncoding.default
            managerUtils.path = ManagerConstants.INSTALL_UPDATE
            managerUtils.parameters = [
                ManagerConstants.APP_KEY: appKey,
                ManagerConstants.INSTALL_ID: installId ?? "",
                ManagerConstants.SH_LIBRARY_VERSION: ManagerUtils.getPlistVersion,
                ManagerConstants.OPERATING_SYSTEM: "ios",
                ManagerConstants.CLIENT_VERSION: ManagerUtils.getPlistVersion,
                ManagerConstants.MODEL: model ?? "",
                ManagerConstants.OS_VERSION: UIDevice.current.systemVersion,
                ManagerConstants.MAC_ADDRESS: UIDevice.current.identifierForVendor ?? ""
            ]
            managerUtils.headers = [
                "X-App-Key": appKey,
                "X-Installid": installId ?? "",
                "Content-Type": "application/json"
            ]
            managerUtils.method = HTTPMethod.post
            
            print("updateInstall initial done....")
            managerUtils.requestHandler(){ res, error in
                print("updateInstall res returned....")
                if let _res = res {
                    log.info("Install update successful, res: \(String(describing: _res))")
                    print("Install update successful, res: \(String(describing: _res))")
                } else if let _error = error {
                    NSLog(_error.localizedDescription)
                } else {
                    os_log("Both response and error are nil return from server", type: .error)
                }
            }
        } else {
            os_log("host is unclear", type: .error)
        }
    }
    
}
