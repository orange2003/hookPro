//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class TBFavUniqueListTitleQueryContext;

@interface TBFavUniqueListTitleQueryOperation : NSOperation
{
    _Bool _isExecuting;	// 24 = 0x18
    _Bool _isFinished;	// 25 = 0x19
    TBFavUniqueListTitleQueryContext *_context;	// 32 = 0x20
}

@property(nonatomic) _Bool isFinished; // @synthesize isFinished=_isFinished;
@property(nonatomic) _Bool isExecuting; // @synthesize isExecuting=_isExecuting;
@property(retain, nonatomic) TBFavUniqueListTitleQueryContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)start;
- (id)initWithContext:(id)arg1;

@end
