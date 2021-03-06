//
//  BDJPostCommentDataManagerPort.h
//  百思不得姐
//
//  Created by 付星 on 2016/11/29.
//    Copyright © 2016年 yizzuide. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "XFDataManagerPort.h"

@protocol BDJPostCommentDataManagerPort <XFDataManagerPort>

- (RACSignal *)grabPostCommentsWithPostID:(NSString *)ID;
- (RACSignal *)grabPostCommentsWithWithPostID:(NSString *)ID lastCommentID:(NSString *)lastCmtID atPage:(NSInteger)page;
@end
