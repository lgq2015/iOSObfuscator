//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMAdPool.h"

#import "IMAdUnitDelegate.h"
#import "IMConfigDelegate.h"
#import "IMNativeRenderControllerDelegate.h"
#import "IMPreloadRequestDelegate.h"

@class IMAdsDAO, IMNativeInlineRenderController, NSMutableArray, NSString;

@interface IMNativeAdPool : IMAdPool <IMAdUnitDelegate, IMConfigDelegate, IMNativeRenderControllerDelegate, IMPreloadRequestDelegate>
{
    _Bool _isPrefetching;
    IMAdsDAO *_adsDAO;
    NSMutableArray *_prefetchResponseArray;
    IMNativeInlineRenderController *_prefetchRenderController;
    NSString *_prefetchAdImpID;
}

+ (id)getSharedAdPoolForPlacementID:(long long)arg1;
@property(retain, nonatomic) NSString *prefetchAdImpID; // @synthesize prefetchAdImpID=_prefetchAdImpID;
@property(retain, nonatomic) IMNativeInlineRenderController *prefetchRenderController; // @synthesize prefetchRenderController=_prefetchRenderController;
@property(nonatomic) _Bool isPrefetching; // @synthesize isPrefetching=_isPrefetching;
@property(retain, nonatomic) NSMutableArray *prefetchResponseArray; // @synthesize prefetchResponseArray=_prefetchResponseArray;
@property(retain, nonatomic) IMAdsDAO *adsDAO; // @synthesize adsDAO=_adsDAO;
- (void).cxx_destruct;
- (void)processPrefetchFailed;
- (void)imNativeRenderController:(id)arg1 VastTagFound:(id)arg2;
- (void)imNativeRenderControllerDidFailToLoad:(id)arg1;
- (void)imNativeRenderControllerDidFinishLoad:(id)arg1;
- (id)fetchAdUnitType;
- (void)startPrefetchforAd:(id)arg1;
- (void)startPrefetch;
- (void)adStore:(id)arg1 adsAvailableForPrefetch:(id)arg2;
- (void)adStoreDidFallBelowMinThreshold:(id)arg1;
- (void)ad:(id)arg1 didFailToLoadWithErrorCode:(int)arg2 andDescription:(id)arg3;
- (void)adDidFinishLoad:(id)arg1;
- (void)adIsAvailable:(id)arg1;
- (id)getRenderControllerForImpressionID:(id)arg1;
- (void)saveMarkupForAdUnit:(id)arg1;
- (void)savePlacementIDForPublisherRequest;
- (id)getAdForShow;
- (void)loadAdAndAddAdUnitDataArrayForPreload:(long long)arg1;
- (void)warmCache;
- (void)registerForAdWithDelegate:(id)arg1;
- (id)getAdUnitForPlacementID:(long long)arg1;
- (id)initWithPlacementID:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
