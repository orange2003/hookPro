//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MUAlertBarModel.h"

@class NSString;

@interface MUAt6AlertBarModel : MUAlertBarModel
{
    NSString *_title;
    NSString *_subtitle;
    NSString *_btnTitle;
    CDUnknownBlockType _buttonBlock;
    CDUnknownBlockType _closeBlock;
}

@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
@property(copy, nonatomic) CDUnknownBlockType buttonBlock; // @synthesize buttonBlock=_buttonBlock;
@property(copy, nonatomic) NSString *btnTitle; // @synthesize btnTitle=_btnTitle;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)init;

@end

