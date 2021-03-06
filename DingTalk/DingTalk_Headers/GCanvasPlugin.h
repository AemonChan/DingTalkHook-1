//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface GCanvasPlugin : NSObject
{
    struct GCanvasCore *_gcanvas;
    NSMutableArray *_renderCommandArray;
}

@property(retain, nonatomic) NSMutableArray *renderCommandArray; // @synthesize renderCommandArray=_renderCommandArray;
@property(nonatomic) struct GCanvasCore *gcanvas; // @synthesize gcanvas=_gcanvas;
- (void).cxx_destruct;
- (void)setClearColor:(id)arg1;
- (void)setContextType:(int)arg1;
- (void)setDevicePixelRatio:(double)arg1;
- (void)setImageLoader:(id)arg1;
- (void)addTextureId:(unsigned long long)arg1 withAppId:(unsigned long long)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4;
- (void)releaseManager;
- (void)execCommands;
- (void)removeCommands;
- (void)addCommands:(id)arg1;
- (void)setFrame:(struct CGRect)arg1 withClearColor:(id)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)init;

@end

