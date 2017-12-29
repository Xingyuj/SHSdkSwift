//
//  ManagerUtils.swift
//  SHSdkSwift
//
//  Created by Xingyuji on 28/12/17.
//  Copyright © 2017 com.xingyuji. All rights reserved.
//

import Foundation
import Alamofire
import SwiftyJSON
import os.log

open class SHApiProcessor {
    var baseUrl: String
    var requestScheme: String?
    var path: String?
    var method: HTTPMethod?
    var parameters: Parameters?
    var headers: HTTPHeaders?
    var encoding: ParameterEncoding?
    var queryItems: [URLQueryItem]?

    
    init(_ baseUrl: String) {
        self.baseUrl = baseUrl
    }
    
    public func requestHandler(completionHandler: @escaping (JSON?, Error?) -> ()){
        var urlComponents = URLComponents()
        urlComponents.scheme = requestScheme
        urlComponents.host = self.baseUrl
        urlComponents.queryItems = queryItems
        if let _path = self.path {
            urlComponents.path = _path
        } else {
            os_log("Missing path uri", type: .error)
        }
        print("Request: \(String(describing: urlComponents.url!))")
        print("method: \(String(describing: method!))")
        print("parameters: \(String(describing: parameters))")
        print("encoding: \(String(describing: encoding!))")
        print("headers: \(String(describing: headers!))")
        Alamofire.request(urlComponents.url!, method: method!, parameters: parameters, encoding: encoding!, headers: headers).responseJSON { response in
            print("Response: \(String(describing: response.response))")
            print("Result: \(String(describing: response.result.value))") // response serialization result
            switch response.result {
                case .success:
                    if let _res = response.result.value {
                        completionHandler(JSON(_res), nil)
                    }
                case .failure(let error):
                    completionHandler(nil, error)
            }
        }
    }
    
}

