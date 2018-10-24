//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LZMViewController.h"

#import "WKNavigationDelegate.h"
#import "WKUIDelegate.h"

@class CALayer, NSString, UILabel, UIView, UIWebView, WKWebView;

@interface LZMSixPlayController : LZMViewController <WKUIDelegate, WKNavigationDelegate>
{
    NSString *_webUrl;
    NSString *_userName;
    UIView *_navBarView;
    UILabel *_titleLabel;
    UILabel *_textLabel;
    UIWebView *_uiWebView;
    WKWebView *_wkWebView;
    CALayer *_progresslayer;
}

@property(retain, nonatomic) CALayer *progresslayer; // @synthesize progresslayer=_progresslayer;
@property(retain, nonatomic) WKWebView *wkWebView; // @synthesize wkWebView=_wkWebView;
@property(retain, nonatomic) UIWebView *uiWebView; // @synthesize uiWebView=_uiWebView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *navBarView; // @synthesize navBarView=_navBarView;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSString *webUrl; // @synthesize webUrl=_webUrl;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)popClick;
- (void)refresh;
- (void)refreashAction:(id)arg1;
- (void)backAction:(id)arg1;
- (void)progressView;
- (void)createNavBarView;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
