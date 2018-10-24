//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface TalkingDataOrder : NSObject
{
    int _total;
    NSString *_orderId;
    NSString *_currencyType;
    NSMutableArray *_items;
}

+ (id)createOrder:(id)arg1 total:(int)arg2 currencyType:(id)arg3;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSString *currencyType; // @synthesize currencyType=_currencyType;
@property(nonatomic) int total; // @synthesize total=_total;
@property(retain, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
- (void).cxx_destruct;
- (id)description;
- (id)addItem:(id)arg1 category:(id)arg2 name:(id)arg3 unitPrice:(int)arg4 amount:(int)arg5;

@end
