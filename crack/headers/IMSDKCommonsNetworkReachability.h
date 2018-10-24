//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IMSDKCommonsNetworkReachability : NSObject
{
    struct __SCNetworkReachability *_reachabilityRef;
}

+ (id)defaultInternetReachability;
+ (id)reachabilityForInternetConnection;
+ (id)reachabilityWithAddress:(const struct sockaddr *)arg1;
- (_Bool)isReachable;
- (int)currentReachabilityStatus;
- (_Bool)connectionRequired;
- (int)networkStatusForFlags:(unsigned int)arg1;
- (void)dealloc;
- (void)stopNotifier;
- (_Bool)startNotifier;

@end
