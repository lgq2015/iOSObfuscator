//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMSKStoreProductViewController, NSError;

@protocol IMSKStoreProductViewControllerDelegate <NSObject>
- (void)imProductViewControllerDidDismissScreen:(IMSKStoreProductViewController *)arg1;
- (void)imProductViewControllerWillDismissScreen:(IMSKStoreProductViewController *)arg1;
- (void)imProductViewControllerDidPresentScreen:(IMSKStoreProductViewController *)arg1;
- (void)imProductViewControllerWillPresentScreen:(IMSKStoreProductViewController *)arg1;
- (void)imProductViewControllerLoadFailed:(IMSKStoreProductViewController *)arg1 error:(NSError *)arg2;
- (void)imProductViewControllerLoadSuccessful:(IMSKStoreProductViewController *)arg1;
@end
