//
//  DataViewController.h
//  Fiduty
//
//  Created by Ermek Rysbek uulu on 9/4/16.
//  Copyright © 2016 General Robotics Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DataViewController : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *dataLabel;
@property (strong, nonatomic) id dataObject;

@end

