//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NewSearchSiftViewModel, SearchToolViewModel;

@protocol SearchToolViewModelDelegate <NSObject>
- (void)searchToolVM:(SearchToolViewModel *)arg1 selectedPresentStyle:(long long)arg2;
- (void)searchToolVM:(SearchToolViewModel *)arg1 searchModeChanged:(long long)arg2;
- (NewSearchSiftViewModel *)querySiftViewModel:(_Bool)arg1;
- (void)searchToolVMNeedLoadFirstPage:(_Bool)arg1;
@end

