/*
 * Copyright (c) StreetHawk, All rights reserved.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 3.0 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library.
 */

#import "SHTipBaseElement.h"

@interface SHTipWebElement : SHTipBaseElement

/**
 Web url of this tip.
 */
@property (nonatomic, strong) NSString *url;

/**
 Web html content of this tip. `urlcontent` is priority to `url` when presenting web page.
 */
@property (nonatomic, strong) NSString *urlcontent;

/**
 Utility function for layout this web element to a UIWebView.
 */
+ (void)layoutWeb:(UIWebView *)webView inView:(UIView *)containView inVC:(UIViewController *)vc withWebElement:(SHTipWebElement *)webElement;

@end
