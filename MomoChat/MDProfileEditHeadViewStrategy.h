//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface MDProfileEditHeadViewStrategy : NSObject
{
    int _picFileType;
    long long _type;
    long long _dataListMaxCount;
    long long _cellNumMaxCount;
    NSString *_itemFullAlertMsg;
    NSString *_itemPicImageAlertMsg;
    NSArray *_actionSheetAddItemTitleArray;
    NSArray *_actionSheetReplaceItemTitleArray;
    long long _gifItemMaxCount;
}

+ (id)defaultEditStrategy;
+ (id)shopEditStrategy;
+ (id)groupEditStrategy;
+ (id)userVipEditStrategy;
+ (id)userEditStrategy;
@property(nonatomic) long long gifItemMaxCount; // @synthesize gifItemMaxCount=_gifItemMaxCount;
@property(copy, nonatomic) NSArray *actionSheetReplaceItemTitleArray; // @synthesize actionSheetReplaceItemTitleArray=_actionSheetReplaceItemTitleArray;
@property(retain, nonatomic) NSArray *actionSheetAddItemTitleArray; // @synthesize actionSheetAddItemTitleArray=_actionSheetAddItemTitleArray;
@property(copy, nonatomic) NSString *itemPicImageAlertMsg; // @synthesize itemPicImageAlertMsg=_itemPicImageAlertMsg;
@property(copy, nonatomic) NSString *itemFullAlertMsg; // @synthesize itemFullAlertMsg=_itemFullAlertMsg;
@property(nonatomic) int picFileType; // @synthesize picFileType=_picFileType;
@property(nonatomic) long long cellNumMaxCount; // @synthesize cellNumMaxCount=_cellNumMaxCount;
@property(nonatomic) long long dataListMaxCount; // @synthesize dataListMaxCount=_dataListMaxCount;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

