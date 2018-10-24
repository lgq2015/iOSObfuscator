//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "LZMFailViewDelegate.h"
#import "MONActivityIndicatorViewDelegate.h"

@class LZMFailView, MONActivityIndicatorView, NSString;

@interface LZMActivityView : UIView <MONActivityIndicatorViewDelegate, LZMFailViewDelegate>
{
    id <LZMActivityViewDelegate> _delegate;
    LZMFailView *_failView;
    MONActivityIndicatorView *_activityView;
}

@property(retain, nonatomic) MONActivityIndicatorView *activityView; // @synthesize activityView=_activityView;
@property(retain, nonatomic) LZMFailView *failView; // @synthesize failView=_failView;
@property(nonatomic) __weak id <LZMActivityViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)lzm_FailViewRefresh:(id)arg1;
- (id)activityIndicatorView:(id)arg1 circleBackgroundColorAtIndex:(unsigned long long)arg2;
- (void)placeAtTheCenterWithView:(id)arg1;
- (void)remindRequsetFailure;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
