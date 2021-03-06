//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "DTMessageBubbleAttachmentProtocol-Protocol.h"

@class DTMessageBubbleAttachmentImageView, DTMessageBubbleAttachmentVideoView, DTMessageBubbleFileItem, NSString, UIButton, UIImageView, UILabel;
@protocol DTMessageCollectionViewCellAttachmentProtocol;

@interface DTMessageBubbleAttachmentFileView : UIView <DTMessageBubbleAttachmentProtocol>
{
    CDUnknownBlockType _cleanSelectedFileBlock;
    UIImageView *_bgImageView;
    UIImageView *_iconImageView;
    UIImageView *_safeIconImageView;
    UILabel *_contentLabel;
    UILabel *_fileSizeLabel;
    UIButton *_deleteBtn;
    DTMessageBubbleAttachmentVideoView *_videoView;
    DTMessageBubbleAttachmentImageView *_imageView;
    UIView *_spaceLogoView;
    DTMessageBubbleFileItem *_fileItem;
}

+ (struct CGSize)calculateSizeWithItem:(id)arg1 showRightBtn:(_Bool)arg2 constraintsSize:(struct CGSize)arg3;
+ (struct CGSize)calculateSizeWithItem:(id)arg1 constraintsSize:(struct CGSize)arg2;
@property(retain, nonatomic) DTMessageBubbleFileItem *fileItem; // @synthesize fileItem=_fileItem;
@property(retain, nonatomic) UIView *spaceLogoView; // @synthesize spaceLogoView=_spaceLogoView;
@property(retain, nonatomic) DTMessageBubbleAttachmentImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) DTMessageBubbleAttachmentVideoView *videoView; // @synthesize videoView=_videoView;
@property(retain, nonatomic) UIButton *deleteBtn; // @synthesize deleteBtn=_deleteBtn;
@property(retain, nonatomic) UILabel *fileSizeLabel; // @synthesize fileSizeLabel=_fileSizeLabel;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UIImageView *safeIconImageView; // @synthesize safeIconImageView=_safeIconImageView;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(copy, nonatomic) CDUnknownBlockType cleanSelectedFileBlock; // @synthesize cleanSelectedFileBlock=_cleanSelectedFileBlock;
- (void).cxx_destruct;
- (void)onFromBtnClick:(id)arg1;
- (void)onDeleteIconClick:(id)arg1;
- (void)layoutSubviews;
- (void)configImageWithItem:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)configVideoWithItem:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)configFileWithItem:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)configWithItem:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) __weak id <DTMessageCollectionViewCellAttachmentProtocol> attachmentDelegate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

