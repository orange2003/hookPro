//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MDMomentPlayItem : NSObject
{
    _Bool _fromLive;
    NSString *_momentId;
    NSString *_uuid;
    NSString *_videoUrlStr;
    NSString *_coverUrlStr;
}

@property(nonatomic, getter=isFromLive) _Bool fromLive; // @synthesize fromLive=_fromLive;
@property(copy, nonatomic) NSString *coverUrlStr; // @synthesize coverUrlStr=_coverUrlStr;
@property(copy, nonatomic) NSString *videoUrlStr; // @synthesize videoUrlStr=_videoUrlStr;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(copy, nonatomic) NSString *momentId; // @synthesize momentId=_momentId;
- (void).cxx_destruct;

@end

