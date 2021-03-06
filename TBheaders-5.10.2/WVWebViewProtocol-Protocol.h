//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "WVWebViewBasicProtocol-Protocol.h"

@class NSArray, NSDictionary, NSString, NSURLRequest, UIViewController, WVJSPatch, WVJavascriptApplication, WVPagePerformance;
@protocol WVWebViewDelegate;

@protocol WVWebViewProtocol <NSObject, WVWebViewBasicProtocol>
@property(nonatomic) _Bool isOpenAutoPlayAudio;
@property(readonly, nonatomic) NSDictionary *jsBridgeCallHistory;
@property(nonatomic, getter=isOpenLocalService) _Bool openLocalService;
@property(readonly, nonatomic) WVJavascriptApplication *webviewJSBContext;
@property(nonatomic) __weak id <WVWebViewDelegate> windVaneDelegate;
@property(readonly, nonatomic, getter=isPageEmpty) _Bool pageEmpty;
@property(readonly, nonatomic) WVPagePerformance *pagePerformance;
@property(readonly, nonatomic) WVJSPatch *jsPatch;
@property(nonatomic) long long contentType;
@property(readonly, nonatomic) long long visiblity;
@property(readonly, nonatomic) NSString *title;
@property(readonly, retain, nonatomic) NSURLRequest *request;
@property(nonatomic) _Bool mediaPlaybackAllowsAirPlay;
@property(nonatomic) _Bool mediaPlaybackRequiresUserAction;
@property(nonatomic) _Bool allowsInlineMediaPlayback;
@property(nonatomic, getter=isAutoPlayAudio) _Bool autoPlayAudio;
@property(nonatomic, getter=isOpenLongPressSaveImage) _Bool openLongPressSaveImage;
@property(nonatomic, getter=isOpenWebKitLongPress) _Bool openWebKitLongPress;
@property(nonatomic) _Bool scrollsToTop;
@property(retain, nonatomic) NSString *bizCode;
@property(nonatomic, getter=isUseCustomPullToRefresh) _Bool useCustomPullToRefresh;
@property(nonatomic, getter=isUseInfiniteScrolling) _Bool useInfiniteScrolling;
@property(nonatomic, getter=isUsePullToRefresh) _Bool usePullToRefresh;
@property(nonatomic, getter=isForbiddenPullScroll) _Bool forbiddenPullScroll;
@property(nonatomic) long long visibleInViewController;
@property(nonatomic) __weak UIViewController *sourceViewController;
- (void (^)(NSString *, NSDictionary *))callBackResponeseForJSWithHandlerName:(NSString *)arg1 className:(NSString *)arg2;
- (void)deallocWebViewService;
- (void)openJSBridgeLog;
- (void)setJSPatchRule:(NSDictionary *)arg1;
- (NSDictionary *)getJSPatchRule;
- (NSString *)getRequestUrl;
- (void)setIsOpenLocalService:(_Bool)arg1;
- (void)registeHandler:(NSString *)arg1 withClassName:(NSString *)arg2 handler:(void (^)(NSString *, void (^)(NSString *, NSDictionary *)))arg3;
- (void)fetchElementValue:(NSArray *)arg1 completionHandler:(void (^)(NSDictionary *))arg2;
- (void)callRegistedHandler:(NSString *)arg1 withMethod:(NSString *)arg2 withData:(NSString *)arg3 withFatherClass:(NSString *)arg4 withFatherMethod:(NSString *)arg5 withResultCallback:(void (^)(NSString *, NSDictionary *))arg6;
- (void)callRegistedHandler:(NSString *)arg1 withMethod:(NSString *)arg2 withData:(NSString *)arg3 withFatherClass:(NSString *)arg4 withFatherMethod:(NSString *)arg5;
- (void)registerHandler:(NSString *)arg1 withClassName:(NSString *)arg2 withHandler:(void (^)(NSDictionary *, void (^)(NSString *, NSDictionary *)))arg3;
- (void)bindingWebViewService;
- (void)releaseWebViewService;
- (void)isPageEmpty:(void (^)(_Bool))arg1;
@end

