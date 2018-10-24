//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GDTWebViewControllerDelegate.h"
#import "SFSafariViewControllerDelegate.h"
#import "UIAlertViewDelegate.h"

@class GDTClickParam, GDTStoreProductCurrentController, NSString, UIViewController;

@interface GDTClickManager : NSObject <SFSafariViewControllerDelegate, UIAlertViewDelegate, GDTWebViewControllerDelegate>
{
    GDTClickParam *_clickParam;
    id <GDTClickManagerDelegate> _delegate;
    UIViewController *_currentViewController;
    GDTStoreProductCurrentController *_storeProductCurrentVC;
}

+ (id)generateGDTUrlScheme:(id)arg1 clickId:(id)arg2 adId:(id)arg3;
+ (_Bool)canOpenUrlScheme:(id)arg1;
@property(retain, nonatomic) GDTStoreProductCurrentController *storeProductCurrentVC; // @synthesize storeProductCurrentVC=_storeProductCurrentVC;
@property(retain, nonatomic) GDTClickParam *clickParam; // @synthesize clickParam=_clickParam;
@property(nonatomic) __weak UIViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(nonatomic) __weak id <GDTClickManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)notifyListenerLeaveApp;
- (void)notifyListenerModalDidDismiss;
- (void)notifyListenerModalWillDismiss;
- (void)notifyListenerModalDidPresent;
- (void)notifyListenerModalWillPresent;
- (void)popUpWebViewDidClosed;
- (void)popUpWebViewWillClosed;
- (void)reportEvokeSuccess:(id)arg1;
- (void)deepLinkFinished:(_Bool)arg1;
- (void)handleDeepLink;
- (void)openLandingPage;
- (id)finalLandingPage;
- (_Bool)openUrlScheme:(id)arg1;
- (void)safariViewControllerDidFinish:(id)arg1;
- (void)resignActive;
- (void)innerSafariBrower:(id)arg1;
- (void)innerWebViewBrower:(id)arg1;
- (void)openInnerBrowserWithActtype:(long long)arg1 url:(id)arg2 productType:(long long)arg3;
- (void)openInAppStore;
- (void)handleClick:(id)arg1;
- (void)dealloc;
- (id)initWithCurrentViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
