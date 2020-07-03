#ifndef Logging_h
#define Logging_h

#include "Defines.generated.h"

#define DLog(fmt, ...) NSLog((PLUGIN_NAME @"(DAL): " fmt), ##__VA_ARGS__)
#define DLogFunc(fmt, ...) NSLog((PLUGIN_NAME @"(DAL): %s " fmt), __FUNCTION__, ##__VA_ARGS__)
#define VLog(fmt, ...)
#define VLogFunc(fmt, ...)
#define ELog(fmt, ...) DLog(fmt, ##__VA_ARGS__)

#endif /* Logging_h */
