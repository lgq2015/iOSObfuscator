//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface GDTEventStore : NSObject
{
    struct sqlite3 *db;
    NSObject<OS_dispatch_queue> *_task_queue;
    long long _storedEventCount;
    long long _storedLogCount;
}

+ (id)sharedInstance;
@property(nonatomic) long long storedLogCount; // @synthesize storedLogCount=_storedLogCount;
@property(nonatomic) long long storedEventCount; // @synthesize storedEventCount=_storedEventCount;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *task_queue; // @synthesize task_queue=_task_queue;
- (void).cxx_destruct;
- (id)tableWithType:(long long)arg1;
- (id)getStorePath;
- (id)getDataBasePath;
- (void)deleteDataBase;
- (void)closeDataBase;
- (struct sqlite3 *)getDataBase;
- (void)initDataBase;
- (int)updateDatabase:(const char *)arg1;
- (void)refreshStoredCountWithType:(long long)arg1;
- (void)resetAllEvents;
- (void)deleteEventArray:(id)arg1 retryTimes:(long long)arg2 complete:(CDUnknownBlockType)arg3;
- (void)updateEventArray:(id)arg1 status:(long long)arg2 retryTimes:(long long)arg3;
- (id)eventArrayWithType:(long long)arg1 count:(long long)arg2;
- (void)storeEvent:(id)arg1 hasTrySent:(_Bool)arg2 complete:(CDUnknownBlockType)arg3;
- (id)init;

@end
