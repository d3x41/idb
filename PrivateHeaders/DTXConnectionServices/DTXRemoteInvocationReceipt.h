/**
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <Foundation/Foundation.h>

#import <DTXConnectionServices/CDStructures.h>

@interface DTXRemoteInvocationReceipt : NSObject
{
    dispatch_queue_t _guard;
    CDUnknownBlockType _completionHandler;
    id _returnValue;
    unsigned int _returnType;
}

- (void)invokeCompletionWithReturnValue:(id)arg1 error:(id)arg2;
- (void)handleCompletion:(void(^)(NSNumber *version, NSError *error))arg1;
- (void)_checkedAssign:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end
