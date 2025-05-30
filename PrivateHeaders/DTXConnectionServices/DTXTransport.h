/**
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <Foundation/Foundation.h>

@class DTXResourceTracker;

@interface DTXTransport : NSObject
{
    dispatch_queue_t _serializer;
    dispatch_queue_t _handlerGuard;
    DTXResourceTracker *_tracker;
    CDUnknownBlockType _dataReceivedHandler;
    int _status;
    dispatch_semaphore_t _waitForResume;
    BOOL _resumed;
}

+ (BOOL)recognizesURL:(id)arg1;
+ (id)schemes;
@property(readonly, nonatomic) DTXResourceTracker *resourceTracker; // @synthesize resourceTracker=_tracker;
@property int status; // @synthesize status=_status;
- (int)supportedDirections;
- (id)permittedBlockCompressionTypes;
@property(readonly) NSArray *localAddresses;
@property(copy, nonatomic) CDUnknownBlockType dataReceivedHandler;
- (void)disconnect;
- (void)received:(const char *)arg1 ofLength:(unsigned long long)arg2 destructor:(CDUnknownBlockType)arg3;
- (unsigned long long)transmit:(const void *)arg1 ofLength:(unsigned long long)arg2 withRateLimiter:(id)arg3;
- (unsigned long long)transmit:(const void *)arg1 ofLength:(unsigned long long)arg2;
- (id)initWithRemoteAddress:(id)arg1;
- (id)initWithLocalAddress:(id)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)canTransmit;
- (BOOL)canReceive;

@end

