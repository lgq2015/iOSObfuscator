//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVEBaseModel.h"

@class NSString, TVEAdCustom, TVEAdIva;

@interface TVEAdUnits : TVEBaseModel
{
    long long _ID;
    NSString *_name;
    NSString *_type;
    NSString *_provider_id;
    NSString *_placement_id;
    NSString *_placement_type;
    TVEAdIva *_iva;
    TVEAdCustom *_custom;
}

+ (id)tve_objectClassInArray;
@property(retain, nonatomic) TVEAdCustom *custom; // @synthesize custom=_custom;
@property(retain, nonatomic) TVEAdIva *iva; // @synthesize iva=_iva;
@property(copy, nonatomic) NSString *placement_type; // @synthesize placement_type=_placement_type;
@property(copy, nonatomic) NSString *placement_id; // @synthesize placement_id=_placement_id;
@property(copy, nonatomic) NSString *provider_id; // @synthesize provider_id=_provider_id;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long ID; // @synthesize ID=_ID;
- (void).cxx_destruct;

@end
