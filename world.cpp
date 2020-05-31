#include "world.h"
#include "icon.h"
#include "rpgobj.h"
#include <QMediaPlayer>
#include<iostream>
using namespace std;

World::~World(){
    delete this->_player;
}

void World::initWorld(string mapFile){
    //TODO 下面的内容应该改为从地图文件装载
    //player 5 5
    this->_player->initObj("player");
    this->_player->setPosX(10);
    this->_player->setPosY(10);

    RPGObj *p1 = new RPGObj;
    p1->initObj("stone");
    p1->setPosX(3);
    p1->setPosY(3);

    RPGObj *p2 = new RPGObj;
    p2->initObj("stone");
    p2->setPosX(6);
    p2->setPosY(5);

    RPGObj *p3 = new Fruit;
    p3->initObj("fruit");
    p3->setPosX(12);
    p3->setPosY(1);

    RPGObj *p4 = new Fruit;
    p4->initObj("fruit");
    p4->setPosX(12);
    p4->setPosY(2);

    RPGObj *p5 = new Fruit;
    p5->initObj("fruit");
    p5->setPosX(12);
    p5->setPosY(3);

    RPGObj *p6 = new Fruit;
    p6->initObj("fruit");
    p6->setPosX(12);
    p6->setPosY(4);

    RPGObj *p7 = new Fruit;
    p7->initObj("fruit");
    p7->setPosX(13);
    p7->setPosY(4);

    RPGObj *p8 = new Fruit;
    p8->initObj("fruit");
    p8->setPosX(14);
    p8->setPosY(4);

    RPGObj *p9 = new Fruit;
    p9->initObj("fruit");
    p9->setPosX(15);
    p9->setPosY(4);

    RPGObj *p10 = new Fruit;
    p10->initObj("fruit");
    p10->setPosX(16);
    p10->setPosY(4);

    RPGObj *p11 = new Fruit;
    p11->initObj("fruit");
    p11->setPosX(17);
    p11->setPosY(4);

    RPGObj *p12 = new Fruit;
    p12->initObj("fruit");
    p12->setPosX(17);
    p12->setPosY(3);

    RPGObj *p13 = new Fruit;
    p13->initObj("fruit");
    p13->setPosX(17);
    p13->setPosY(2);

    RPGObj *p14 = new Fruit;
    p14->initObj("fruit");
    p14->setPosX(17);
    p14->setPosY(1);

    RPGObj *p15 = new RPGObj;
    p15->initObj("bole");
    p15->setPosX(7);
    p15->setPosY(9);

    RPGObj *p16 = new RPGObj;
    p16->initObj("house");
    p16->setPosX(13);
    p16->setPosY(1);

    this->_objs.push_back(p1);
    this->_objs.push_back(p2);
    this->_objs.push_back(p3);
    this->_objs.push_back(p4);
    this->_objs.push_back(p5);
    this->_objs.push_back(p6);
    this->_objs.push_back(p7);
    this->_objs.push_back(p8);
    this->_objs.push_back(p9);
    this->_objs.push_back(p10);
    this->_objs.push_back(p11);
    this->_objs.push_back(p12);
    this->_objs.push_back(p13);
    this->_objs.push_back(p14);
    this->_objs.push_back(p15);
    this->_objs.push_back(p16);


    QMediaPlayer * player = new QMediaPlayer;
    player->setMedia(QUrl("qrc:/sounds/hdl.mp3"));
    player->setVolume(30);
    player->play();


}


void World::show(QPainter * painter){
    int n = this->_objs.size();
    for (int i=0;i<n;i++){
        this->_objs[i]->show(painter);
    }
    this->_player->show(painter);



}

void World::eraseObj(int x, int y){
    vector<RPGObj*>::iterator it;
    it = _objs.begin();
    while(it!=_objs.end()){
        int flag1 = ((*it)->getObjType()!="stone"); //不是石头
        int flag2 = ((*it)->getPosX() == x) && ((*it)->getPosY()==y);//位置重叠

        if (flag1 && flag2){
            cout<<(*it)->getObjType()<<endl;
            (*it)->onErase();
            delete (*it);
            it = this->_objs.erase(it);
            break;
         }
        else{
            it++;
        }
    }

}

void World::handlePlayerMove(int direction, int steps){
    int x =  this->_player->getNextX(direction);
    int y = this->_player->getNextY(direction);
    this->eraseObj(x,y);
    this->_player->move(direction, steps);
}

