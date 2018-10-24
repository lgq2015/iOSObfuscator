//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BCEventCallback, NSDictionary, NSString;

@interface BCCommand : NSObject
{
    _Bool _canOpenUI;
    long long _timeoutInMS;
    NSString *_event;
    NSString *_path;
    NSDictionary *_params;
    BCEventCallback *_callback;
    NSDictionary *_extraParams;
}

@property(retain, nonatomic) NSDictionary *extraParams; // @synthesize extraParams=_extraParams;
@property(retain, nonatomic) BCEventCallback *callback; // @synthesize callback=_callback;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *event; // @synthesize event=_event;
@property(nonatomic) long long timeoutInMS; // @synthesize timeoutInMS=_timeoutInMS;
@property(nonatomic) _Bool canOpenUI; // @synthesize canOpenUI=_canOpenUI;
- (void).cxx_destruct;

@end
