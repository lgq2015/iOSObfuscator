//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class TVDNativeView, UIImageView, UILabel;

@interface TVEFocusAdCollectionViewCell : UICollectionViewCell
{
    UIImageView *_backImage;
    UILabel *_recommendLabel;
    TVDNativeView *_nativeAdView;
}

@property(retain, nonatomic) TVDNativeView *nativeAdView; // @synthesize nativeAdView=_nativeAdView;
@property(retain, nonatomic) UILabel *recommendLabel; // @synthesize recommendLabel=_recommendLabel;
@property(retain, nonatomic) UIImageView *backImage; // @synthesize backImage=_backImage;
- (void).cxx_destruct;
- (void)loadData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
