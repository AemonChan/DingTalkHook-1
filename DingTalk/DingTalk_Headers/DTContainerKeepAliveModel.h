//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSString;
@protocol LAContainerLifeCircleProtocol;

@interface DTContainerKeepAliveModel : NSObject
{
    NSString *_instanceId;
    id <LAContainerLifeCircleProtocol> _container;
    NSDate *_buildDate;
    long long _keepTime;
}

+ (id)modelWithId:(id)arg1 container:(id)arg2 keepTime:(long long)arg3;
@property(nonatomic) long long keepTime; // @synthesize keepTime=_keepTime;
@property(retain, nonatomic) NSDate *buildDate; // @synthesize buildDate=_buildDate;
@property(retain, nonatomic) id <LAContainerLifeCircleProtocol> container; // @synthesize container=_container;
@property(copy, nonatomic) NSString *instanceId; // @synthesize instanceId=_instanceId;
- (void).cxx_destruct;
- (_Bool)refreshBuildDateWithKeepTime:(long long)arg1;
- (_Bool)expired;

@end
