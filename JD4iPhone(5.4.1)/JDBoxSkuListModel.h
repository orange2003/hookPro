//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDBoxBaseModel.h"

@class NSNumber, NSString;

@interface JDBoxSkuListModel : JDBoxBaseModel
{
    NSNumber *_offset;
    NSString *_sku;
    NSString *_name;
    NSString *_img;
    NSString *_price;
    NSString *_pText;
    NSString *_tagText;
    NSString *_tagType;
    NSString *_pType;
    NSString *_slogan;
    NSString *_tagTextNew;
    NSNumber *_onSell;
    NSNumber *_waretype;
    NSNumber *_cancut;
    NSNumber *_cutstatus;
    NSNumber *_cutnum;
    NSString *_cutPrice;
    NSString *_cutText;
    NSString *_cutoffset;
    NSString *_promotionId;
    NSString *_cutSource;
    NSString *_cutShareUrl;
    NSNumber *_cutMaxTime;
}

@property(copy, nonatomic) NSNumber *cutMaxTime; // @synthesize cutMaxTime=_cutMaxTime;
@property(copy, nonatomic) NSString *cutShareUrl; // @synthesize cutShareUrl=_cutShareUrl;
@property(copy, nonatomic) NSString *cutSource; // @synthesize cutSource=_cutSource;
@property(copy, nonatomic) NSString *promotionId; // @synthesize promotionId=_promotionId;
@property(copy, nonatomic) NSString *cutoffset; // @synthesize cutoffset=_cutoffset;
@property(copy, nonatomic) NSString *cutText; // @synthesize cutText=_cutText;
@property(copy, nonatomic) NSString *cutPrice; // @synthesize cutPrice=_cutPrice;
@property(copy, nonatomic) NSNumber *cutnum; // @synthesize cutnum=_cutnum;
@property(copy, nonatomic) NSNumber *cutstatus; // @synthesize cutstatus=_cutstatus;
@property(copy, nonatomic) NSNumber *cancut; // @synthesize cancut=_cancut;
@property(copy, nonatomic) NSNumber *waretype; // @synthesize waretype=_waretype;
@property(retain, nonatomic) NSNumber *onSell; // @synthesize onSell=_onSell;
@property(copy, nonatomic) NSString *tagTextNew; // @synthesize tagTextNew=_tagTextNew;
@property(copy, nonatomic) NSString *slogan; // @synthesize slogan=_slogan;
@property(copy, nonatomic) NSString *pType; // @synthesize pType=_pType;
@property(copy, nonatomic) NSString *tagType; // @synthesize tagType=_tagType;
@property(copy, nonatomic) NSString *tagText; // @synthesize tagText=_tagText;
@property(copy, nonatomic) NSString *pText; // @synthesize pText=_pText;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *img; // @synthesize img=_img;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *sku; // @synthesize sku=_sku;
@property(copy, nonatomic) NSNumber *offset; // @synthesize offset=_offset;
- (void)setDataWithDic:(id)arg1;
- (void)dealloc;

@end

