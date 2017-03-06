//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

@class UIView;

@interface JDContentView : UIScrollView
{
    long long numberOfSections;
    long long lastViewNumbers;
    _Bool _autoLayout;
    _Bool _alwaysScrollable;
    id <JDContentViewDataSource> _dataSource;
    UIView *_footerView;
    UIView *_headerView;
    double _headMargin;
    double _footMargin;
}

@property(nonatomic) _Bool alwaysScrollable; // @synthesize alwaysScrollable=_alwaysScrollable;
@property(nonatomic) _Bool autoLayout; // @synthesize autoLayout=_autoLayout;
@property(nonatomic) double footMargin; // @synthesize footMargin=_footMargin;
@property(nonatomic) double headMargin; // @synthesize headMargin=_headMargin;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(nonatomic) id <JDContentViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)sectionForIdentifier:(id)arg1;
- (id)sectionAtIndex:(long long)arg1;
- (void)reloadSectionWithNoRemoveAtIndex:(long long)arg1;
- (void)reloadSectionAtIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)reloadData;
- (void)_reloadData;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (_Bool)reloadContentFromItem:(id)arg1 animated:(_Bool)arg2;
- (_Bool)reloadContentFromItemByIdentifier:(id)arg1 animated:(_Bool)arg2;
- (long long)getJDContentItemIndex:(id)arg1;
- (long long)getSectionIndexByIdentifier:(id)arg1;

@end
