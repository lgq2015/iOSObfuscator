//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IMKeyValueStore : NSObject
{
    NSString *_storeDomain;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSString *storeDomain; // @synthesize storeDomain=_storeDomain;
- (void).cxx_destruct;
- (id)generateKeyFor:(id)arg1;
- (void)dealloc;
- (void)removeObjectForKey:(id)arg1;
- (_Bool)sync;
- (id)getObjectForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)numberForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
- (id)dateForKey:(id)arg1;
- (_Bool)boolForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (id)setForKey:(id)arg1;
- (void)setDictionary:(id)arg1 forKey:(id)arg2;
- (void)setSet:(id)arg1 forKey:(id)arg2;
- (void)setArray:(id)arg1 forKey:(id)arg2;
- (void)setDate:(id)arg1 forKey:(id)arg2;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (void)setData:(id)arg1 forKey:(id)arg2;
- (void)setNumber:(id)arg1 forKey:(id)arg2;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (id)initWithDomain:(id)arg1;

@end
