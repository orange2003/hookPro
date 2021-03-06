//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBOBaseUGCComponent.h"

@class NSMutableDictionary, TBOPlaceholderTextView;

@interface TBOUGCTextComponent : TBOBaseUGCComponent
{
    TBOPlaceholderTextView *_field;	// 8 = 0x8
    unsigned long long _miniNum;	// 16 = 0x10
    unsigned long long _maxNum;	// 24 = 0x18
    NSMutableDictionary *_textAttributes;	// 32 = 0x20
}

+ (id)componentName;
@property(retain, nonatomic) NSMutableDictionary *textAttributes; // @synthesize textAttributes=_textAttributes;
@property(nonatomic) unsigned long long maxNum; // @synthesize maxNum=_maxNum;
@property(nonatomic) unsigned long long miniNum; // @synthesize miniNum=_miniNum;
@property(retain, nonatomic) TBOPlaceholderTextView *field; // @synthesize field=_field;
- (void).cxx_destruct;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textFiledEditChanged:(id)arg1;
- (void)publish:(CDUnknownBlockType)arg1;
- (_Bool)isModify;
- (_Bool)isValid;
- (void)applyData:(id)arg1;
- (void)applyStyle:(id)arg1;
- (id)defaultStyle;
- (void)keyboardHidenNotify:(id)arg1;
- (void)keyboardShowNotify:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1 parent:(id)arg2;

@end

