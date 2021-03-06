//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MLUserRankDataSource.h"

@class MLUserRankItemModel, NSString;

@interface MLPerformerDailyRankDataSource : MLUserRankDataSource
{
    NSString *_starid;
    MLUserRankItemModel *_starRank;
}

@property(retain, nonatomic) MLUserRankItemModel *starRank; // @synthesize starRank=_starRank;
@property(retain, nonatomic) NSString *starid; // @synthesize starid=_starid;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)cellRankType;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)currentUserRankKey;
- (id)dataDictionaryListKey;
- (void)tableRegisterCell:(id)arg1;
- (id)requestParam;
- (id)requestURL;
- (id)init;

@end

