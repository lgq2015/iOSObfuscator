//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@protocol LZMFProjManagerDelegate <NSObject>

@optional
- (void)getPositionInfoWithInfoTrackDuration:(float)arg1 relTime:(float)arg2;
- (void)getVolumeWithVolume:(long long)arg1;
- (void)getSearchDeviceWithArray:(NSMutableArray *)arg1;
@end
