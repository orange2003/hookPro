//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class UIButton, UILabel, UIView;
@protocol IWCNewStorageFreeSpaceViewCellExt;

__attribute__((visibility("hidden")))
@interface WCNewStorageFreeSpaceViewCell : MMUIView
{
    UILabel *titleLabel;
    UILabel *usedSpaceLabel;
    UILabel *wordingLabel;
    UIButton *actionButton;
    UIView *seperateLine;
    UIView *_extraView;
    id <IWCNewStorageFreeSpaceViewCellExt> _delegate;
}

@property(nonatomic) __weak id <IWCNewStorageFreeSpaceViewCellExt> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *extraView; // @synthesize extraView=_extraView;
@property(retain, nonatomic) UIView *seperateLine; // @synthesize seperateLine;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton;
@property(retain, nonatomic) UILabel *wordingLabel; // @synthesize wordingLabel;
@property(retain, nonatomic) UILabel *usedSpaceLabel; // @synthesize usedSpaceLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel;
- (void).cxx_destruct;
- (void)initExtraView;
- (void)initActionButton;
- (void)initWordingLabel;
- (void)initUsedSpaceLabel;
- (void)initTitleLabel;
- (void)layoutSubviews;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

