//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class AliDetailSkuContractCity, CAShapeLayer, UILabel;

@interface AliDetailContractPhoneCityCell : UITableViewCell
{
    _Bool _isSelected;	// 8 = 0x8
    AliDetailSkuContractCity *_city;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
    CAShapeLayer *_selectedLayer;	// 32 = 0x20
}

@property(retain, nonatomic) CAShapeLayer *selectedLayer; // @synthesize selectedLayer=_selectedLayer;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) AliDetailSkuContractCity *city; // @synthesize city=_city;
- (void).cxx_destruct;
- (void)updateConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

