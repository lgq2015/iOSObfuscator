//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface GDT_Task : NSObject <NSCoding>
{
    _Bool _hasFailed;
    _Bool _hasLock;
    NSString *_url;
    double _timePoint;
    long long _failedCount;
}

@property(nonatomic) _Bool hasLock; // @synthesize hasLock=_hasLock;
@property(nonatomic) _Bool hasFailed; // @synthesize hasFailed=_hasFailed;
@property(nonatomic) long long failedCount; // @synthesize failedCount=_failedCount;
@property(nonatomic) double timePoint; // @synthesize timePoint=_timePoint;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
