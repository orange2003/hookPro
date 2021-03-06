//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface TBAMPEmoticonPack : NSObject
{
    NSString *_packId;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSString *_desc;	// 24 = 0x18
    NSString *_imageUrl;	// 32 = 0x20
    NSString *_resUrl;	// 40 = 0x28
    NSString *_tag;	// 48 = 0x30
    NSArray *_emoticonList;	// 56 = 0x38
    NSString *_localMainPath;	// 64 = 0x40
}

@property(retain, nonatomic) NSString *localMainPath; // @synthesize localMainPath=_localMainPath;
@property(copy, nonatomic) NSArray *emoticonList; // @synthesize emoticonList=_emoticonList;
@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(copy, nonatomic) NSString *resUrl; // @synthesize resUrl=_resUrl;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *packId; // @synthesize packId=_packId;
- (void).cxx_destruct;
- (void)CopyFromPack:(id)arg1;
- (id)toJSONDictionary;
- (id)initWithJSONDictionary:(id)arg1;

@end

