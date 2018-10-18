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

#ifndef Header_h
#define Header_h

#define DEFAULT_TEXT_COLOR          [UIColor blackColor]
#define DEFAULT_BACKGROUND_COLOR    [UIColor clearColor]
#define DEFAULT_PLACEMENT           SHTipPlacement_Left
#define DEFAULT_BORDER_COLOR        DEFAULT_BACKGROUND_COLOR
#define DEFAULT_BOXSHADOW           0
#define DEFAULT_PADDING             0
#define DEFAULT_MARGIN              0
#define DEFAULT_GRAVITY             NSTextAlignmentLeft
#define DEFAULT_FONT_SIZE           -1 //means should use system's default font size
#define DEFAULT_DELAY               0
#define DEFAULT_BORDER_WIDTH        0
#define DEFAULT_CORNER_RADIUS       0
#define DEFAULT_WIDTH               "0"
#define DEFAULT_HEIGHT              "0"
#define DEFAULT_DIM                 0.5
#define DEFAULT_DIM_COLOR           [UIColor colorFromString:@"#A9A9A9"]
#define DEFAULT_LAUNCHER_SIZE       32

/**
 Where the tip should be placed relative to UI element.
 */
enum SHTipPlacement
{
    SHTipPlacement_Unknown = 0,
    SHTipPlacement_Left = 1,
    SHTipPlacement_Right = 2,
    SHTipPlacement_Top = 3,
    SHTipPlacement_Bottom = 4,
};
typedef enum SHTipPlacement SHTipPlacement;

/**
 The type of tip.
 */
enum SHTipType
{
    /**
     Unknown type.
     */
    SHTipType_Unknown = 0,
    /**
     A series of tips, when clicking "Next" button it goes through one by one.
     */
    SHTipType_Tour = 1,
    /**
     A single tip.
     */
    SHTipType_Tip = 2,
    /**
     A modal page.
     */
    SHTipType_Modal = 3,
    /**
     A coach mark page.
     */
    SHTipType_CoachMark = 4,
    /**
     A feedback tip.
     */
    SHTipType_Feedback = 5,
    /**
     A carousel tip.
     */
    SHTipType_Carousel = 6,
};
typedef enum SHTipType SHTipType;

/**
 Coach mark highlight style
 */
enum SHCoachMarkStyle
{
    /**
     Highlight is a circle cover target control.
     */
    SHCoachMarkStyle_circular = 1,
    /**
     Highlight is a rectangle cover target control.
     */
    SHCoachMarkStyle_rectangular = 2,
    /**
     Highlight is a custom rectangle cover target control locating center.
     */
    SHCoachMarkStyle_custom = 3,
};
typedef enum SHCoachMarkStyle SHCoachMarkStyle;

/**
 Coach mark diffuse.
 */
enum SHCoachMarkDiffuse
{
    /**
     None diffuse.
     */
    SHCoachMarkDiffuse_none = 0,
    /**
     Diffuse is gradient.
     */
    SHCoachMarkDiffuse_gradient = 1,
    /**
     Diffuse is blur.
     */
    SHCoachMarkDiffuse_blur = 2,
};
typedef enum SHCoachMarkDiffuse SHCoachMarkDiffuse;

/**
 How should the tip appear.
 */
enum SHTipTrigger
{
    /**
     Unknown type.
     */
    SHTipTrigger_Unknown = 0,
    /**
     Appear immediately after page load.
     */
    SHTipTrigger_PageLoad = 1,
    /**
     Appear when target UI element is clicked.
     */
    SHTipTrigger_Click = 2,
    /**
     Add a launcher, show tip when clicking this launcher.
     */
    SHTipTrigger_Launcher = 3,
};
typedef enum SHTipTrigger SHTipTrigger;

/**
 The supported animation type of the tip.
 */
enum SHTipAnimationType
{
    /**
     No animation.
     */
    SHTipAnimationType_None = 0,
    /**
     Fade animation, in out out.
     */
    SHTipAnimationType_Fade = 1,
    /**
     Slide animation, in out out.
     */
    SHTipAnimationType_Slide = 2,
    /**
     Explode animation, in only.
     */
    SHTipAnimationType_Explode = 3,
    /**
     Compress animation, out only.
     */
    SHTipAnimationType_Compress = 4,
};
typedef enum SHTipAnimationType SHTipAnimationType;

/**
 The supported animation direction.
 */
enum SHTipAnimationDirection
{
    /**
     Unknown direction.
     */
    SHTipAnimationDirection_Unknown = 0,
    /**
     Left direction.
     */
    SHTipAnimationDirection_Left = 1,
    /**
     Top direction.
     */
    SHTipAnimationDirection_Top = 2,
    /**
     Right direction.
     */
    SHTipAnimationDirection_Right = 3,
    /**
     Bottom direction.
     */
    SHTipAnimationDirection_Bottom = 4,
};
typedef enum SHTipAnimationDirection SHTipAnimationDirection;

/**
 The display type of tip.
 */
enum SHTipDisplayType
{
    /**
     Dom type.
     */
    SHTipDisplayType_Dom = 1 << 0,
    /**
     Faq type.
     */
    SHTipDisplayType_Faq = 1 << 1,
    /**
     Feed type.
     */
    SHTipDisplayType_Feed = 1 << 2,
};
typedef enum SHTipDisplayType SHTipDisplayType;

/**
 Image's alignment.
 */
enum SHTipImageAlignment
{
    SHTipImageAlignment_LeftTop,
    SHTipImageAlignment_LeftMiddle,
    SHTipImageAlignment_LeftBottom,
    SHTipImageAlignment_CenterTop,
    SHTipImageAlignment_CenterMiddle,
    SHTipImageAlignment_CenterBottom,
    SHTipImageAlignment_RightTop,
    SHTipImageAlignment_RightMiddle,
    SHTipImageAlignment_RightBottom,
};
typedef enum SHTipImageAlignment SHTipImageAlignment;

/**
 Four side structure for margin or padding.
 */
struct FourSide
{
    CGFloat top;
    CGFloat bottom;
    CGFloat left;
    CGFloat right;
};
typedef struct FourSide FourSide;

#endif /* Header_h */
