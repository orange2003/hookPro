//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImage, UIImageView, UILabel;

@interface TBHTProductWaterFlowCell : UICollectionViewCell
{
    UIImageView *_itemImageView;	// 8 = 0x8
    UILabel *_priceLabel;	// 16 = 0x10
    UILabel *_itemTitleLabel;	// 24 = 0x18
    UILabel *_payNumLabel;	// 32 = 0x20
    UIImageView *_tmallImageView;	// 40 = 0x28
    UIImage *_placeholderImage;	// 48 = 0x30
}

@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(retain, nonatomic) UIImageView *tmallImageView; // @synthesize tmallImageView=_tmallImageView;
@property(retain, nonatomic) UILabel *payNumLabel; // @synthesize payNumLabel=_payNumLabel;
@property(retain, nonatomic) UILabel *itemTitleLabel; // @synthesize itemTitleLabel=_itemTitleLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UIImageView *itemImageView; // @synthesize itemImageView=_itemImageView;
- (void).cxx_destruct;
- (void)bindData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
