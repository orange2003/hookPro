//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HomePageChannelAction, NSString;

@interface ScanSearchResultHotCategory : NSObject
{
    _Bool _selected;
    NSString *_hotCategoryId;
    NSString *_hotCategoryName;
}

@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(copy, nonatomic) NSString *hotCategoryName; // @synthesize hotCategoryName=_hotCategoryName;
@property(copy, nonatomic) NSString *hotCategoryId; // @synthesize hotCategoryId=_hotCategoryId;
- (void).cxx_destruct;
@property(readonly, nonatomic) HomePageChannelAction *hotCategoryAction;

@end
