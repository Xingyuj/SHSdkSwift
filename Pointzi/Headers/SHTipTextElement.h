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

@interface SHTipTextElement : SHTipBaseElement

/**
 Text of the tip.
 */
@property (nonatomic, strong) NSString *text;

/**
 Line height of this element. It can be:
 1. DP, such as 28.
 2. Percentage, such as 110%.
 */
@property (nonatomic) CGFloat lineHeight;

/**
 Text color of the tip.
 */
@property (nonatomic, strong) UIColor *textColor;

/**
 Text background color of the tip.
 */
@property (nonatomic, strong) UIColor *backgroundColor;

/**
 Text alignment of the tip.
 */
@property (nonatomic) NSTextAlignment alignment;

/**
 Padding of the tip.
 */
@property (nonatomic) FourSide padding;

/**
 Margin of the tip.
 */
@property (nonatomic) FourSide margin;

/**
 The text's box shadow.
 */
@property (nonatomic) CGFloat boxShadow;

/**
 The text's font name.
 */
@property (nonatomic, strong) NSString *fontName;

/**
 The text's font size.
 */
@property (nonatomic) CGFloat fontSize;

/**
 The text's font weight. Just keep original data from payload.
 */
@property (nonatomic, strong) NSString *fontWeight;

/**
 Utility function for layout this text element to a label.
 */
+ (void)layoutLabel:(UILabel *)label inView:(UIView *)containView withTextElement:(SHTipTextElement *)textElement;

/**
 Calculate the text height inside max width.
 */
+ (CGFloat)calculateTextHeightForElement:(SHTipTextElement *)textElement inside:(CGFloat)maxWidth;

@end
