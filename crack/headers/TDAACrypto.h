//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TDAACrypto : NSObject
{
}

+ (id)md5String:(id)arg1;
+ (id)crc32VerificationCode:(id)arg1;
+ (id)decryptionUseAESToJSONObject:(id)arg1 withKey:(id)arg2;
+ (id)encryptionUseAESFormJSONObject:(id)arg1 withKey:(id)arg2;
+ (id)decryptionUseAESToData:(id)arg1 withKey:(id)arg2;
+ (id)encryptionUseAESFormData:(id)arg1 withKey:(id)arg2;
+ (id)decryptionUseDES:(id)arg1 withKey:(id)arg2;

@end
