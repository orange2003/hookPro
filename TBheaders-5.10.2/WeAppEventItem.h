//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WeAppComponentBaseItem.h"

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface WeAppEventItem : WeAppComponentBaseItem <NSCopying, NSMutableCopying>
{
    NSString *_type;	// 8 = 0x8
    NSArray *_actions;	// 16 = 0x10
    NSString *_utType;	// 24 = 0x18
    NSString *_utName;	// 32 = 0x20
    NSDictionary *_utParams;	// 40 = 0x28
}

@property(retain, nonatomic) NSString *utName; // @synthesize utName=_utName;
@property(retain, nonatomic) NSDictionary *utParams; // @synthesize utParams=_utParams;
@property(retain, nonatomic) NSString *utType; // @synthesize utType=_utType;
@property(retain, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)toDictionary;
- (void)setFromDictionary:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

