//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBIMChatBaseBubbleLayout.h"

@interface TBIMChatBusinessCardBubbleLayout : TBIMChatBaseBubbleLayout
{
    struct CGRect _imageViewRect;	// 8 = 0x8
    struct CGRect _titleViewRect;	// 40 = 0x28
    struct CGRect _shareNameViewRect;	// 72 = 0x48
}

@property(nonatomic) struct CGRect shareNameViewRect; // @synthesize shareNameViewRect=_shareNameViewRect;
@property(nonatomic) struct CGRect titleViewRect; // @synthesize titleViewRect=_titleViewRect;
@property(nonatomic) struct CGRect imageViewRect; // @synthesize imageViewRect=_imageViewRect;
- (id)initWithCurrentMessage:(id)arg1 chatBubbleLayoutType:(long long)arg2;

@end

