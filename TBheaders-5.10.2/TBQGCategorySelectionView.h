//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, TBQGOptionBarItem;

@interface TBQGCategorySelectionView : UIView
{
    NSMutableArray *_dataArray;	// 8 = 0x8
    NSMutableArray *_cards;	// 16 = 0x10
    CDUnknownBlockType _selectionActionBlock;	// 24 = 0x18
    long long _selectedIndex;	// 32 = 0x20
    TBQGOptionBarItem *_selectedOptionBarItem;	// 40 = 0x28
    double _categoryViewHeight;	// 48 = 0x30
}

@property(nonatomic) double categoryViewHeight; // @synthesize categoryViewHeight=_categoryViewHeight;
@property(retain, nonatomic) TBQGOptionBarItem *selectedOptionBarItem; // @synthesize selectedOptionBarItem=_selectedOptionBarItem;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(copy, nonatomic) CDUnknownBlockType selectionActionBlock; // @synthesize selectionActionBlock=_selectionActionBlock;
@property(copy, nonatomic) NSMutableArray *cards; // @synthesize cards=_cards;
@property(copy, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
- (void).cxx_destruct;
- (void)dealloc;
- (void)tapHidden:(id *)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)tappedOptionBarItemAction:(id)arg1;
- (void)resetOptionSelectedBarItem;
- (void)categoryButtonUp:(id)arg1;
- (void)categoryButtonDown:(id)arg1;
- (id)processLinkForSpam:(id)arg1 sourceId:(id)arg2;
- (void)buttonItemAction:(id)arg1;
- (void)addOptionBarItems;
- (void)addCardItems;
- (void)reloadData;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

