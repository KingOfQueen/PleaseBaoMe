//
//  PBMTool.h
//  PleaseBaoMe
//
//  Created by why on 7/8/15.
//  Copyright (c) 2015 why. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HTTPServer.h"


@interface PBMTool : NSObject

+(void)start;

+(void)setDBFilePath:(NSString*)path;
@end
