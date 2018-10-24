//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMOBFDataModel.h"
#import "NSCoding.h"

@class NSDictionary, NSMutableDictionary, NSString;

@interface MOBFDataModel : NSObject <IMOBFDataModel, NSCoding>
{
    NSMutableDictionary *_mobfRawData;
    NSMutableDictionary *_subDataModels;
    NSMutableDictionary *_methodRouteMap;
    NSMutableDictionary *_propertyInfo;
    NSDictionary *_fieldMappingDict;
    NSDictionary *_collectionElementTypeDict;
}

+ (id)rawDataWithUnsupportTypeObject:(id)arg1 propertyName:(id)arg2;
+ (id)unsupportTypeWithRawData:(id)arg1 targetType:(Class)arg2 propertyName:(id)arg3;
+ (id)elementTypeOfCollectionPropertyDictionary;
+ (id)propertyMappingDictionary;
@property(retain, nonatomic) NSDictionary *collectionElementTypeDict; // @synthesize collectionElementTypeDict=_collectionElementTypeDict;
@property(retain, nonatomic) NSDictionary *fieldMappingDict; // @synthesize fieldMappingDict=_fieldMappingDict;
@property(retain, nonatomic) NSMutableDictionary *propertyInfo; // @synthesize propertyInfo=_propertyInfo;
@property(retain, nonatomic) NSMutableDictionary *methodRouteMap; // @synthesize methodRouteMap=_methodRouteMap;
@property(retain, nonatomic) NSMutableDictionary *subDataModels; // @synthesize subDataModels=_subDataModels;
@property(retain, nonatomic) NSMutableDictionary *mobfRawData; // @synthesize mobfRawData=_mobfRawData;
- (void).cxx_destruct;
- (void)_setBOOL:(_Bool)arg1 key:(id)arg2;
- (_Bool)_getBOOL:(id)arg1;
- (void)_setUnsignedChar:(unsigned char)arg1 key:(id)arg2;
- (unsigned char)_getUnsignedChar:(id)arg1;
- (void)_setChar:(BOOL)arg1 key:(id)arg2;
- (BOOL)_getChar:(id)arg1;
- (void)_setFloat:(float)arg1 key:(id)arg2;
- (float)_getFloat:(id)arg1;
- (void)_setDouble:(double)arg1 key:(id)arg2;
- (double)_getDouble:(id)arg1;
- (void)_setNSUInteger:(unsigned long long)arg1 key:(id)arg2;
- (unsigned long long)_getNSUInteger:(id)arg1;
- (void)_setNSInteger:(long long)arg1 key:(id)arg2;
- (long long)_getNSInteger:(id)arg1;
- (void)_setUnsignedInt:(unsigned int)arg1 key:(id)arg2;
- (unsigned int)_getUnsignedInt:(id)arg1;
- (void)_setInt:(int)arg1 key:(id)arg2;
- (int)_getInt:(id)arg1;
- (void)_setUnsignedShort:(unsigned short)arg1 key:(id)arg2;
- (unsigned short)_getUnsignedShort:(id)arg1;
- (void)_setShort:(short)arg1 key:(id)arg2;
- (short)_getShort:(id)arg1;
- (void)_setObj:(id)arg1 key:(id)arg2;
- (id)_getObj:(id)arg1;
- (id)_createPropertyInfo:(struct objc_property *)arg1;
- (id)_updatePropertiesInfoWithKey:(id)arg1;
- (id)_getDataModelPropertyInfoByKey:(id)arg1;
- (id)_getRawKey:(id)arg1;
- (id)_confirmArrayElementType;
- (id)_mappingDictionary;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)dictionaryValue;
- (id)initWithDict:(id)arg1;
- (id)get:(id)arg1;
- (void)set:(id)arg1 key:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
