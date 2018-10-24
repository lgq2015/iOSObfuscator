//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface BCActionItem : NSObject
{
    NSString *_scheme;
    NSString *_host;
    NSString *_path;
    NSString *_port;
    NSDictionary *_params;
    NSString *_urlString;
}

+ (id)getUrlQueryParams:(id)arg1;
@property(readonly, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(readonly, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(readonly, nonatomic) NSString *port; // @synthesize port=_port;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
@property(readonly, nonatomic) NSString *host; // @synthesize host=_host;
@property(readonly, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
- (void).cxx_destruct;
- (void)addParams:(id)arg1;
- (id)initWithString:(id)arg1;

@end
