//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMRenderView;

@interface IMBaseProcessor : NSObject
{
    id <IMRichMediaDelegate> _delegate;
    IMRenderView *_renderView;
}

@property(nonatomic) __weak IMRenderView *renderView; // @synthesize renderView=_renderView;
@property(nonatomic) __weak id <IMRichMediaDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)sendCallbackForRichMediaAdDidPerformUserInteraction:(id)arg1;
- (void)sendCallbackForRichMediaAdIncentActionComplete:(id)arg1;
- (void)sendCallbackForRichMediaAdWillLeaveApplication;
- (void)sendCallbackForRichMediaAdDidDismissScreen;
- (void)sendCallbackForRichMediaAdWillDismissScreen;
- (void)sendCallbackForRichMediaAdDidPresentScreen;
- (void)sendCallbackForRichMediaAdWillPresentScreen;
- (void)executeJavascript:(id)arg1;
- (void)showAlertWithMessage:(id)arg1;
- (id)initWithRenderView:(id)arg1;

@end
