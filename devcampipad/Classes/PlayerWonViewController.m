//
//  PlayerWonViewController.m
//  devcampipad
//
//  Created by Brad Smith on 7/22/12.
//  Copyright (c) 2012 Focal Labs. All rights reserved.
//

#import "PlayerWonViewController.h"

@interface PlayerWonViewController ()

@end

@implementation PlayerWonViewController
@synthesize winnerimageView;
@synthesize loser1ImageView;
@synthesize loser2ImageView;
@synthesize loser3ImageView;
@synthesize winnerLabel;
@synthesize loser1Label;
@synthesize loser2Label;
@synthesize loser3Label;

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
   [[NSNotificationCenter defaultCenter] addObserver:self.view selector:@selector(removeFromSuperview) name:@"GAME_DID_START" object:nil];
}

- (void)viewDidUnload
{
  [self setWinnerimageView:nil];
  [self setLoser1ImageView:nil];
  [self setLoser2ImageView:nil];
  [self setLoser3ImageView:nil];
  [self setWinnerLabel:nil];
  [self setLoser1Label:nil];
  [self setLoser2Label:nil];
  [self setLoser3Label:nil];
    [super viewDidUnload];
    // Release any retained subviews of the main view.
    // e.g. self.myOutlet = nil;
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation
{
    return (interfaceOrientation == UIInterfaceOrientationPortrait);
}

- (void)dealloc {
  [winnerimageView release];
  [loser1ImageView release];
  [loser2ImageView release];
  [loser3ImageView release];
  [winnerLabel release];
  [loser1Label release];
  [loser2Label release];
  [loser3Label release];
  [super dealloc];
}
@end
