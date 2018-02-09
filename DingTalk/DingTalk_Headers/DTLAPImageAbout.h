//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LAPluginBase.h"

#import "DTMessagePopupAlbumMenuViewDelegate-Protocol.h"
#import "ELCImagePickerControllerDelegate-Protocol.h"

@class LAActionRequest, LAActionResponse, NSDictionary, NSMutableArray, NSMutableSet, NSString, VSWatermarkCameraViewController;

@interface DTLAPImageAbout : LAPluginBase <DTMessagePopupAlbumMenuViewDelegate, ELCImagePickerControllerDelegate>
{
    _Bool _uploadStarted;
    _Bool _enbalemMltiple;
    _Bool _useMediaId;
    _Bool _imageNeedCompressed;
    _Bool _uploadRetry;
    _Bool _needBeauty;
    _Bool _needCrop;
    long long _maxPickerCnt;
    long long _uploadingImageCnt;
    NSMutableArray *_uploadedImageUrls;
    LAActionRequest *_uploadRequest;
    LAActionResponse *_uploadResponse;
    NSDictionary *_stickersInfo;
    long long _cameraDevice;
    double _imageQuality;
    double _imageResize;
    double _retryQuality;
    double _retryResize;
    double _uploadTime;
    NSMutableSet *_timerSet;
    double _expiredTime;
    double _cropWidth;
    double _cropHeight;
    VSWatermarkCameraViewController *_picker;
    CDUnknownBlockType _imageDataHandler;
}

+ (id)pluginExactName;
@property(copy, nonatomic) CDUnknownBlockType imageDataHandler; // @synthesize imageDataHandler=_imageDataHandler;
@property(nonatomic) __weak VSWatermarkCameraViewController *picker; // @synthesize picker=_picker;
@property(nonatomic) double cropHeight; // @synthesize cropHeight=_cropHeight;
@property(nonatomic) double cropWidth; // @synthesize cropWidth=_cropWidth;
@property(nonatomic) _Bool needCrop; // @synthesize needCrop=_needCrop;
@property(nonatomic) _Bool needBeauty; // @synthesize needBeauty=_needBeauty;
@property(nonatomic) double expiredTime; // @synthesize expiredTime=_expiredTime;
@property(retain, nonatomic) NSMutableSet *timerSet; // @synthesize timerSet=_timerSet;
@property(nonatomic) double uploadTime; // @synthesize uploadTime=_uploadTime;
@property(nonatomic) double retryResize; // @synthesize retryResize=_retryResize;
@property(nonatomic) double retryQuality; // @synthesize retryQuality=_retryQuality;
@property(nonatomic) double imageResize; // @synthesize imageResize=_imageResize;
@property(nonatomic) double imageQuality; // @synthesize imageQuality=_imageQuality;
@property(nonatomic) _Bool uploadRetry; // @synthesize uploadRetry=_uploadRetry;
@property(nonatomic) long long cameraDevice; // @synthesize cameraDevice=_cameraDevice;
@property(copy, nonatomic) NSDictionary *stickersInfo; // @synthesize stickersInfo=_stickersInfo;
@property(retain, nonatomic) LAActionResponse *uploadResponse; // @synthesize uploadResponse=_uploadResponse;
@property(retain, nonatomic) LAActionRequest *uploadRequest; // @synthesize uploadRequest=_uploadRequest;
@property(retain, nonatomic) NSMutableArray *uploadedImageUrls; // @synthesize uploadedImageUrls=_uploadedImageUrls;
@property long long uploadingImageCnt; // @synthesize uploadingImageCnt=_uploadingImageCnt;
@property(nonatomic) long long maxPickerCnt; // @synthesize maxPickerCnt=_maxPickerCnt;
@property(nonatomic) _Bool imageNeedCompressed; // @synthesize imageNeedCompressed=_imageNeedCompressed;
@property(nonatomic) _Bool useMediaId; // @synthesize useMediaId=_useMediaId;
@property(nonatomic) _Bool enbalemMltiple; // @synthesize enbalemMltiple=_enbalemMltiple;
@property _Bool uploadStarted; // @synthesize uploadStarted=_uploadStarted;
- (void).cxx_destruct;
- (void)postWarningNotify;
- (void)resetAllTimers;
- (void)resetAllTimersMainThread;
- (void)resetAllTimersMainThreadSync;
- (void)resetUploadingStatusSafty;
- (id)hudWindow;
- (void)responseSuccessSafety;
- (void)setImageDataHasRetryed:(id)arg1 originalFilePath:(id)arg2;
- (_Bool)imageDataHasRetryed:(id)arg1 originalFilePath:(id)arg2;
- (void)reUploadImageData:(id)arg1 originalFilePath:(id)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (void)uploadImageData:(id)arg1 originalFilePath:(id)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (id)resizeImage:(id)arg1 resize:(double)arg2;
- (void)asyncJPEGRepresentationWithImage:(id)arg1 resize:(double)arg2 quality:(double)arg3 completeBlock:(CDUnknownBlockType)arg4;
- (void)compressImage:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)checkAndUpload:(id)arg1 originalFilePath:(id)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (void)encodeImage:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (void)elcImagePickerControllerDidCancel:(id)arg1;
- (void)elcImagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)loadItem:(id)arg1 withSuccessBlock:(CDUnknownBlockType)arg2 andFailureBlock:(CDUnknownBlockType)arg3;
- (void)handleSelectedPhotos:(id)arg1 isOriginal:(_Bool)arg2;
- (void)didCancelOnPopupAlbumMenuView:(id)arg1;
- (void)didOpenedAlbumOnPopupAlbumMenuView:(id)arg1;
- (void)didCancelPickImageAsset;
- (void)didPickImageAsset:(id)arg1;
- (void)didOpenedCameraOnPopupAlbumMenuView:(id)arg1;
- (void)didSelectedPhotosInAlbumWithViewModels:(id)arg1 isOriginal:(_Bool)arg2;
- (long long)languageTypeForVSCameraView;
- (void)showPopupAlbumMenuView;
- (void)fetchImageData:(id)arg1 to:(id)arg2;
- (void)__exported__fetchImageData:(id)arg1 to:(id)arg2;
- (void)uploadImageFromCamera:(id)arg1 to:(id)arg2;
- (void)__exported__uploadImageFromCamera:(id)arg1 to:(id)arg2;
- (id)imageURLWithMediaId:(id)arg1 authMediaId:(id)arg2;
- (void)uploadImage:(id)arg1 to:(id)arg2;
- (void)__exported__uploadImage:(id)arg1 to:(id)arg2;
- (void)disposePlugin;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
