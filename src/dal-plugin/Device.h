#import <Foundation/Foundation.h>

#import "ObjectStore.h"

NS_ASSUME_NONNULL_BEGIN

@interface Device : NSObject <CMIOObject>

@property CMIOObjectID objectId;
@property CMIOObjectID pluginId;
@property CMIOObjectID streamId;

@end

NS_ASSUME_NONNULL_END
