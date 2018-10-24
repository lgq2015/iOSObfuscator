//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CSADUnitProtocol.h"
#import "CSInteractiveVCDelegate.h"
#import "CSWebSiteVCDelegate.h"
#import "UIWebViewDelegate.h"
#import "WKNavigationDelegate.h"

@class CSADRequest, NSString, UIViewController, UIWebView, WKWebView;

@interface CSBannerView : UIView <CSADUnitProtocol, WKNavigationDelegate, UIWebViewDelegate, CSWebSiteVCDelegate, CSInteractiveVCDelegate>
{
    _Bool _startLoad;
    _Bool _bannerRun;
    UIViewController *_rootViewController;
    id <CSBannerViewDelegate> _delegate;
    CDUnknownBlockType _showFailure;
    CDUnknownBlockType _willPresent;
    CDUnknownBlockType _didDismiss;
    NSString *_identifier;
    WKWebView *_wkWebView;
    UIWebView *_uiWebView;
    NSString *_baseURLLog;
    NSString *_adOtherParams;
    double _timeStartRequest;
    double _timeShowBanner;
    CSADRequest *_csRequest;
    unsigned long long _requestInterval;
    unsigned long long _displayTime;
    NSString *_publisherID;
    NSString *_placementID;
}

@property(retain, nonatomic) NSString *placementID; // @synthesize placementID=_placementID;
@property(retain, nonatomic) NSString *publisherID; // @synthesize publisherID=_publisherID;
@property(nonatomic) _Bool bannerRun; // @synthesize bannerRun=_bannerRun;
@property(nonatomic) _Bool startLoad; // @synthesize startLoad=_startLoad;
@property(nonatomic) unsigned long long displayTime; // @synthesize displayTime=_displayTime;
@property(nonatomic) unsigned long long requestInterval; // @synthesize requestInterval=_requestInterval;
@property(retain, nonatomic) CSADRequest *csRequest; // @synthesize csRequest=_csRequest;
@property(nonatomic) double timeShowBanner; // @synthesize timeShowBanner=_timeShowBanner;
@property(nonatomic) double timeStartRequest; // @synthesize timeStartRequest=_timeStartRequest;
@property(copy, nonatomic) NSString *adOtherParams; // @synthesize adOtherParams=_adOtherParams;
@property(copy, nonatomic) NSString *baseURLLog; // @synthesize baseURLLog=_baseURLLog;
@property(retain, nonatomic) UIWebView *uiWebView; // @synthesize uiWebView=_uiWebView;
@property(retain, nonatomic) WKWebView *wkWebView; // @synthesize wkWebView=_wkWebView;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) CDUnknownBlockType didDismiss; // @synthesize didDismiss=_didDismiss;
@property(copy, nonatomic) CDUnknownBlockType willPresent; // @synthesize willPresent=_willPresent;
@property(copy, nonatomic) CDUnknownBlockType showFailure; // @synthesize showFailure=_showFailure;
@property(nonatomic) __weak id <CSBannerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
- (void).cxx_destruct;
- (void)hideBannerViewForTimer;
- (void)startTwoTimer;
- (void)stopRequestBanner;
- (void)clickBannerAd:(id)arg1 isWakeUpUrl:(_Bool)arg2;
- (void)bannerAdError:(id)arg1;
- (void)parseADData:(id)arg1 andError:(id)arg2;
- (void)startRequestBanner;
- (void)csInteractiveVCClose:(id)arg1;
- (void)csWebSiteVCClickClose:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)loadRequest:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)didMoveToSuperview;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool rewardMode;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *userInfo;

@end
