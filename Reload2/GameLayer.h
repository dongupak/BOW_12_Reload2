//
//  GameLayer.h
//  Reload2
//
//  Created by Mobile-X on 13. 6. 27..
//  Copyright 2013년 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"
#import "SimpleAudioEngine.h"

@interface GameLayer : CCLayer {
    int bulletCount;
    BOOL shootAvailable;
    
    CCAnimate *sitAnimate;
    CCAnimate *smokeAnimate;
    CCAnimate *tailAnimate;
    CCSprite *gunSmoke;
    CCArray *birdArray;
    CCArray *sitPositions;
    
    CCSprite *ptBulletSprite;
    CCSprite *ptReloadSprite;
    CCProgressTimer *ptReload;
    CCProgressTimer *ptBullet;
}

+(CCScene *) scene;
-(CGPoint)getStartPosition;

@end

