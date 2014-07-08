//
//  Enemy.cpp
//  coinFireGet
//
//  Created by 川口功 on 2014/07/05.
//
//

#include "Enemy.h"

using namespace std;
using namespace cocos2d;

void Enemy::createEnemy(){
    srand((unsigned int)time(NULL));
    
    EnemyObjects enemy;
    stringstream fileName;
    
    
    
    enemy.setEnemyImage("enemy001.png");
    
    Enemies.pushBack(enemy);
}
