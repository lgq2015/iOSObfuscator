//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, SpotSDK;

@protocol SpotSDKDelegate <NSObject>

@optional
- (void)failToFetchSpot:(SpotSDK *)arg1 error:(NSError *)arg2;
- (void)successToFetchSpot:(SpotSDK *)arg1;
- (void)clickSpot:(SpotSDK *)arg1;
- (void)closeSpot:(SpotSDK *)arg1;
@end
