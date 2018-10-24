//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LZMAdBaseManagerDelegate.h"

@class LZMAdBaseManager, NSMutableArray, NSString, NSTimer, UIImageView;

@interface LZMAdManager : NSObject <LZMAdBaseManagerDelegate>
{
    _Bool _isNATimeOut;
    _Bool _adProllDestroy;
    id <LZMAdManagerDelegate> _delegate;
    LZMAdBaseManager *_adTypeManager;
    NSTimer *_outTimer;
    NSMutableArray *_nativeFailedArr;
    UIImageView *_splashBGView;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool adProllDestroy; // @synthesize adProllDestroy=_adProllDestroy;
@property(retain, nonatomic) UIImageView *splashBGView; // @synthesize splashBGView=_splashBGView;
@property(retain, nonatomic) NSMutableArray *nativeFailedArr; // @synthesize nativeFailedArr=_nativeFailedArr;
@property(retain, nonatomic) NSTimer *outTimer; // @synthesize outTimer=_outTimer;
@property(nonatomic) _Bool isNATimeOut; // @synthesize isNATimeOut=_isNATimeOut;
@property(retain, nonatomic) LZMAdBaseManager *adTypeManager; // @synthesize adTypeManager=_adTypeManager;
@property(nonatomic) __weak id <LZMAdManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)reportEvent:(id)arg1 adPlaceType:(id)arg2 andAdSupportName:(id)arg3;
- (void)prollADExitFullScreen:(_Bool)arg1;
- (void)reportError:(long long)arg1 adPalceId:(long long)arg2 aAdSupportType:(long long)arg3;
- (void)interADShowFullScreen;
- (void)nativeAdObjectsSuccessLoad:(id)arg1 palceId:(long long)arg2 andAdSupportType:(long long)arg3;
- (void)timeOutNotification;
- (void)timeNotOutAndRelaseTime;
- (void)nativeFailedPlace:(long long)arg1;
- (void)removeTheSplashBGView:(id)arg1;
- (void)recyclePrimaryAdView:(id)arg1;
- (void)activeNativeAdBaseBiew:(id)arg1 withObject:(id)arg2 andPlaceId:(long long)arg3 andADtype:(long long)arg4;
- (void)startVideoAdWithPresentVC:(id)arg1;
- (void)startNative:(long long)arg1;
- (void)startNativeAdWithPlaceId:(long long)arg1 andDelegate:(id)arg2;
- (void)startInterstitialAd:(id)arg1 inRect:(struct CGRect)arg2 andDeldegete:(id)arg3;
- (void)startSplashAd;
- (void)adGetConfigData:(id)arg1 update:(_Bool)arg2;
- (void)initAdData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
