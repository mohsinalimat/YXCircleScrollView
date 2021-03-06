//
//  YXCircleScrollViewController.h
//  YXebookReader
//
//  Created by BZBY on 15/12/4.
//  Copyright (c) 2015年 BZBY. All rights reserved.
//

#import <UIKit/UIKit.h>
@class YXImageViewController;
typedef void (^SingleTapHandle)(YXImageViewController * imageViewController, UITapGestureRecognizer*tapGesture);
typedef void (^LongPressHandle)(YXImageViewController * imageViewController, UILongPressGestureRecognizer*longPressGesture);
typedef void (^DownloadNetImageStartBlock)(void);
typedef void (^DownloadNetImageFinishBlock)(void);
@interface YXImageViewController : UIViewController
@property (strong, nonatomic,readonly)  UIImageView *imageView;

@property (strong,nonatomic) NSURL * url;
@property (strong,nonatomic) UIImage * image;
@property (strong,nonatomic) UIImage * defaultImage;
@property (assign,nonatomic) NSInteger pageIndex;

@property (assign,nonatomic) CGSize size;

@property (copy,nonatomic) SingleTapHandle singleTapHandle;
@property (copy,nonatomic) LongPressHandle longPressHandle;

@property (copy,nonatomic) DownloadNetImageStartBlock downloadNetImageStartBlock;
@property (copy,nonatomic) DownloadNetImageFinishBlock downloadNetImageFinishBlock;
@end
