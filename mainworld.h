#ifndef WORLD_H
#define WORLD_H
#include "fruit.h"
#include "rpgobj.h"
#include <vector>
#include <string>
#include <QPainter>
#include "enemy.h"

class World
{
public:
    World(){this->_enemy1 = new Enemy;
           this->_enemy2 = new Enemy;}
    ~World();
    void initWorld(string mapFile);
        //输入的文件中定义了初始状态下游戏世界有哪些对象，出生点在哪
    void show(QPainter * painter);
        //显示游戏世界所有对象
    void handlePlayerMove1(int direction, int steps);
    void handlePlayerMove2(int direction, int steps);

    void eraseObj(int x, int y);

private:
    vector<RPGObj *> _objs;
    Enemy * _enemy1;
    Enemy * _enemy2;
};

#endif // WORLD_H
