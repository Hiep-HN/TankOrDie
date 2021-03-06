//
//  TDiPadMenuViewController.h
//  devcampipad
//
//  Created by Brad Smith on 5/13/10.
//  Copyright 2010 Clixtr. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TankPickerController.h"
#import "ScoreBoardView.h"

@interface TDiPadMenuViewController : UIViewController <UIPopoverControllerDelegate>{
	IBOutlet UIButton *playButton;
	IBOutlet UIButton *helpButton;
	IBOutlet UIView *startButton;	
	
	IBOutlet UIView *connectionView;	
	
	
	IBOutlet UIImageView *wirelessConnectedTankView1;
	IBOutlet UIImageView *wirelessConnectedTankView2;
	IBOutlet UIImageView *wirelessConnectedTankView3;
	IBOutlet UIImageView *wirelessConnectedTankView4;
	
	IBOutlet UIImageView *wirelessStatusLight1;
	IBOutlet UIImageView *wirelessStatusLight2;
	IBOutlet UIImageView *wirelessStatusLight3;
	IBOutlet UIImageView *wirelessStatusLight4;
	
	IBOutlet UILabel *wirelessPlayerNameLabel1;
	IBOutlet UILabel *wirelessPlayerNameLabel2;
	IBOutlet UILabel *wirelessPlayerNameLabel3;
	IBOutlet UILabel *wirelessPlayerNameLabel4;
	
  IBOutlet ScoreBoardView *scoreBoard;
  IBOutlet UIImageView *backgroundImageView;
	TankPickerController *tankSelectionPlayerOneViewController;
	TankPickerController *tankSelectionPlayerTwoViewController;
	UIPopoverController *addPlayerOnePopoverController;
	UIPopoverController *addPlayerTwoPopoverController;
}

-(IBAction) helpButtonPressed:(id)sender;
-(IBAction) startButtonPressed:(id)sender;
-(IBAction) playButtonPressed:(id)sender;

- (void) setButtonsVisible:(BOOL)visible animated:(BOOL)animated;

-(void) updateConnectionScreenUI;

-(IBAction) addLocalPlayButtonPressed:(id)sender;
- (void)tankPickerController:(TankPickerController *)controller didFinishPickingTankID:(int)tankID withPlayerName:(NSString *)name;

@end
