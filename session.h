//
//  session.h
//  projectVersion1
//
//  Created by JETS on 4/3/16.
//  Copyright (c) 2016 JETS. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface session : NSObject
@property int idSession;
@property int status;
@property NSString *name;
@property NSString *location;
@property NSString *type;
@property NSString *description;
@property BOOL like;
@property NSDate *startDate;
@property NSDate *endDate;
@property NSMutableArray *speakers;
@property NSString *tag;

@end
