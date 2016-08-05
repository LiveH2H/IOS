//
//  H2HLaunchParamsServerConfig.h
//  H2H
//
//  Created by Anton Ostrovskii on 6/6/16.
//  Copyright © 2016 Sagar Kasture. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface H2HLaunchParamsServerConfig : NSObject

@property (nonatomic, copy) NSString *countries;
@property (nonatomic, copy) NSArray *stun_servers;
@property (nonatomic, copy) NSArray *turn_servers;

@end