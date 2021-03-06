//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIColor;

@interface DTPolygon : UIView
{
    _Bool _hidesPolygonLine;
    UIColor *_polygonFillColor;
    double _polygonFillOpacity;
    UIColor *_polygonLineColor;
    double _polygonLineWidth;
    NSArray *_radiuses;
}

+ (id)caculatePolygonPathWithCenter:(struct CGPoint)arg1 radiuses:(id)arg2 startAngle:(double)arg3;
+ (id)caculatePolygonPointsWithCenter:(struct CGPoint)arg1 radiuses:(id)arg2 startAngle:(double)arg3;
@property(copy, nonatomic) NSArray *radiuses; // @synthesize radiuses=_radiuses;
@property(nonatomic) _Bool hidesPolygonLine; // @synthesize hidesPolygonLine=_hidesPolygonLine;
@property(nonatomic) double polygonLineWidth; // @synthesize polygonLineWidth=_polygonLineWidth;
@property(retain, nonatomic) UIColor *polygonLineColor; // @synthesize polygonLineColor=_polygonLineColor;
@property(nonatomic) double polygonFillOpacity; // @synthesize polygonFillOpacity=_polygonFillOpacity;
@property(retain, nonatomic) UIColor *polygonFillColor; // @synthesize polygonFillColor=_polygonFillColor;
- (void).cxx_destruct;
- (id)polygonStrokeShapelayer;
- (id)caculatePolygonPath;
- (id)polygonFillShapelayer;
- (void)removeAllSubLayers;
- (void)draw;
- (id)initWithFrame:(struct CGRect)arg1;

@end

