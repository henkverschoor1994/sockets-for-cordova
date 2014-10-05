#import <Cordova/CDV.h>

@interface SocketPlugin : CDVPlugin {
    NSMutableDictionary *socketAdapters;
}

-(void) create: (CDVInvokedUrlCommand *) command;
-(void) connect: (CDVInvokedUrlCommand *) command;
-(void) write: (CDVInvokedUrlCommand *) command;
-(void) close: (CDVInvokedUrlCommand *) command;
-(void) setOptions: (CDVInvokedUrlCommand *) command;

@end