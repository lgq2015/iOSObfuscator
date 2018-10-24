//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class InMobi_AvidViewObstructionValidator, NSDate, NSDictionary, NSMutableSet, NSTimer;

@interface InMobi_AvidTreeWalker : NSObject
{
    NSTimer *_timer;
    _Bool _stateIsChanged;
    NSDictionary *_prevTree;
    unsigned long long _count;
    NSDate *_date1;
    NSDate *_date2;
    NSMutableSet *_presentedSessionIds;
    InMobi_AvidViewObstructionValidator *_viewObstructionValidator;
    id <InMobi_AvidTreeWalkerTimeLogger> _timeLogger;
}

+ (id)getInstance;
@property(nonatomic) __weak id <InMobi_AvidTreeWalkerTimeLogger> timeLogger; // @synthesize timeLogger=_timeLogger;
- (void).cxx_destruct;
- (void)notifyViewStateChanged;
- (void)onTick:(id)arg1;
- (_Bool)handleAdView:(id)arg1 withState:(id)arg2;
- (id)prevSubviews:(id)arg1 stateAtIndex:(unsigned long long)arg2;
- (void)compareState:(id)arg1 subviewsCount:(unsigned long long)arg2 withPrevState:(id)arg3 prevSubviewsCount:(unsigned long long)arg4;
- (void)addState:(id)arg1 toTree:(id)arg2;
- (void)walkViewTree:(id)arg1 withView:(id)arg2 prevState:(id)arg3 processor:(id)arg4;
- (void)handleWalkResult:(id)arg1;
- (void)doWalk;
- (void)afterWalk;
- (void)beforeWalk;
- (void)updateTreeState;
- (void)pause;
- (void)stop;
- (void)start;
- (id)init;

@end
