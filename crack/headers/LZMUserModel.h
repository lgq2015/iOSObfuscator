//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKDBModel.h"

@class NSString;

@interface LZMUserModel : LKDBModel
{
    _Bool _isLogin;
    NSString *_userId;
    NSString *_icon;
    NSString *_name;
}

+ (id)describeColumnDict;
@property(nonatomic) _Bool isLogin; // @synthesize isLogin=_isLogin;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;

@end
