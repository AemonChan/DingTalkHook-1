//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTDingCommentHandler.h"

#import "DTMessagePopupAlbumMenuViewDelegate-Protocol.h"

@class DTMessagePopupAlbumMenuView, NSString;

@interface DTDingCommentInputMicroAppHandlerV2 : DTDingCommentHandler <DTMessagePopupAlbumMenuViewDelegate>
{
    DTMessagePopupAlbumMenuView *_albumMenuView;
}

+ (id)buildAttachmentWithCSpaceDentry:(id)arg1;
@property(retain, nonatomic) DTMessagePopupAlbumMenuView *albumMenuView; // @synthesize albumMenuView=_albumMenuView;
- (void).cxx_destruct;
- (void)handleChooseCSpaceFile;
- (void)didOpenedAlbumOnPopupAlbumMenuView:(id)arg1;
- (void)didOpenedCameraOnPopupAlbumMenuView:(id)arg1;
- (void)didSelectedPhotosInAlbumWithViewModels:(id)arg1 isOriginal:(_Bool)arg2;
- (_Bool)albumMenuViewNeedAutoDismissWhenSendPhotos;
- (void)didSelectedPhotosInAlbumWithSelectedIndexPaths:(id)arg1;
- (void)reloadMicroAppActionItems:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
