//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@protocol GDTEventStoreProtocol <NSObject>
@property(nonatomic) long long timestamp;
@property(copy, nonatomic) NSString *content;
@property(nonatomic) long long status;
@property(nonatomic) long long sendCount;
@property(nonatomic) long long storeId;
- (long long)eventType;
- (NSDictionary *)contentDict;
@end
