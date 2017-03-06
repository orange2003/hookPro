//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;

@interface TBOSelectItemView : UIView
{
    UIImageView *_imageView;	// 8 = 0x8
    UILabel *_label;	// 16 = 0x10
    UIButton *_selectBtn;	// 24 = 0x18
    CDUnknownBlockType _selectedBlock;	// 32 = 0x20
}

@property(copy, nonatomic) CDUnknownBlockType selectedBlock; // @synthesize selectedBlock=_selectedBlock;
@property(retain, nonatomic) UIButton *selectBtn; // @synthesize selectBtn=_selectBtn;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
@property(nonatomic) _Bool isSelected;
- (id)initWithFrame:(struct CGRect)arg1;

@end
