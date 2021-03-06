//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIScrollView;

@interface AddressTabView : UIView
{
    UIView *_bottomLine;
    UIButton *_selecteTab;
    UIScrollView *_scrollView;
    id <AddressTabViewDelegate> _delegate;
    long long _maxTabCount;
    long long _tabCount;
    long long _index;
}

@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) long long tabCount; // @synthesize tabCount=_tabCount;
@property(nonatomic) long long maxTabCount; // @synthesize maxTabCount=_maxTabCount;
@property(nonatomic) __weak id <AddressTabViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)clickedTabButton:(id)arg1;
- (void)moveBottomLineToIndex:(long long)arg1;
- (void)showSelecteTabButton;
- (void)hideSelecteTabButton;
- (void)setScrollViewContentSize;
- (void)removeButtonToIndex:(long long)arg1 title:(id)arg2;
- (void)creatBtn:(id)arg1;
- (void)addButtonWithTitle:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

