//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MDActivityCell, MDFeed, UIScrollView;

@protocol MDFeedListScrollDelegate <NSObject>

@optional
- (void)activityView:(MDActivityCell *)arg1 didClickFeedCommentButton:(MDFeed *)arg2;
- (void)scrollViewWillEndVerticalDragging:(UIScrollView *)arg1 withVelocity:(struct CGPoint)arg2;
- (void)scrollViewDidEndVerticalDragging:(UIScrollView *)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndVerticalScroll:(UIScrollView *)arg1;
- (void)scrollViewDidVerticalScroll:(UIScrollView *)arg1;
@end

