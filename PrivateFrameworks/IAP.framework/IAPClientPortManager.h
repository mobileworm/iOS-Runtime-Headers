/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IAP.framework/IAP
 */

@interface IAPClientPortManager : NSObject {
    BOOL  _iaptransportdIsRunning;
    NSObject<OS_xpc_object> * _iaptransportdXPCConnection;
    NSMutableDictionary * _portList;
    NSObject<OS_dispatch_queue> * _portListQueue;
}

@property (nonatomic) BOOL iaptransportdIsRunning;

+ (id)sharedInstance;

- (void)dealloc;
- (int)forwardAccessoryDataToIAP:(id)arg1 data:(const char *)arg2 length:(unsigned short)arg3;
- (BOOL)iaptransportdIsRunning;
- (id)init;
- (void)reRegisterHandlers;
- (int)registerSendDataHandler:(id)arg1 queue:(id)arg2 sendBlock:(id /* block */)arg3;
- (void)sendData:(id)arg1 data:(char *)arg2 length:(unsigned short)arg3;
- (void)setIaptransportdIsRunning:(BOOL)arg1;
- (int)unregisterSendDataHandler:(id)arg1;

@end
