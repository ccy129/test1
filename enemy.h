#ifndef PLAYER_H
#define PLAYER_H
#include "rpgobj.h"

class Enemy: public RPGObj
{
public:
    Enemy(){}
    ~Enemy(){}
    void move(int direction, int steps=1);
        //direction =1,2,3,4 for иообвСср
};

#endif // PLAYER_H
