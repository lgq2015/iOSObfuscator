//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JPUSHResponse.h"

@class NSDictionary, NSString;

@interface JPUSHLoginResponse : JPUSHResponse
{
    BOOL _idcCode;
    unsigned short _serverVersion;
    unsigned int _sessionID;
    unsigned int _serverTime;
    NSString *_sessionKey;
    NSDictionary *_connInfo;
}

@property(readonly, nonatomic) NSDictionary *connInfo; // @synthesize connInfo=_connInfo;
@property(readonly, nonatomic) BOOL idcCode; // @synthesize idcCode=_idcCode;
@property(readonly, nonatomic) unsigned int serverTime; // @synthesize serverTime=_serverTime;
@property(readonly, nonatomic) NSString *sessionKey; // @synthesize sessionKey=_sessionKey;
@property(readonly, nonatomic) unsigned short serverVersion; // @synthesize serverVersion=_serverVersion;
@property(readonly, nonatomic) unsigned int sessionID; // @synthesize sessionID=_sessionID;
- (void).cxx_destruct;
- (id)description;
- (void)handleReceipt;
- (id)initWithBuffer:(const char *)arg1 length:(unsigned short)arg2;

@end
