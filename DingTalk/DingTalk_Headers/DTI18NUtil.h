//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface DTI18NUtil : NSObject
{
}

+ (_Bool)systemLanguageIsEn;
+ (_Bool)systemLanguageIsZhHant;
+ (_Bool)systemLanguageIsZhHans;
+ (_Bool)isForeignUserByMobile;
+ (_Bool)shouldShowByMainOrgNation;
+ (_Bool)isForeignOrgUser;
+ (_Bool)isForeignOrganization:(id)arg1;
+ (_Bool)isForeignOrg:(long long)arg1;
+ (long long)userMainOrgId;
+ (id)transUrlToI18N:(id)arg1;
+ (id)i18NUrlByLocaleWithString:(id)arg1;
+ (id)i18NUrlByOrgNationWithString:(id)arg1;
+ (id)i18NUrlByOrgIdWithString:(id)arg1 orgId:(long long)arg2;

@end

