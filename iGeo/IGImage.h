//
//  IGImage.h
//  iGeo
//
//  Created by Xiao Jiang on 11/16/14.
//  Copyright (c) 2014 Sumeet Ungratwar. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IGUser.h"

@interface IGImage : NSObject

@property (nonatomic, strong) NSURL *imageURL;
@property (nonatomic) NSInteger imageWidth;
@property (nonatomic) NSInteger imageHeight;
@property (nonatomic, strong) NSString *caption;
@property (nonatomic) NSInteger createdTime;
@property (nonatomic, strong) IGUser *user;

- (IGImage *) initWithDictionary:(NSDictionary *)dict;

+ (NSArray *) igImagesWithArray:(NSArray *)array;

@end
