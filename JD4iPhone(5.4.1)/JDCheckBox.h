//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDView.h"

@class NSNumber, NSString, UIImage, UIImageView, UILabel;

@interface JDCheckBox : JDView
{
    UIImageView *iconView_;
    UILabel *titleLabel_;
    NSString *title_;
    _Bool checked_;
    _Bool enabled_;
    NSNumber *Id;
    UIImage *unCheckImg_;
    UIImage *checkImg_;
}

@property(retain, nonatomic) UIImage *checkImg; // @synthesize checkImg=checkImg_;
@property(retain, nonatomic) UIImage *unCheckImg; // @synthesize unCheckImg=unCheckImg_;
@property(retain, nonatomic) NSNumber *Id; // @synthesize Id;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=titleLabel_;
@property(nonatomic) _Bool enabled; // @synthesize enabled=enabled_;
@property(retain, nonatomic) NSString *title; // @synthesize title=title_;
@property(nonatomic) _Bool checked; // @synthesize checked=checked_;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;
- (void)alignmentCenterCheckBox;
- (void)layoutSubviews;
- (void)setCheckInonUpImg:(id)arg1 downImg:(id)arg2 withHeight:(double)arg3;
- (void)setCheckInonUpImg:(id)arg1 downImg:(id)arg2;
- (id)initWithTitle:(id)arg1;

@end

