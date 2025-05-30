//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  1 2021 15:19:06).
/**
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <Foundation/Foundation.h>

@class XCDeviceEvent, XCSynthesizedEventRecord;

@protocol XCTMessagingRole_EventSynthesis
- (void)_XCT_enableFauxCollectionViewCells:(void (^)(_Bool, NSError *))arg1;
- (void)_XCT_setLocalizableStringsDataGatheringEnabled:(_Bool)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)_XCT_loadAccessibilityWithTimeout:(double)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)_XCT_setAXTimeout:(double)arg1 reply:(void (^)(int))arg2;
- (void)_XCT_sendString:(NSString *)arg1 maximumFrequency:(unsigned long long)arg2 completion:(void (^)(NSError *))arg3;
- (void)_XCT_getDeviceOrientationWithCompletion:(void (^)(NSNumber *, NSError *))arg1;
- (void)_XCT_updateDeviceOrientation:(long long)arg1 completion:(void (^)(NSError *))arg2;
- (void)_XCT_performDeviceEvent:(XCDeviceEvent *)arg1 completion:(void (^)(NSError *))arg2;
- (void)_XCT_synthesizeEvent:(XCSynthesizedEventRecord *)arg1 completion:(void (^)(NSError *))arg2;
@end

