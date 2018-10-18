# Pointzi iOS SDK

[![Version](https://img.shields.io/cocoapods/v/pointzi.svg?style=flat)](http://cocoadocs.org/docsets/pointzi)
[![License](https://img.shields.io/cocoapods/l/pointzi.svg?style=flat)](http://cocoadocs.org/docsets/pointzi)
[![Platform](https://img.shields.io/cocoapods/p/pointzi.svg?style=flat)](http://cocoadocs.org/docsets/pointzi)

Support iOS 8.0 and above.

## Cocopods Installation

1. Install [CocoaPods](http://cocoapods.org).
2. Add pod line into your Podfile and run "pod install".

    pod "pointzi"

## Pointzi web console

Register App on [Pointzi web console](https://dashboard.pointzi.com/).

[Additional documentation](https://pointzi.freshdesk.com).

## Author

support@pointzi.com

## License

The Pointzi iOS SDK is available under the LGPL license. See the LICENSE file for more info.

## Release Notes
Version Number   : 1.4.0
Release Date     : 12-October-2018
* Widget targeting algorithm changed to allow users to accurately select more widgets from a screenshot IOS-1348
* Supertag generating algorithm changed to match screenshot metadata IOS-1398
* Fixed behaviour of multiple tips showing, now only one tip can ever be displayed on the screen at one time. IOS-1377
* Fixed a bug that happened when device was rotated while a pointzi tip is showing IOS-1390
* Fixed a bug that caused carousel images to show abnormally after device rotation IOS-1371

Version Number   : 1.3.5

Release Date     : 13-September-2018

* add a new launcher, now tips can be triggerred by "Click" on a widget
* add new integration methods, now pointzi can be integrated without CocoaPod

Version Number   : 1.3.4

Release Date     : 27-August-2018

* adjusted image layering order to follow design of dashboard

Version Number   : 1.3.3

Release Date     : 10-August-2018

* fixed a bug that happens when device switches between landscape and portrait
* fixed a bug that caused tips to be displayed twice
* improved algorithm to recognize most widgets when doing snapshot
* fixed a crash when a tip place off content
* fixed a crash when user adds a button to viual effect view
* image behaviour changed to be more reasonable
* fixed a bug which may show a dismissed tip again
* replaced default placeholder image with a more suitable one

Version Number   : 1.3.2

Release Date     : 04-July-2018

* fixed a bug that may incur a react native app crash
* fixed a bug that prevent an image resource to show
* prevent log flush when generating React Native snapshot
* fixed a bug that may incur preview mode polling to be stopped
* changed the tip default behaviour, now if user set tip's width as 0 or leave it blank, tip's width will stretch to full screen
* fixed a third party lib (FLAnimatedImage) clash issue

Version Number   : 1.3.1

Release Date     : 16-March-2018

* Fix bug SVG lib now generate with full bitcode;
* Enable bitcode of Pointzi demo Apps, and the same build error of customer’s show up.

Version Number   : 1.3.0

Release Date     : 14-March-2018

* Support using segment.io sending traits to tag on streethawk

Version Number   : 1.2.2

Release Date     : 13-February-2018

* Support react-native.
* Support coachmark.
* Support gif image and growing launcher.
* UITabbarButton supports launcher.
* Fix demo App layout.
* Remove polling button in preview widget.

Version Number   : 1.2.1

Release Date     : 5-December-2017

* More support carousel.

Version Number   : 1.2.0

Release Date     : 24-November-2017

* Support carousel.
* Delete local cache in preview mode.
* UISegmentedController can selected inner items.
* Add x, y, label meta data in super tag.
* API add nullability specifier.
* Support feedback.

Version Number   : 1.1.2

Release Date     : 1-November-2017

* Fix image margin bug.

Version Number   : 1.1.1

Release Date     : 27-October-2017

* Show Tip in ANY page.
* Structure tip elements.
* Text of tip add line-height settings.

Version Number   : 1.1.0

Release Date     : 10-October-2017

* Easy enter/exit preview mode.
* Native image is supported in tip.
* Polling request in series queue.
* When show preview mode, set polling enabled by default.
* Launcher can be added into navigation bar.

Version Number   : 1.0.7

Release Date     : 5-September-2017

* Add log for deeplinking process.

Version Number   : 1.0.3

Release Date     : 4-August-2017

* Fix navigation button order change when navigating back and forth.

Version Number   : 1.0.2

Release Date     : 3-August-2017

* Bug fix and performance improved.

Version Number   : 1.0.1

Release Date     : 11-July-2017

* Fix tip may not show on first page.


Version Number   : 1.0.0

Release Date     : 1-July-2017

* Fix bitcode.
* Fix crash of table view scroll out of range.
* Modal tip add support of placement.
