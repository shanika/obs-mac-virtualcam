
#import <CoreMediaIO/CMIOHardwarePlugin.h>

#import "PlugInInterface.h"
#import "Logging.h"
#import "Defines.generated.h"

//! PlugInMain is the entrypoint for the plugin
extern "C" {
    void* PlugInMain(CFAllocatorRef allocator, CFUUIDRef requestedTypeUUID) {
        DLogFunc(@"version=%@", PLUGIN_VERSION);
        if (!CFEqual(requestedTypeUUID, kCMIOHardwarePlugInTypeID)) {
            return 0;
        }

        return PlugInRef();
    }
}
