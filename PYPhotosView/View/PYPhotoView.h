//
//  PYPhotoView.h
//  新浪微博
//
//  Created by 谢培艺 on 15/12/16.
//  Copyright © 2015年 iphone5solo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIView+PYExtension.h"
@class PYPhoto, PYPhotoCell, PYPhotosView, PYDALabeledCircularProgressView;

@interface PYPhotoView : UIImageView

/** 图片模型 */
@property (nonatomic, strong) PYPhoto *photo;

/** 网络图片*/
@property (nonatomic, strong) NSArray *photos;

/** 本地相册图片 */
@property (nonatomic, strong) NSArray *images;

/** 是否放大状态 */
@property (nonatomic, assign) BOOL isBig;

/** 原来的frame*/
@property (nonatomic, assign) CGRect orignalFrame;

/** 放大的倍数 */
@property (nonatomic, assign) CGFloat scale;

/** 判断是否是旋转手势 */
@property (nonatomic, assign, getter=isRotationGesture) BOOL rotationGesture;

/** 在window呈现的view*/
@property (nonatomic, strong) PYPhotoView *windowView;

/** 父控件photosView */
@property (nonatomic, weak) PYPhotosView *photosView;

/** 每个photoView的photoCell */
@property (nonatomic, weak) PYPhotoCell *photoCell;

/** 加载进度 */
@property (weak, nonatomic) PYDALabeledCircularProgressView *progressView;

/** 是否正在预览*/
@property (nonatomic, assign) BOOL isPreview;

- (void)imageDidPinch:(UIPinchGestureRecognizer *)pinch;
- (void)photoDidRotation:(UIRotationGestureRecognizer *)rotation;
@end
