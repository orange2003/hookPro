//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JHSCSLinearLayoutView.h"

#import "JHSBoxContainerView-Protocol.h"

@class NSArray, UIView;
@protocol JHSBoxContainerView;

@interface JHSCSLinearLayoutView (Box) <JHSBoxContainerView>
- (unsigned long long)addSubboxView:(id)arg1;
- (unsigned long long)removeSubboxView:(id)arg1;
- (id)removeSubboxViewAtIndex:(unsigned long long)arg1;
@property(readonly, copy, nonatomic) NSArray *subboxViews;

// Remaining properties
@property(nonatomic) struct UIEdgeInsets boxEdgeInset;
@property(nonatomic) struct CGRect boxFrame;
@property(readonly, nonatomic) UIView<JHSBoxContainerView> *superboxView;
@end
