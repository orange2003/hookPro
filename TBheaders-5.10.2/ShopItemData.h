//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SearchJsonModel.h"

#import "SearchMtopResponseProtocal-Protocol.h"

@class NSString;

@interface ShopItemData : SearchJsonModel <SearchMtopResponseProtocal>
{
    _Bool _isWm;	// 8 = 0x8
    unsigned long long _itemId;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    NSString *_pic;	// 32 = 0x20
    NSString *_price;	// 40 = 0x28
    NSString *_monthSold;	// 48 = 0x30
    NSString *_loc;	// 56 = 0x38
}

@property(nonatomic) _Bool isWm; // @synthesize isWm=_isWm;
@property(copy, nonatomic) NSString *loc; // @synthesize loc=_loc;
@property(copy, nonatomic) NSString *monthSold; // @synthesize monthSold=_monthSold;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *pic; // @synthesize pic=_pic;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;
- (id)formatUrl:(id)arg1;
- (id)initWithJsonDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

