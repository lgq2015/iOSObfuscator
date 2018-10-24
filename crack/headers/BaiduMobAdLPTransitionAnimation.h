//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerAnimatedTransitioning.h"

@class NSString;

@interface BaiduMobAdLPTransitionAnimation : NSObject <UIViewControllerAnimatedTransitioning>
{
    _Bool _isPresentAnimation;
    _Bool _isCancel;
    _Bool _isFinish;
    id <UIViewControllerContextTransitioning> _transitionContext;
}

@property(nonatomic) id <UIViewControllerContextTransitioning> transitionContext; // @synthesize transitionContext=_transitionContext;
@property _Bool isFinish; // @synthesize isFinish=_isFinish;
@property _Bool isCancel; // @synthesize isCancel=_isCancel;
@property _Bool isPresentAnimation; // @synthesize isPresentAnimation=_isPresentAnimation;
- (void)cancel;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
