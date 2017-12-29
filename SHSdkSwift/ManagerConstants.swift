//
//  Dictionary.swift
//  SHSdkSwift
//
//  Created by Xingyuji on 28/12/17.
//  Copyright © 2017 com.xingyuji. All rights reserved.
//

import Foundation

public class ManagerConstants {
    static let HTTPS_SCHEME = "https"
    static let ROUTE_SERVER = "route.streethawk.com"
    static let ROUTE_QUERY = "/v1/apps/status"
    static let INSTALL_REGISTER = "/v1/installs/register"
    static let INSTALL_UPDATE = "/v1/installs/update"
    
    //install properties
    static let INSTALL_ID = "installid"
    static let APP_KEY = "app_key"
    static let SH_LIBRARY_VERSION = "sh_version"
    static let CLIENT_VERSION = "client_version"
    static let MODEL = "model"
    static let OPERATING_SYSTEM = "operating_system"
    static let OS_VERSION = "os_version"

    //logging constants
    static let CODE = "code"
    static let SHTIMEZONE = "shtimezone"
    
    /*Push notification codes*/
    
    static let CODE_PUSH_ACK = 8202 // Added in v2
    static let CODE_PUSH_RESULT = 8203 // Added in v2
    
    /*Location codes*/
    static let CODE_LOCATION_UPDATES = 20  // place is separate location modules
    static let CODE_IBEACON_UPDATES = 21  // place in beacon modules
    static let CODE_GEOFENCE_UPDATES = 22 // place in geofence modules
    
    /*Logging codes*/
    static let CODE_APP_OPENED_FROM_BG = 8103
    static let CODE_APP_TO_BG = 8104
    static let CODE_SESSIONS = 8105 //Added for v2
    static let CODE_USER_ENTER_ACTIVITY = 8108
    static let CODE_USER_LEAVE_ACTIVITY = 8109
    static let CODE_COMPLETE_ACTIVITY = 8110
    static let CODE_USER_DISABLES_LOCATION = 8112
    static let CODE_DEVICE_TIMEZONE = 8050
    static let CODE_HEARTBEAT = 8051
    static let CODE_CLIENT_UPGRADE = 8052 // Added in v2
    static let CODE_INCREMENT_TAG = 8997 // Added in v2
    static let CODE_DELETE_CUSTOM_TAG = 8998
    static let CODE_UPDATE_CUSTOM_TAG = 8999
}
