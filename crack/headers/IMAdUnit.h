//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMAdStoreDelegate.h"
#import "IMConfigDelegate.h"
#import "IMIASViewability.h"
#import "IMMoatViewability.h"
#import "IMRenderViewDelegate.h"
#import "IMTimerDelegate.h"

@class IMAdStore, IMAdsConfig, IMIASViewability, IMMoatViewability, IMRenderView, IMTimerManager, NSData, NSDictionary, NSString, UIColor;

@interface IMAdUnit : NSObject <IMRenderViewDelegate, IMMoatViewability, IMIASViewability, IMConfigDelegate, IMTimerDelegate, IMAdStoreDelegate>
{
    _Bool _firedInteractionEvent;
    int _displayedScreens;
    int _placementType;
    long long _placementId;
    NSDictionary *_extras;
    NSString *_keywords;
    double _insertionTS;
    long long _requestState;
    IMTimerManager *_timer;
    NSData *_vastTag;
    IMMoatViewability *_moatViewability;
    IMIASViewability *_iasViewability;
    NSString *_clientID;
    long long _currentState;
    long long _creativeType;
    long long _trackingType;
    NSString *_markupType;
    NSString *_context;
    NSDictionary *_adContent;
    NSString *_pubContent;
    NSDictionary *_jsonPubContent;
    IMAdsConfig *_config;
    id <IMAdUnitDelegate> _delegate;
    IMRenderView *_renderView;
    NSString *_impId;
    NSString *_adType;
    double _renderStartTS;
    long long _adExpiry;
    IMAdStore *_store;
    UIColor *_unsafeAreaColor;
    NSDictionary *_adBidInfo;
    NSString *_creativeId;
    struct CGRect _frame;
    struct CGRect _safeAreaFrame;
}

+ (void)logMonetizationDisabledWithAdType:(id)arg1 andComponentType:(id)arg2;
@property(retain, nonatomic) NSString *creativeId; // @synthesize creativeId=_creativeId;
@property(retain, nonatomic) NSDictionary *adBidInfo; // @synthesize adBidInfo=_adBidInfo;
@property(retain, nonatomic) UIColor *unsafeAreaColor; // @synthesize unsafeAreaColor=_unsafeAreaColor;
@property(nonatomic) struct CGRect safeAreaFrame; // @synthesize safeAreaFrame=_safeAreaFrame;
@property(retain, nonatomic) IMAdStore *store; // @synthesize store=_store;
@property(nonatomic) long long adExpiry; // @synthesize adExpiry=_adExpiry;
@property(nonatomic) double renderStartTS; // @synthesize renderStartTS=_renderStartTS;
@property(retain, nonatomic) NSString *adType; // @synthesize adType=_adType;
@property(retain, nonatomic) NSString *impId; // @synthesize impId=_impId;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(nonatomic) int placementType; // @synthesize placementType=_placementType;
@property(nonatomic) int displayedScreens; // @synthesize displayedScreens=_displayedScreens;
@property(retain, nonatomic) IMRenderView *renderView; // @synthesize renderView=_renderView;
@property(nonatomic) __weak id <IMAdUnitDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IMAdsConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) NSDictionary *jsonPubContent; // @synthesize jsonPubContent=_jsonPubContent;
@property(retain, nonatomic) NSString *pubContent; // @synthesize pubContent=_pubContent;
@property(retain, nonatomic) NSDictionary *adContent; // @synthesize adContent=_adContent;
@property(retain, nonatomic) NSString *context; // @synthesize context=_context;
@property(retain, nonatomic) NSString *markupType; // @synthesize markupType=_markupType;
@property(nonatomic) long long trackingType; // @synthesize trackingType=_trackingType;
@property(nonatomic) long long creativeType; // @synthesize creativeType=_creativeType;
@property long long currentState; // @synthesize currentState=_currentState;
@property(nonatomic) _Bool firedInteractionEvent; // @synthesize firedInteractionEvent=_firedInteractionEvent;
@property(retain, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property(retain, nonatomic) IMIASViewability *iasViewability; // @synthesize iasViewability=_iasViewability;
@property(retain, nonatomic) IMMoatViewability *moatViewability; // @synthesize moatViewability=_moatViewability;
@property(retain, nonatomic) NSData *vastTag; // @synthesize vastTag=_vastTag;
@property(retain, nonatomic) IMTimerManager *timer; // @synthesize timer=_timer;
@property long long requestState; // @synthesize requestState=_requestState;
@property(readonly, nonatomic) double insertionTS; // @synthesize insertionTS=_insertionTS;
@property(retain, nonatomic) NSString *keywords; // @synthesize keywords=_keywords;
@property(retain, nonatomic) NSDictionary *extras; // @synthesize extras=_extras;
@property(nonatomic) long long placementId; // @synthesize placementId=_placementId;
- (void).cxx_destruct;
- (id)getAdMetaInfo;
- (id)genericTelemetryPayload;
- (id)displayName;
- (void)dealloc;
- (void)submitEventForLoadFailedOnEarlyRefresh;
- (void)configUpdated:(id)arg1;
- (void)deinit;
- (void)timerHitForManager:(id)arg1;
- (_Bool)adStoreShouldHandlePrefetch;
- (_Bool)adStore:(id)arg1 shouldDeleteAdOnFetchFromDBForMarkupType:(id)arg2;
- (void)adStore:(id)arg1 failedToLoadAdWithErrorCode:(int)arg2 andDescription:(id)arg3 clientID:(id)arg4;
- (void)adStore:(id)arg1 didLoadAdWithResponse:(id)arg2 impId:(id)arg3 insertionTS:(id)arg4 vastTag:(id)arg5 clientID:(id)arg6;
- (id)fetchAdsBlobForImpId:(id)arg1;
- (_Bool)saveAdsBlob:(id)arg1 forImpressionId:(id)arg2;
- (_Bool)isEqualToThisAd:(id)arg1;
- (_Bool)parseAdResponse:(id)arg1;
- (id)createAdStoreRequest;
- (void)load;
- (void)clearMarkupFromDB;
- (_Bool)isNativeMarkupAd;
- (id)init;
- (_Bool)deleteAdForImpressionID:(id)arg1;
- (void)updateVastTag:(id)arg1 withRequestID:(id)arg2;
- (id)initWithPlacementId:(long long)arg1 adType:(id)arg2;
@property(nonatomic, getter=isAdRenderedTelemetryFired) _Bool adRenderedTelemetryFired; // @dynamic adRenderedTelemetryFired;
- (id)webviewBackgroundColor;
- (long long)webViewPreference;
- (void)updateCreativeType:(id)arg1;
- (id)adStateToString;
- (void)renderViewDismissScreen;
- (void)renderViewWillDismissScreen;
- (void)renderViewFailedToLoad;
- (void)imRenderView:(id)arg1 shouldFireEvent:(id)arg2 withPayload:(id)arg3;
- (void)imRenderView:(id)arg1 gotCommand:(id)arg2 onScheme:(id)arg3;
- (void)imRenderViewAdWasInteracted:(id)arg1;
- (void)imRenderViewFireAdFailed:(id)arg1;
- (void)imRenderViewFireAdReady:(id)arg1;
- (void)imRenderViewIncentActionComplete:(id)arg1;
- (void)imRenderViewDidInteractWithParams:(id)arg1 onRenderView:(id)arg2;
- (void)imRenderViewAdWillLeaveApplication:(id)arg1;
- (void)imRenderViewDidDismissScreen:(id)arg1;
- (void)imRenderViewWillDismissScreeen:(id)arg1;
- (void)imRenderViewWillPresentScreen:(id)arg1;
- (void)imRenderViewDidPresentScreen:(id)arg1;
- (void)imRenderView:(id)arg1 failedToLoad:(id)arg2;
- (void)imRenderViewFinishedLoading:(id)arg1;
- (void)imRenderViewAppearOnScreen:(id)arg1;
- (void)adAttached;
- (void)adDestroyed;
- (void)adActive;
- (void)adRendered;
- (void)adReady;
- (void)adLoaded;
- (void)adFailed;
- (void)adAvailable;
- (void)loading;
- (void)created;
- (void)sendCallBackForAdLoadFailure:(int)arg1 description:(id)arg2 extras:(id)arg3;
- (void)reportEvent:(id)arg1;
- (void)sendRenderTimeOutError;
- (void)createIASViewability;
- (void)createMoatViewabilityWithParameters:(id)arg1 forCreativeType:(long long)arg2;
- (void)processIASViewability:(_Bool)arg1;
- (void)processViewabilities:(id)arg1;
- (void)processMetaInfo:(id)arg1;
- (_Bool)extractAdContent:(id)arg1;
- (void)loadRenderViewWithFrame:(struct CGRect)arg1 content:(id)arg2 placementType:(int)arg3 safeAreaGeometry:(struct CGRect)arg4 unsafeAreaColor:(id)arg5;
- (id)getRenderContent;
- (id)getAdReqParams;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
