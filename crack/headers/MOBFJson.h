//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MOBFJson : NSObject
{
}

+ (id)_convertArrayObject:(id)arg1 serializeUnsupportedClassesUsingBlock:(CDUnknownBlockType)arg2;
+ (id)_convertDictObject:(id)arg1 serializeUnsupportedClassesUsingBlock:(CDUnknownBlockType)arg2;
+ (id)_convertObject:(id)arg1 serializeUnsupportedClassesUsingBlock:(CDUnknownBlockType)arg2;
+ (id)jsonDataFromObject:(id)arg1 serializeUnsupportedClassesUsingBlock:(CDUnknownBlockType)arg2;
+ (id)jsonDataFromObject:(id)arg1;
+ (id)jsonStringFromObject:(id)arg1 serializeUnsupportedClassesUsingBlock:(CDUnknownBlockType)arg2;
+ (id)jsonStringFromObject:(id)arg1;
+ (id)objectFromJSONData:(id)arg1;
+ (id)objectFromJSONString:(id)arg1;

@end
