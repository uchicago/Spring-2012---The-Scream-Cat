//
//  ViewController.h
//  TheScream
//
//  Created by T. Binkowski on 5/3/12.
//  Copyright (c) 2012 University of Chicago. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AudioToolbox/AudioToolbox.h>
#import <AVFoundation/AVFoundation.h>

@interface ViewController : UIViewController 
    <UIGestureRecognizerDelegate,
    UINavigationControllerDelegate,
    UIImagePickerControllerDelegate,
    UIActionSheetDelegate,
    UIAlertViewDelegate> 


// 
@property (strong,nonatomic) UIImage *currentImage;
@property (strong,nonatomic) AVAudioPlayer *backgroundMusic;

// Gesture Actions
- (IBAction)addStar:(UIGestureRecognizer*)gestureRecognizer;
- (void)addGestureRecognizersToStar:(UIView *)piece;

- (void)adjustAnchorPointForGestureRecognizer:(UIGestureRecognizer *)gestureRecognizer;
- (void)panPiece:(UIPanGestureRecognizer *)gestureRecognizer;
- (void)rotatePiece:(UIRotationGestureRecognizer *)gestureRecognizer;
- (void)scalePiece:(UIPinchGestureRecognizer *)gestureRecognizer;


// Button Actions
- (IBAction)photoButton:(id)sender;
- (IBAction)showInstructions:(id)sender;
- (IBAction)showAlert:(id)sender;

// Methods
- (void)animate;
- (void)soundEffects;
- (void)playBackgroundMusic;

@end
