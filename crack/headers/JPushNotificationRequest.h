//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class JPushNotificationContent, JPushNotificationTrigger, NSString;

@interface JPushNotificationRequest : NSObject <NSCopying, NSCoding>
{
    NSString *_requestIdentifier;
    JPushNotificationContent *_content;
    JPushNotificationTrigger *_trigger;
    CDUnknownBlockType _completionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) JPushNotificationTrigger *trigger; // @synthesize trigger=_trigger;
@property(copy, nonatomic) JPushNotificationContent *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
