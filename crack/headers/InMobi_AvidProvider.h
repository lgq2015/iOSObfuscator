//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURLSession;

@interface InMobi_AvidProvider : NSObject
{
    NSString *_avid;
    _Bool _isLoading;
    NSURLSession *_session;
    id <InMobi_AvidProviderDelegate> _delegate;
}

+ (id)getInstance;
@property(nonatomic) __weak id <InMobi_AvidProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)createSession;
- (void)repeatLoading;
- (void)handleResponseWithData:(id)arg1 error:(id)arg2;
- (void)loadAvid;
@property(readonly) NSString *avidScript;
@property(readonly) _Bool isReady;

@end
