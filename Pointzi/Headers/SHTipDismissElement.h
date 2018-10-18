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

@interface SHTipDismissElement : SHTipBaseElement

/**
 Dismiss button image resource name. It's built inside App's resource bundle.
 If the file name in payload has no extension, use ***.png.
 */
@property (nonatomic, strong) NSString * icon;

/**
 The dismiss button's width.
 */
@property (nonatomic) CGFloat width;

/**
 The dismiss button's height.
 */
@property (nonatomic) CGFloat height;

/**
 The dismiss button's padding.
 */
@property (nonatomic) FourSide padding;

/**
 The dismiss button's margin.
 */
@property (nonatomic) FourSide margin;

/**
 The dismiss button's color.
 */
@property (nonatomic, strong) UIColor *buttonColor;

/**
 The dismiss button's backgroundcolor.
 */
@property (nonatomic, strong) UIColor *backgroundColor;

/**
 The dismiss button's border color.
 */
@property (nonatomic, strong) UIColor *borderColor;

/**
 The dismiss button's border width.
 */
@property (nonatomic) CGFloat borderWidth;

/**
 The dismiss button's corner radius.
 */
@property (nonatomic) CGFloat borderCornerRadius;

/**
 Button for positive on delete confirm dialog, which is on the left.
 */
@property (nonatomic, strong) NSString *dismissB1;

/**
 Button for negative on delete confirm dialog, which is on the right.
 */
@property (nonatomic, strong) NSString *dismissB2;

/**
 Title on delete confirm dialog.
 */
@property (nonatomic, strong) NSString *dialogTitle;

/**
 Message content on delete confirm dialog.
 */
@property (nonatomic, strong) NSString *dialogContent;

/**
 Utility function for layout this dismiss element to a UIButton.
 */
+ (void)layoutButton:(UIButton *)button withDismissElement:(SHTipDismissElement *)dismissElement;

@end
