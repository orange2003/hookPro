//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MDPublishParam : NSObject
{
    int type;
    NSString *targetid;
    int status;
    NSString *_errorMessage;
}

@property(copy, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(nonatomic) int status; // @synthesize status;
@property(nonatomic) int type; // @synthesize type;
@property(retain, nonatomic) NSString *targetid; // @synthesize targetid;
- (_Bool)isComment;
- (_Bool)isFeed;
- (void)dealloc;
- (id)initWithPublishType:(int)arg1;
- (id)init;

@end

