//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMapGeoFenceRegion.h"

@interface AMapGeoFenceCircleRegion : AMapGeoFenceRegion
{
    double _radius;
    struct CLLocationCoordinate2D _center;
}

@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(nonatomic) struct CLLocationCoordinate2D center; // @synthesize center=_center;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (double)distanceFromPointToBoundary:(struct CLLocationCoordinate2D)arg1;
- (_Bool)containsCoordinate:(struct CLLocationCoordinate2D)arg1;
- (id)initWithCenter:(struct CLLocationCoordinate2D)arg1 radius:(double)arg2 customID:(id)arg3;

@end
