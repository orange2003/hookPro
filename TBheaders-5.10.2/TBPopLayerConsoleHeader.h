//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class UIButton;
@protocol TBPopLayerConsoleHeaderProtocal;

@interface TBPopLayerConsoleHeader : UILabel
{
    _Bool _maxmized;	// 8 = 0x8
    id <TBPopLayerConsoleHeaderProtocal> _delegate;	// 16 = 0x10
    UIButton *_menuButton;	// 24 = 0x18
    UIButton *_minimizeButton;	// 32 = 0x20
    UIButton *_maxmizeButton;	// 40 = 0x28
    UIButton *_closeButton;	// 48 = 0x30
}

@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIButton *maxmizeButton; // @synthesize maxmizeButton=_maxmizeButton;
@property(retain, nonatomic) UIButton *minimizeButton; // @synthesize minimizeButton=_minimizeButton;
@property(retain, nonatomic) UIButton *menuButton; // @synthesize menuButton=_menuButton;
@property(nonatomic) _Bool maxmized; // @synthesize maxmized=_maxmized;
@property(nonatomic) __weak id <TBPopLayerConsoleHeaderProtocal> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)closeButtonClicked;
- (void)maxmizeButtonClicked;
- (void)minimizeButtonClicked;
- (void)menuButtonClicked;
- (id)initWithFrame:(struct CGRect)arg1;

@end
