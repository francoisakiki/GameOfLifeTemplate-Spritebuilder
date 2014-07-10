//
//  Grid.h
//  GameOfLife
//
//  Created by Francois on 7/10/14.
//  Copyright (c) 2014 Apportable. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Grid : CCSprite

@property (nonatomic, assign) int totalAlive;
@property (nonatomic, assign) int generation;

@end
