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

@interface SHTipButtonElement : SHTipBaseElement

/**
 button text of the tip.
 */
@property (nonatomic, strong) NSString *buttonText;

/**
 button color of the tip.
 */
@property (nonatomic, strong) UIColor *textColor;

/**
 button background color of the tip.
 */
@property (nonatomic, strong) UIColor *backgroundColor;

/**
 button border color.
 */
@property (nonatomic, strong) UIColor *borderColor;

/**
 button border width.
 */
@property (nonatomic) CGFloat borderWidth;

/**
 button border corner radius.
 */
@property (nonatomic) CGFloat borderCornerRadius;

/**
 button alignment of the tip.
 */
@property (nonatomic) NSTextAlignment alignment;

/**
 The button's padding.
 */
@property (nonatomic) FourSide padding;

/**
 The button's margin.
 */
@property (nonatomic) FourSide margin;

/**
 The button's box shadow.
 */
@property (nonatomic) CGFloat boxShadow;

/**
 The button's font name.
 */
@property (nonatomic, strong) NSString *fontName;

/**
 The button's font size.
 */
@property (nonatomic) CGFloat fontSize;

/**
 The button's font weight. Just keep original data from payload.
 */
@property (nonatomic, strong) NSString *fontWeight;

/**
 The button's deeplinking url.
 */
@property (nonatomic, strong) NSString *actionUrl;

/**
 The button's width, used for carousel item.
 */
@property (nonatomic) CGFloat width;

/**
 The button's height, used for carousel item.
 */
@property (nonatomic) CGFloat height;

/**
 Utility function for layout this button element to a UIButton.
 */
+ (void)layoutButton:(UIButton *)button inView:(UIView *)containView withButtonElement:(SHTipButtonElement *)buttonElement;

/**
 Calculate the button width inside max width.
 */
+ (CGFloat)calculateButtonWidthForElement:(SHTipButtonElement *)buttonElement inside:(CGFloat)maxWidth;

/**
 Calculate the button height inside max width.
 */
+ (CGFloat)calculateButtonHeightForElement:(SHTipButtonElement *)buttonElement inside:(CGFloat)maxWidth;

/**
 Create a button using this element. Used for Carousel.
 */
- (UIButton *)createButton;

@end
