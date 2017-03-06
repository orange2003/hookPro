//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBSearchBaseCell.h"

@class TBSearchIconViewComponent, TBSearchIconViewModel, TBSearchPriceLabel, TBSearchTmallSpuItem, UIButton, UIImageView, UILabel, UIView;

@interface TBXSearchItemTmallSpuCell : TBSearchBaseCell
{
    TBSearchTmallSpuItem *_model;	// 8 = 0x8
    UIImageView *_picView;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
    TBSearchPriceLabel *_priceLabel;	// 32 = 0x20
    UILabel *_soldLabel;	// 40 = 0x28
    UILabel *_tagInfoLabel;	// 48 = 0x30
    UILabel *_salesNumber;	// 56 = 0x38
    UIView *_splitLineView;	// 64 = 0x40
    UIButton *_moreButton;	// 72 = 0x48
    UIButton *_maskView;	// 80 = 0x50
    UIButton *_moreSellerButton;	// 88 = 0x58
    UILabel *_nickLabel;	// 96 = 0x60
    TBSearchIconViewModel *_iconVM;	// 104 = 0x68
    TBSearchIconViewComponent *_iconViewComponent;	// 112 = 0x70
}

+ (struct CGSize)cellSizeWithModel:(id)arg1 searchService:(id)arg2 layoutStyle:(int)arg3;
@property(retain, nonatomic) TBSearchIconViewComponent *iconViewComponent; // @synthesize iconViewComponent=_iconViewComponent;
@property(retain, nonatomic) TBSearchIconViewModel *iconVM; // @synthesize iconVM=_iconVM;
@property(retain, nonatomic) UILabel *nickLabel; // @synthesize nickLabel=_nickLabel;
@property(retain, nonatomic) UIButton *moreSellerButton; // @synthesize moreSellerButton=_moreSellerButton;
@property(retain, nonatomic) UIButton *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UIView *splitLineView; // @synthesize splitLineView=_splitLineView;
@property(retain, nonatomic) UILabel *salesNumber; // @synthesize salesNumber=_salesNumber;
@property(retain, nonatomic) UILabel *tagInfoLabel; // @synthesize tagInfoLabel=_tagInfoLabel;
@property(retain, nonatomic) UILabel *soldLabel; // @synthesize soldLabel=_soldLabel;
@property(retain, nonatomic) TBSearchPriceLabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *picView; // @synthesize picView=_picView;
- (void)setModel:(id)arg1;
- (id)model;
- (void).cxx_destruct;
- (id)getAdapterIcon;
- (void)onMoreSellerButtonOnclick:(id)arg1;
- (void)longPress:(id)arg1;
- (void)hideMask;
- (void)didSelect;
- (void)updateConstraints;
- (void)adjustViews;
- (id)addAttrToPrefixString:(id)arg1 valueString:(id)arg2;
- (void)render;
- (void)removeMaskView:(id)arg1;
- (void)cellMoreButtonClicked:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
