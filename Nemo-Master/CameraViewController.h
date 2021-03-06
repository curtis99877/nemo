//
//  CameraViewController.h
//  Nemo-Master
//
//  Copyright (c) 2015 Junhan Huang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import <AudioToolbox/AudioToolbox.h>

@interface CameraViewController : UIViewController{
    IBOutlet UIView *frameforCapture;
    IBOutlet UIImageView *imageView;
}

@property (strong, nonatomic) IBOutlet UIButton *retakeBut;
@property (strong, nonatomic) IBOutlet UIButton *snapBut;
@property (strong, nonatomic) IBOutlet UIButton *submitBut;
@property (strong, nonatomic) IBOutlet UIButton *backBut;

- (IBAction)takephoto:(id)sender;
- (IBAction)retakephoto:(id)sender;
-(IBAction)unwindtoCamera:(UIStoryboardSegue *)segue;

@end
