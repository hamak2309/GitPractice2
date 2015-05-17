//
//  DetailViewController.h
//  GitProject2
//
//  Created by kuniaki hamamoto on 2015/05/17.
//  Copyright (c) 2015年 mycompany. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

