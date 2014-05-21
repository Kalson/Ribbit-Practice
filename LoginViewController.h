//
//  LoginViewController.h
//  Ribbit
//
//  Created by KaL on 5/15/14.
//  Copyright (c) 2014 Kalson Kalu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LoginViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *usernameField;
@property (weak, nonatomic) IBOutlet UITextField *passwordField;

- (IBAction)login:(id)sender;

@end
