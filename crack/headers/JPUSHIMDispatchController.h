//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JPUSHReceivedPacketController.h"

@class JPUSHPBPacket;

@interface JPUSHIMDispatchController : JPUSHReceivedPacketController
{
    unsigned short _statusCode;
    JPUSHPBPacket *_packet;
}

@property(copy, nonatomic) JPUSHPBPacket *packet; // @synthesize packet=_packet;
@property(nonatomic) unsigned short statusCode; // @synthesize statusCode=_statusCode;
- (void).cxx_destruct;

@end
