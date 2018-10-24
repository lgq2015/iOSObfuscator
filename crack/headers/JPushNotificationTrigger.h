//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class CLRegion, NSDate, NSDateComponents;

@interface JPushNotificationTrigger : NSObject <NSCopying, NSCoding>
{
    _Bool _repeat;
    NSDate *_fireDate;
    CLRegion *_region;
    NSDateComponents *_dateComponents;
    double _timeInterval;
}

@property(nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;
@property(copy, nonatomic) NSDateComponents *dateComponents; // @synthesize dateComponents=_dateComponents;
@property(copy, nonatomic) CLRegion *region; // @synthesize region=_region;
@property(copy, nonatomic) NSDate *fireDate; // @synthesize fireDate=_fireDate;
@property(nonatomic) _Bool repeat; // @synthesize repeat=_repeat;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
