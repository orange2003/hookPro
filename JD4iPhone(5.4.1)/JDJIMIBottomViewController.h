//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "JIMIVoiceVCDelegate.h"

@class JDJIMIEmotionViewController, JDJIMIExtentFuncViewController, JDJIMIInputViewController, JIMIAskModel, JIMIVoiceVC, NSString;

@interface JDJIMIBottomViewController : UIViewController <JIMIVoiceVCDelegate>
{
    float keyboardHeight;
    int _showStyle;
    id <JDJIMIBottomViewControllerDelegate> _csDelegate;
    JDJIMIInputViewController *_inputVC;
    JDJIMIEmotionViewController *_emotionVC;
    JDJIMIExtentFuncViewController *_extendVC;
    JIMIVoiceVC *_voiceVC;
    JIMIAskModel *_voiceAskModel;
}

+ (void)storeStyle:(int)arg1;
+ (int)lastStoreStyle;
@property(retain, nonatomic) JIMIAskModel *voiceAskModel; // @synthesize voiceAskModel=_voiceAskModel;
@property(retain, nonatomic) JIMIVoiceVC *voiceVC; // @synthesize voiceVC=_voiceVC;
@property(retain, nonatomic) JDJIMIExtentFuncViewController *extendVC; // @synthesize extendVC=_extendVC;
@property(retain, nonatomic) JDJIMIEmotionViewController *emotionVC; // @synthesize emotionVC=_emotionVC;
@property(retain, nonatomic) JDJIMIInputViewController *inputVC; // @synthesize inputVC=_inputVC;
@property(nonatomic) id <JDJIMIBottomViewControllerDelegate> csDelegate; // @synthesize csDelegate=_csDelegate;
@property(nonatomic) int showStyle; // @synthesize showStyle=_showStyle;
- (void).cxx_destruct;
- (void)sendVoiceText:(id)arg1;
- (void)startRecVoiceText;
- (void)cancelVoiceText;
- (void)clearInputText;
- (id)getSendText;
- (void)appendText:(id)arg1;
- (void)removeEmotion;
- (void)showNoneView;
- (void)showExtentFuncView;
- (void)showEmotionView;
- (void)showKeyboardView;
- (void)showVoiceView;
- (void)resetSize;
- (float)getFuncViewHeight;
- (void)SwitchShowStyle:(int)arg1;
- (void)showHelpText:(id)arg1;
- (void)sendMessage:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)initUI;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

