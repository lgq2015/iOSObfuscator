//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMUIView.h"

#import "IMTimerDelegate.h"
#import "IMUIInflator.h"

@class CAShapeLayer, IMTimerManager, IMUITimerProperties, NSString, UILabel;

@interface IMUITimerView : IMUIView <IMTimerDelegate, IMUIInflator>
{
    double _currentTime;
    double _duration;
    UILabel *_progressLabel;
    double _timerDelayDuration;
    IMUITimerProperties *_properties;
    CAShapeLayer *_pathLayer;
    IMTimerManager *_delayTimer;
    IMTimerManager *_countdownTimerManager;
}

@property(retain, nonatomic) IMTimerManager *countdownTimerManager; // @synthesize countdownTimerManager=_countdownTimerManager;
@property(retain, nonatomic) IMTimerManager *delayTimer; // @synthesize delayTimer=_delayTimer;
@property(retain, nonatomic) CAShapeLayer *pathLayer; // @synthesize pathLayer=_pathLayer;
@property(retain, nonatomic) IMUITimerProperties *properties; // @synthesize properties=_properties;
@property(nonatomic) double timerDelayDuration; // @synthesize timerDelayDuration=_timerDelayDuration;
@property(retain, nonatomic) UILabel *progressLabel; // @synthesize progressLabel=_progressLabel;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
- (void).cxx_destruct;
- (void)dealloc;
- (void)destroyView;
- (void)drawCountdownTimer;
- (void)stopAndDeinitTimer;
- (void)initAndStartTimer;
- (void)drawTimerBasePath:(struct CGRect)arg1;
- (void)addProgressLabelForPath:(struct CGRect)arg1;
- (void)appEnteredForeground:(id)arg1;
- (void)appEnteredBackground:(id)arg1;
- (void)resumeLayer:(id)arg1;
- (void)pauseLayer:(id)arg1;
- (void)countdownTimerFinished;
- (void)decrementTime;
- (void)deregisterNotifications;
- (void)registerNotifications;
- (void)clearProperties;
- (void)timerHitForManager:(id)arg1;
- (void)delayTimerStart;
- (id)initWithProperties:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
