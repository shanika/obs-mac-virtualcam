#import <Foundation/Foundation.h>

#import "ObjectStore.h"

NS_ASSUME_NONNULL_BEGIN

@interface Stream : NSObject <CMIOObject>

@property CMIOStreamID objectId;

- (instancetype _Nonnull)init;

- (CMSimpleQueueRef)copyBufferQueueWithAlteredProc:(CMIODeviceStreamQueueAlteredProc)alteredProc alteredRefCon:(void *)alteredRefCon;

- (void)startServingDefaultFrames;

- (void)stopServingDefaultFrames;

- (void)queueFrameWithSize:(NSSize)size timestamp:(uint64_t)timestamp fpsNumerator:(uint32_t)fpsNumerator fpsDenominator:(uint32_t)fpsDenominator frameData:(NSData *)frameData;

@end

NS_ASSUME_NONNULL_END
