//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface WTVCollectChannelModel : NSObject
{
    NSString *_name;
    long long _cibn;
    long long _channel_id;
    NSArray *_rimage;
}

+ (id)modelCustomPropertyMapper;
@property(retain, nonatomic) NSArray *rimage; // @synthesize rimage=_rimage;
@property(nonatomic) long long channel_id; // @synthesize channel_id=_channel_id;
@property(nonatomic) long long cibn; // @synthesize cibn=_cibn;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;

@end
