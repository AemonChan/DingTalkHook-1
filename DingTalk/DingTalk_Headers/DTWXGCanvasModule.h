//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "GCVImageLoaderProtocol-Protocol.h"
#import "GLKViewDelegate-Protocol.h"
#import "WXModuleProtocol-Protocol.h"

@class DTWXGCanvasComponent, GCanvasPlugin, NSString, WXSDKInstance;

@interface DTWXGCanvasModule : NSObject <GLKViewDelegate, GCVImageLoaderProtocol, WXModuleProtocol>
{
    _Bool _gcanvasInitalized;
    WXSDKInstance *weexInstance;
    DTWXGCanvasComponent *_gcanvasComponent;
    NSString *_componentRel;
    GCanvasPlugin *_gcanvasPlugin;
    double _devicePixelRatio;
}

+ (id)wx_export_method_37;
+ (id)wx_export_method_36;
+ (id)wx_export_method_35;
+ (id)wx_export_method_34;
+ (id)wx_export_method_33;
+ (id)wx_export_method_32;
+ (id)wx_export_method_31;
@property(nonatomic) _Bool gcanvasInitalized; // @synthesize gcanvasInitalized=_gcanvasInitalized;
@property(nonatomic) double devicePixelRatio; // @synthesize devicePixelRatio=_devicePixelRatio;
@property(retain, nonatomic) GCanvasPlugin *gcanvasPlugin; // @synthesize gcanvasPlugin=_gcanvasPlugin;
@property(retain, nonatomic) NSString *componentRel; // @synthesize componentRel=_componentRel;
@property(nonatomic) __weak DTWXGCanvasComponent *gcanvasComponent; // @synthesize gcanvasComponent=_gcanvasComponent;
@property(nonatomic) __weak WXSDKInstance *weexInstance; // @synthesize weexInstance;
- (void).cxx_destruct;
- (void)loadImage:(id)arg1 completed:(CDUnknownBlockType)arg2;
- (void)glkView:(id)arg1 drawInRect:(struct CGRect)arg2;
- (void)execCommand;
- (void)setLogLevel:(unsigned long long)arg1;
- (void)setContextType:(unsigned long long)arg1;
- (void)preLoadImage:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)render:(id)arg1;
- (void)disable:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)enable:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)getDeviceInfo:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
