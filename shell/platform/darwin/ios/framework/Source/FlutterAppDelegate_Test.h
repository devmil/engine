// Copyright 2013 The Flutter Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

@class FlutterViewController;

@interface FlutterAppDelegate (Test)
@property(nonatomic, copy) FlutterViewController* (^rootFlutterViewControllerGetter)(void);

@end
