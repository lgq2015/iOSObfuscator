//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKDBModel.h"

@class NSArray, NSMutableArray, NSString;

@interface LZMLiveModel : LKDBModel
{
    _Bool _isCollect;
    _Bool _isWatchHistory;
    _Bool _isAllowPlayBack;
    long long _channel_Id;
    NSString *_name;
    long long _hot;
    long long _hot_Id;
    NSString *_channel_name;
    long long _cibn;
    NSString *_currentProgram;
    long long _count;
    NSArray *_rimage;
    NSArray *_programArray;
    long long _playback;
    long long _collectTime;
    long long _watchTime;
    NSString *_playback_sort;
    long long _back_days;
    long long _cibn_back_days;
    NSMutableArray *_playerTypeArr;
    NSArray *_iSNoAllowPlayBackeArray;
}

+ (id)describeColumnDict;
+ (id)modelCustomPropertyMapper;
@property(retain, nonatomic) NSArray *iSNoAllowPlayBackeArray; // @synthesize iSNoAllowPlayBackeArray=_iSNoAllowPlayBackeArray;
@property(retain, nonatomic) NSMutableArray *playerTypeArr; // @synthesize playerTypeArr=_playerTypeArr;
@property(nonatomic) long long cibn_back_days; // @synthesize cibn_back_days=_cibn_back_days;
@property(nonatomic) long long back_days; // @synthesize back_days=_back_days;
@property(copy, nonatomic) NSString *playback_sort; // @synthesize playback_sort=_playback_sort;
@property(nonatomic) long long watchTime; // @synthesize watchTime=_watchTime;
@property(nonatomic) long long collectTime; // @synthesize collectTime=_collectTime;
@property(nonatomic) _Bool isAllowPlayBack; // @synthesize isAllowPlayBack=_isAllowPlayBack;
@property(nonatomic) _Bool isWatchHistory; // @synthesize isWatchHistory=_isWatchHistory;
@property(nonatomic) _Bool isCollect; // @synthesize isCollect=_isCollect;
@property(nonatomic) long long playback; // @synthesize playback=_playback;
@property(retain, nonatomic) NSArray *programArray; // @synthesize programArray=_programArray;
@property(retain, nonatomic) NSArray *rimage; // @synthesize rimage=_rimage;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(copy, nonatomic) NSString *currentProgram; // @synthesize currentProgram=_currentProgram;
@property(nonatomic) long long cibn; // @synthesize cibn=_cibn;
@property(copy, nonatomic) NSString *channel_name; // @synthesize channel_name=_channel_name;
@property(nonatomic) long long hot_Id; // @synthesize hot_Id=_hot_Id;
@property(nonatomic) long long hot; // @synthesize hot=_hot;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long channel_Id; // @synthesize channel_Id=_channel_Id;
- (void).cxx_destruct;

@end
