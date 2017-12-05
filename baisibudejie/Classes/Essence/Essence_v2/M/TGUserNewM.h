//
//  TGUserNewM.h
//  baisibudejie
//
//  Created by targetcloud on 2017/5/30.
//  Copyright © 2017年 targetcloud. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TGUserNewM : NSObject

@property (nonatomic, copy) NSString *name;//yyy
@property (nonatomic, copy) NSString *username;
@property (nonatomic, copy) NSString *uid;//yyy
@property (nonatomic, copy) NSString *header;//0 yyy
@property (nonatomic, copy) NSString *sex;//yyy
@property (nonatomic, assign) BOOL is_vip;//yyy
@property (nonatomic, assign) BOOL is_v;//yyy
@property (nonatomic, copy) NSString *room_url;//yyy
@property (nonatomic, copy) NSString *room_name;//yyy
@property (nonatomic, copy) NSString *room_role;//yyy
@property (nonatomic, copy) NSString *room_icon;//yyy

@property (nonatomic, copy) NSString *ID;  //这个是后加的 为啥?
@property (nonatomic, assign) NSInteger total_cmt_like_count;  //这个是后加的 为啥?
@property (nonatomic, copy) NSString *profile_image;  //这个是后加的 为啥?

//@property (nonatomic, copy) NSString *qq_uid; //yyyyy 这些是缀余的
//@property (nonatomic, copy) NSString *weibo_uid;
//@property (nonatomic, copy) NSString *personal_page;
//@property (nonatomic, copy) NSString *qzone_uid;
@end
