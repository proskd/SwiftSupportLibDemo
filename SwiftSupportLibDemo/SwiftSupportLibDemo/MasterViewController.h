//
//  MasterViewController.h
//  SwiftSupportLibDemo
//
//  Created by David Proskin on 9/20/18.
//  Copyright © 2018 Shutterfly, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;


@end

