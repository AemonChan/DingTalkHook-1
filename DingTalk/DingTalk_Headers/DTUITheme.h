//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;
@protocol DTUIThemeDelegate;

@interface DTUITheme : NSObject
{
    NSDictionary *_themeDictionary;
    NSArray *_keyNameArray;
    NSString *_themeName;
    id <DTUIThemeDelegate> _delegate;
}

+ (void)sendChangeThemeNotification;
+ (id)sharedDTUITheme;
@property(nonatomic) __weak id <DTUIThemeDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *themeName; // @synthesize themeName=_themeName;
@property(retain, nonatomic) NSArray *keyNameArray; // @synthesize keyNameArray=_keyNameArray;
@property(retain, nonatomic) NSDictionary *themeDictionary; // @synthesize themeDictionary=_themeDictionary;
- (void).cxx_destruct;
- (void)Log:(id)arg1;
- (id)getUIDictionaryByKeyName:(id)arg1;
- (_Bool)loadDefaultTheme:(id *)arg1;
- (_Bool)loadTheme:(id)arg1 error:(id *)arg2;
- (_Bool)isFileExistInSandBox:(id)arg1;
- (id)getFilenameFromSandBox:(id)arg1;
- (_Bool)coverTheme:(id)arg1 error:(id *)arg2;
- (id)getSDKBuddle;

@end

