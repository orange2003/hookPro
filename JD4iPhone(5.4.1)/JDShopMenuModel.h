//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDModel.h"

@class JDShopActionConfigModel, NSDictionary, NSMutableArray, NSNumber, NSString;

@interface JDShopMenuModel : JDModel
{
    NSNumber *menuid;
    NSString *menuName;
    NSMutableArray *subMenu;
    NSDictionary *configs;
    JDShopActionConfigModel *actionModel;
}

@property(retain, nonatomic) JDShopActionConfigModel *actionModel; // @synthesize actionModel;
@property(retain, nonatomic) NSDictionary *configs; // @synthesize configs;
@property(retain, nonatomic) NSMutableArray *subMenu; // @synthesize subMenu;
@property(retain, nonatomic) NSString *menuName; // @synthesize menuName;
@property(retain, nonatomic) NSNumber *menuid; // @synthesize menuid;
- (void)dealloc;
- (void)setDataWithDic:(id)arg1;

@end
