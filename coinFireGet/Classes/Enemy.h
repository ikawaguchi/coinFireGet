//
//  Enemy.h
//  coinFireGet
//
//  Created by 川口功 on 2014/07/05.
//
//

#ifndef __coinFireGet__Enemy__
#define __coinFireGet__Enemy__

#include <iostream>
#include "cocos2d.h"
#include "EnemyObjects.h"


class Enemy
{
public:
    void createEnemy();
    
private:
    
    cocos2d::Vector<EnemyObjects> Enemies;

    
    
    
    
};

#endif /* defined(__coinFireGet__Enemy__) */
