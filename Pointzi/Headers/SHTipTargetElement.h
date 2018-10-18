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

//If payload's view is this, the tip can show on any page.
#define ANY_PAGR_TOOL    @"_ALL_"

@interface SHTipTargetElement : SHTipBaseElement

/**
 algo 2.0 atrribute ancestor indicates the immediates cutomized view/viewcontroller it belongs to.
 */
@property (nonatomic, strong) NSString *ancestor;

/**
 algo 2.0 atrribute index indicates the index of the same type widget.
 */
@property (nonatomic, strong) NSString *index;

/**
 algo 2.0 atrribute type indicates the type of the selected widget.
 */
@property (nonatomic, strong) NSString *type;

/**
 algo 2.0 atrribute type indicates the algo version of the selected widget.
 */
@property (nonatomic, strong) NSString *algoVersion;

/**
 View controller of starting target page.
 */
@property (nonatomic, strong) NSString *vcClass;

/**
 Target element's reference name or display name, for example: "btnLogin" or "Log in".
 */
@property (nonatomic, strong) NSString *control;

/**
 Only used for child element such as a cell in table. It's the child element's index.
 */
@property (nonatomic) NSInteger section;
@property (nonatomic) NSInteger row;

/**
 Calculated from section and row.
 */
@property (nonatomic, readonly) NSIndexPath *indexPath;

/**
 Keep a reference to its parent element, a tip or a tip series. It will be used when find target view.
 */
@property (nonatomic, weak) id parentElement;

/**
 Whether the target matches the vc.
 */
- (BOOL)matchVC:(UIViewController *)vc;

/**
 Find target view matching this element in a specific view controller.
 */
- (UIView *)findTargetInViewController:(UIViewController *)ctrl;

@end
