//
//  speakers.h
//  projectVersion1
//
//  Created by JETS on 4/3/16.
//  Copyright (c) 2016 JETS. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface speakers : NSObject
@property int idSpeakers;
@property BOOL gender;
@property NSString *imageUrl;
@property NSData *img;
@property NSString *middleName;
@property NSString *biography;
@property NSString *fristName;
@property NSString *lastName;
@property NSString *companyName;
@property NSString *title;
@property NSMutableArray *phonesOfSpeakers;
@property NSMutableArray *mobilesOfSpeakers;



@end
