//
//  RecorderViewController.h
//  FirstApp
//
//  Created by RavenC on 2014/9/1.
//  Copyright (c) 2014年 ChivialK. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface RecorderViewController : UIViewController <AVAudioRecorderDelegate, AVAudioPlayerDelegate>

@property (weak, nonatomic) IBOutlet UIButton *recordButton;
@property (weak, nonatomic) IBOutlet UIButton *stopButton;
@property (weak, nonatomic) IBOutlet UIButton *playButton;

- (IBAction)recordPressed:(id)sender;
- (IBAction)stopPressed:(id)sender;
- (IBAction)playPressed:(id)sender;

@end
