//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface AlicloudHTTPDNSMini : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableDictionary *_hostManagerDict;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)dealloc;
- (void)handleNetworkChange:(id)arg1;
- (void)cleanCache;
- (void)queryHttpDNSAsync:(id)arg1;
- (id)getIpsByHostAsync:(id)arg1;
- (void)setPreResolveHosts:(id)arg1;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
