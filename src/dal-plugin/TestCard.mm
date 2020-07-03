
#import "TestCard.h"

#import <AppKit/AppKit.h>
#import "Defines.generated.h"



void DrawTestCardWithFrame(CGContextRef context, NSRect frame)
{
    if (context == NULL) {
        context = NSGraphicsContext.currentContext.CGContext;
    }

    [NSGraphicsContext saveGraphicsState];

    //// Color Declarations
    NSColor* _0078d7 = [NSColor colorWithRed: 0 green: 0.471 blue: 0.843 alpha: 1];

    //// Rectangle Drawing
    NSBezierPath* rectanglePath = [NSBezierPath bezierPathWithRect: NSMakeRect(0, 0, frame.size.width, frame.size.height)];
    [_0078d7 setFill];
    [rectanglePath fill];

    [NSGraphicsContext restoreGraphicsState];
}


NSImage *ImageOfTestCardWithSize(NSSize imageSize)
{
    return [NSImage imageWithSize: imageSize flipped: YES drawingHandler: ^(__unused NSRect dstRect)
    {
        DrawTestCardWithFrame(nil, NSMakeRect(0, 0, imageSize.width, imageSize.height));
        return YES;
    }];
}
