//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "OpenInController.h"

@class NSDictionary, NSString;

@interface SBOpenInController : OpenInController
{
    NSString *_originFileUrlStr;
    NSDictionary *_context;
}

+ (id)presentOpenInForSBOpenInURL:(id)arg1 fromView:(id)arg2 andRemoveDataContextForUrl:(id)arg3 canOpen:(char *)arg4;
+ (id)presentOpenInForSBOpenInURL:(id)arg1 fromView:(id)arg2 canOpen:(char *)arg3;
+ (id)presentOpenInForSBOpenInURL:(id)arg1 fromBarButton:(id)arg2 andRemoveDataContextForUrl:(id)arg3 canOpen:(char *)arg4;
+ (id)presentOpenInForSBOpenInURL:(id)arg1 fromBarButton:(id)arg2 canOpen:(char *)arg3;
@property(retain, nonatomic) NSString *originFileUrlStr; // @synthesize originFileUrlStr=_originFileUrlStr;
@property(retain, nonatomic) NSDictionary *context; // @synthesize context=_context;
- (BOOL)sendUsingSideChannelV2toApplication:(id)arg1 URL:(id)arg2 andFileName:(id)arg3;
- (BOOL)sendUsingSideChannelV1toApplication:(id)arg1 URL:(id)arg2 andFileName:(id)arg3;
- (BOOL)saveUnecryptedFileAtTemporaryPath:(id)arg1;
- (void)dealloc;
- (id)initWithDocumentUrl:(id)arg1;
- (void)orientaionUpdatedNotification:(id)arg1;

@end

