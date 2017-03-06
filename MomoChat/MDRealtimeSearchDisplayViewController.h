//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDSearchDisplayViewController.h"

@class MDDelayExecutionBridge;

@interface MDRealtimeSearchDisplayViewController : MDSearchDisplayViewController
{
    _Bool _noDelay;
    MDDelayExecutionBridge *_delayBridge;
    double _keyboardHeight;
}

@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(nonatomic) _Bool noDelay; // @synthesize noDelay=_noDelay;
@property(retain, nonatomic) MDDelayExecutionBridge *delayBridge; // @synthesize delayBridge=_delayBridge;
- (void)delaySearchWithSearchBar:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBar:(id)arg1 didBeginEditing:(id)arg2;
- (void)searchBarSearchTextChange:(id)arg1;
- (void)resetSearchFrame;
- (void)keyboardWillHide:(id)arg1;
- (void)setTableViewHeight;
- (void)keyboardWillShow:(id)arg1;
- (void)setupNotifications;
- (void)dealloc;
- (id)initWithSearchBar:(id)arg1 contentsController:(id)arg2 andResultTableViewFrame:(struct CGRect)arg3;

@end
