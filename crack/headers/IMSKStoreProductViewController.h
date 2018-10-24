//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKStoreProductViewController.h"

#import "SKStoreProductViewControllerDelegate.h"

@class IMRenderView, NSString, NSTimer, UIActivityIndicatorView, UIViewController;

@interface IMSKStoreProductViewController : SKStoreProductViewController <SKStoreProductViewControllerDelegate>
{
    _Bool _autoShow;
    _Bool _isTimerExpired;
    int _skStoreState;
    NSString *_ID;
    NSString *_scheme;
    id <IMSKStoreProductViewControllerDelegate> _skStoreDelegate;
    UIActivityIndicatorView *_loadingIndicator;
    UIViewController *_rootViewController;
    IMRenderView *_renderView;
    NSTimer *_timer;
}

@property(nonatomic) _Bool isTimerExpired; // @synthesize isTimerExpired=_isTimerExpired;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) __weak IMRenderView *renderView; // @synthesize renderView=_renderView;
@property(nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(retain, nonatomic) UIActivityIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(nonatomic) __weak id <IMSKStoreProductViewControllerDelegate> skStoreDelegate; // @synthesize skStoreDelegate=_skStoreDelegate;
@property(nonatomic) _Bool autoShow; // @synthesize autoShow=_autoShow;
@property(retain, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
@property(retain, nonatomic) NSString *ID; // @synthesize ID=_ID;
@property(nonatomic) int skStoreState; // @synthesize skStoreState=_skStoreState;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)shouldAutorotate;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendCallBackForSKStoreDidDismissScreen;
- (void)sendCallBackForSKStoreWillDismissScreen;
- (void)sendCallBackForSKStoreDidPresentScreen;
- (void)sendCallBackForSKStoreWillPresentScreen;
- (void)sendCallBackForSKStoreLoadFailedWithError:(id)arg1;
- (void)sendCallBackForSKStoreLoadFinished;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)removeLoadingIndicatorOnRenderView;
- (void)addLoadingIndicatorOnRenderView;
- (void)stopLoadingSkStore;
- (void)invalidateTimer;
- (void)presentSKStoreFromViewController:(id)arg1;
- (void)showSkStoreFromViewController:(id)arg1;
- (void)loadSKStoreWithParameters:(id)arg1;
- (id)initWithScheme:(id)arg1 productID:(id)arg2 renderView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
