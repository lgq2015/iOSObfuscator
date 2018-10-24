//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMJSONModel.h"

@class NSString;

@interface IMAdsConfigMraidModel : IMJSONModel
{
    long long _expiry;
    long long _maxRetries;
    long long _retryInterval;
    NSString *_url;
}

@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) long long retryInterval; // @synthesize retryInterval=_retryInterval;
@property(nonatomic) long long maxRetries; // @synthesize maxRetries=_maxRetries;
@property(nonatomic) long long expiry; // @synthesize expiry=_expiry;
- (void).cxx_destruct;
- (_Bool)validate:(id *)arg1;
- (id)init;

@end
