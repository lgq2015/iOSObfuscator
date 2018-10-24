//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSString;

@interface TDAACloudControl : NSObject
{
    struct _opaque_pthread_mutex_t mutex;
    _Bool _retried;
    unsigned int _service;
    NSString *_appID;
    NSString *_channelID;
    NSDictionary *_cloudControlData;
    NSDictionary *_dataSource;
    NSMutableDictionary *_controlCounter;
    long long _lastFetchTime;
}

+ (id)sharedCloudControl;
@property(nonatomic) _Bool retried; // @synthesize retried=_retried;
@property(nonatomic) long long lastFetchTime; // @synthesize lastFetchTime=_lastFetchTime;
@property(retain, nonatomic) NSMutableDictionary *controlCounter; // @synthesize controlCounter=_controlCounter;
@property(retain, nonatomic) NSDictionary *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSDictionary *cloudControlData; // @synthesize cloudControlData=_cloudControlData;
@property(nonatomic) unsigned int service; // @synthesize service=_service;
@property(retain, nonatomic) NSString *channelID; // @synthesize channelID=_channelID;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
- (void).cxx_destruct;
- (id)pinnedCertificates;
- (_Bool)isSafeCountry;
- (id)isEnabledName:(id)arg1;
- (void)requestFailed:(id)arg1;
- (void)requestSuccess:(id)arg1;
- (void)fetchCloudControlSettings;
- (void)combineResourceSettings:(id)arg1;
- (void)updateCloudControlData:(id)arg1;
- (void)unarchiveCloudControlData;
- (void)archiveCloudControlData:(id)arg1;
- (id)dataFilePath;
- (void)unarchiveCloudControlCache;
- (void)archiveCloudControlCache;
- (id)cacheFilePath;
- (void)setAppID:(id)arg1 channelID:(id)arg2 server:(unsigned int)arg3;
- (id)init;

@end
