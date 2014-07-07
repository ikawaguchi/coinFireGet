//
//  EnemyObjects.h
//  coinFireGet
//
//  Created by 川口功 on 2014/07/05.
//
//

#ifndef __coinFireGet__EnemyObjects__
#define __coinFireGet__EnemyObjects__

#include <iostream>
#include <cocos2d.h>

using namespace std;
using namespace cocos2d;


class EnemyObjects
{
#pragma mark - public
public:
    
#pragma mark - Setter
    void setEnemySize(Size size){
        enemySize = size;
    }
    void setEnemyImage(std::string imageName){
        enemyImage = Sprite::create(imageName);
    }
    
    
#pragma mark - private
private:

    cocos2d::Size enemySize;
    cocos2d::Sprite *enemyImage;
    
};

#endif /* defined(__coinFireGet__EnemyObjects__) */
