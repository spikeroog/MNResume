//
//  UserListTableViewCell.h
//  HCCF_下午茶计算
//
//  Created by Lyh on 2017/7/11.
//  Copyright © 2017年 xmhccf. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UserListTableViewCell : UITableViewCell

@property (nonatomic,copy) NSDictionary *dataSource;

+(instancetype)loadCell;

@end
