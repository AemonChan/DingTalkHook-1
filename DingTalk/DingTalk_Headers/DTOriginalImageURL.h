//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface DTOriginalImageURL : NSObject
{
    NSString *_imageFileName;
    NSString *_imageFileExtension;
}

+ (id)originalImageURLFromUrl:(id)arg1;
@property(retain, nonatomic) NSString *imageFileExtension; // @synthesize imageFileExtension=_imageFileExtension;
@property(retain, nonatomic) NSString *imageFileName; // @synthesize imageFileName=_imageFileName;
- (void).cxx_destruct;
- (id)initWithImageFileName:(id)arg1 imageFileExtension:(id)arg2;

@end
