//
//  MyRequestsTableViewCell.h
//  BookShare
//
//  Created by YILUN XU on 7/19/17.
//  Copyright © 2017 CarnegieMellonUniversity. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MyRequestsTableViewCell : UITableViewCell
@property (strong, nonatomic) IBOutlet UIImageView *myRequestsImageView;
@property (strong, nonatomic) IBOutlet UILabel *myRequestsBookTitle;
@property (strong, nonatomic) IBOutlet UILabel *myRequestsToUsername;
@property (strong, nonatomic) IBOutlet UILabel *myRequestsStatus;

@end
