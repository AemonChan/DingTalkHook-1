//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSArray.h>

@interface NSArray (PureLayout)
- (id)al_copyViewsOnly;
- (_Bool)al_containsMinimumNumberOfViews:(unsigned long long)arg1;
- (id)al_commonSuperviewOfViews;
- (id)autoDistributeViewsAlongAxis:(long long)arg1 alignedTo:(long long)arg2 withFixedSize:(double)arg3 insetSpacing:(_Bool)arg4;
- (id)autoDistributeViewsAlongAxis:(long long)arg1 alignedTo:(long long)arg2 withFixedSize:(double)arg3;
- (id)autoDistributeViewsAlongAxis:(long long)arg1 alignedTo:(long long)arg2 withFixedSpacing:(double)arg3 insetSpacing:(_Bool)arg4 matchedSizes:(_Bool)arg5;
- (id)autoDistributeViewsAlongAxis:(long long)arg1 alignedTo:(long long)arg2 withFixedSpacing:(double)arg3 insetSpacing:(_Bool)arg4;
- (id)autoDistributeViewsAlongAxis:(long long)arg1 alignedTo:(long long)arg2 withFixedSpacing:(double)arg3;
- (id)autoSetViewsDimensionsToSize:(struct CGSize)arg1;
- (id)autoSetViewsDimension:(long long)arg1 toSize:(double)arg2;
- (id)autoMatchViewsDimension:(long long)arg1;
- (id)autoAlignViewsToAxis:(long long)arg1;
- (id)autoAlignViewsToEdge:(long long)arg1;
- (id)autoIdentifyConstraints:(id)arg1;
- (void)autoRemoveConstraints;
- (void)autoInstallConstraints;
@end
