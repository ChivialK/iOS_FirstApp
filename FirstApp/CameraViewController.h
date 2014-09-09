//
//  CameraViewController.h
//  FirstApp
//
//  Created by RavenC on 2014/8/25.
//  Copyright (c) 2014年 ChivialK. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CameraViewController : UIViewController
<UIImagePickerControllerDelegate, UINavigationControllerDelegate>;

@property (strong, nonatomic) IBOutlet UIImageView *imageView;

- (IBAction)takePhoto:(UIButton *)sender;
- (IBAction)selectPhoto:(UIButton *)sender;


@end
