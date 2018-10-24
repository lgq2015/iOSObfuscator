//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerAnimatedTransitioning.h"

@class NSString, UIView;

@interface GDTVideoTransition : NSObject <UIViewControllerAnimatedTransitioning>
{
    unsigned long long _transitionMode;
    double _duration;
    UIView *_sourceSuperView;
    UIView *_sourceView;
    struct CGRect _sourceFrame;
    struct CGRect _toFrame;
}

@property(nonatomic) struct CGRect toFrame; // @synthesize toFrame=_toFrame;
@property(nonatomic) struct CGRect sourceFrame; // @synthesize sourceFrame=_sourceFrame;
@property(nonatomic) __weak UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(nonatomic) __weak UIView *sourceSuperView; // @synthesize sourceSuperView=_sourceSuperView;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned long long transitionMode; // @synthesize transitionMode=_transitionMode;
- (void).cxx_destruct;
- (void)dismissAniamtionWithContext:(id)arg1;
- (void)presentAniamtionWithContext:(id)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
