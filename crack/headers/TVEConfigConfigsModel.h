//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TVEConfigAdsModel;

@interface TVEConfigConfigsModel : NSObject
{
    NSString *_type;
    TVEConfigAdsModel *_ad;
    NSString *_page;
}

@property(copy, nonatomic) NSString *page; // @synthesize page=_page;
@property(retain, nonatomic) TVEConfigAdsModel *ad; // @synthesize ad=_ad;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithAttributes:(id)arg1;

@end
