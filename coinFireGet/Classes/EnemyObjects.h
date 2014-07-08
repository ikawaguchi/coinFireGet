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



class EnemyObjects
{
public:
    
    void setEnemySize(cocos2d::Size size){
        enemySize = size;
    }
    void setEnemyImage(std::string imageName){
        enemyImage = cocos2d::Sprite::create(imageName);
    }
    
    
private:

    cocos2d::Size enemySize;
    cocos2d::Sprite *enemyImage;
    
};

#endif /* defined(__coinFireGet__EnemyObjects__) */
