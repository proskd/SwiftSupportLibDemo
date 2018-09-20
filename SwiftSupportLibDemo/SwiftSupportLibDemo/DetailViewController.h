//
//  DetailViewController.h
//  SwiftSupportLibDemo
//
//  Created by David Proskin on 9/20/18.
//  Copyright © 2018 Shutterfly, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) NSDate *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

