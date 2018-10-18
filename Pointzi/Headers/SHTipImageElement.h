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

@interface SHTipImageElement : SHTipBaseElement

/**
 "http://abc.com/1.jpg" or “photo.png”
 */
@property (nonatomic, strong) NSString *resource;

/**
 App inside image, such as “tip_placeholder.png”.
 */
@property (nonatomic, strong) NSString *placeholder;

/**
 Background color.
 */
@property (nonatomic, strong) UIColor *backgroundColor;

/**
 Image alignment.
 */
@property (nonatomic) SHTipImageAlignment imageAlign;

/**
 150 or 0.9, parsed from 150 or 90%.
 */
@property (nonatomic) CGFloat width;

/**
 original width get from feed which set by user
 */
@property (nonatomic) CGFloat feedWidth;

/**
 150 or 0.9 or 0, parsed from 150 or 90% or auto.
 */
@property (nonatomic) CGFloat height;

/**
 original height get from feed which set by user
 */
@property (nonatomic) CGFloat feedHeight;

/**
 Whether keep original image width/height ratio. The value is true/false.
 When manually set height pixel DP or percentage, and it’s might be different from original image’s ratio. 
 If scale = true, the image will be stretched to fill all the image area; 
 if scale = false, the image’s width takes image area’s width, and height may exceed or not fill, just put the image height center.
 */
@property (nonatomic) BOOL scale;

/**
 The offset of the image based on preview’s image-align calculation, default is 0.
 */
@property (nonatomic) FourSide margin;

/**
 The box shadow.
 */
@property (nonatomic) CGFloat boxShadow;

/**
 Color of border.
 */
@property (nonatomic, strong) UIColor *borderColor;

/**
 Width of border.
 */
@property (nonatomic) CGFloat borderWidth;

/**
 Corner radius.
 */
@property (nonatomic) CGFloat cornerRadius;

/**
 Utility function for layout this image element inside contain view.
 */
+ (void)layoutImageElements:(NSArray<SHTipImageElement *> *)arrayImages inView:(UIView *)containView withSize:(CGSize)tipContainerSize;

@end
