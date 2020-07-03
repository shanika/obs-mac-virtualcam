
#import <Foundation/Foundation.h>
#import <CoreMediaIO/CMIOHardwarePlugIn.h>

#import "ObjectStore.h"
#import "MachClient.h"
#import "Stream.h"

#define kTestCardWidthKey @"nametag-mac-virtualcam-test-card-width"
#define kTestCardHeightKey @"nametag-mac-virtualcam-test-card-height"
#define kTestCardFPSKey @"nametag-mac-virtualcam-test-card-fps"

NS_ASSUME_NONNULL_BEGIN

@interface PlugIn : NSObject <CMIOObject>

@property CMIOObjectID objectId;
@property (readonly) MachClient *machClient;
@property Stream *stream;

+ (PlugIn *)SharedPlugIn;

- (void)initialize;

- (void)teardown;

- (void)startStream;

- (void)stopStream;

@end

NS_ASSUME_NONNULL_END
