//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKDBModel.h"

@class NSDictionary, NSString;

@interface LZMVideoCateModel : LKDBModel
{
    long long _cateId;
    NSString *_name;
    long long _cateType;
    long long _isShort;
    NSDictionary *_image;
}

+ (id)describeColumnDict;
+ (id)modelCustomPropertyMapper;
@property(retain, nonatomic) NSDictionary *image; // @synthesize image=_image;
@property(nonatomic) long long isShort; // @synthesize isShort=_isShort;
@property(nonatomic) long long cateType; // @synthesize cateType=_cateType;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long cateId; // @synthesize cateId=_cateId;
- (void).cxx_destruct;

@end
