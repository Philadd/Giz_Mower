//
//  WorktimeCell.h
//  MOWOX
//
//  Created by Mac on 2017/12/11.
//  Copyright © 2017年 yusz. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WorktimeCell : UITableViewCell
@property (strong, nonatomic) UILabel *weekLabel;
@property (strong, nonatomic) UIButton *timeBtn;
@property (strong, nonatomic) UIButton *hoursBtn;
@property (strong, nonatomic) UITextField *startHourTF;
@property (strong, nonatomic) UITextField *startMinutesTF;
@property (strong, nonatomic) UITextField *worksHoursTF;
@property (strong, nonatomic) UITextField *worksMinutesTF;
@end
