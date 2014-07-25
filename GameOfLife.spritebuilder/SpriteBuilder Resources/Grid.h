//
//  Grid.h
//  GameOfLife
//
//  Created by Francois on 7/10/14.
//  Copyright (c) 2014 Apportable. All rights reserved.
//

#import "CCSprite.h"

@interface Grid : CCSprite

@property (nonatomic, assign) int totalAlive;
@property (nonatomic, assign) int generation;


- (id)evolveStep;

//update each Creature's neighbor count
[self countNeighbors];

//update each Creature's state
[self updateCreatures];

//update the generation so the label's text will display the correct generation
_generation++;

@end
