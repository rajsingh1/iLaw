//
//  BlockManager.h
//  PageViewDemo
//
//  Created by RajSingh on 27/09/15.
//  Copyright (c) 2015 Appcoda. All rights reserved.
//

//Changes done in git repo



#import <Foundation/Foundation.h>

@interface BlockManager : NSObject


typedef void (^BlockCompletion)(BOOL success,NSString *string,NSError *error);


@end
