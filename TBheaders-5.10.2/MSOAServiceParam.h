//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface MSOAServiceParam : NSObject
{
    _Bool _isCNumber;	// 8 = 0x8
    NSString *_key;	// 16 = 0x10
    NSString *_type;	// 24 = 0x18
    const char *_typeEncoding;	// 32 = 0x20
    unsigned long long _actualType;	// 40 = 0x28
}

@property(nonatomic) _Bool isCNumber; // @synthesize isCNumber=_isCNumber;
@property(nonatomic) unsigned long long actualType; // @synthesize actualType=_actualType;
@property(nonatomic) const char *typeEncoding; // @synthesize typeEncoding=_typeEncoding;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1;

@end
