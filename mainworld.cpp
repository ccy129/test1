#include "mainworld.h"
#include "icon.h"
#include "rpgobj.h"
#include <QMediaPlayer>
#include<iostream>
using namespace std;

World::~World(){
    delete this->_enemy1;
    delete this->_enemy2;
}

void World::initWorld(string mapFile){
    //TODO 下面的内容应该改为从地图文件装载
    //player 5 5
    this->_enemy1->initObj("enemy1");
    this->_enemy1->setPosX(5);
    this->_enemy1->setPosY(6);

    this->_enemy2->initObj("enemy2");
    this->_enemy2->setPosX(1);
    this->_enemy2->setPosY(8);

    RPGObj *p1 = new RPGObj;
    p1->initObj("stone");
    p1->setPosX(7);
    p1->setPosY(4);

    RPGObj *p2 = new RPGObj;
    p2->initObj("stone");
    p2->setPosX(8);
    p2->setPosY(8);

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

    RPGObj *p17 = new RPGObj;
    p17->initObj("tree");
    p17->setPosX(1);
    p17->setPosY(1);

    RPGObj *p18 = new RPGObj;
    p18->initObj("tree");
    p18->setPosX(3);
    p18->setPosY(1);

    RPGObj *p19 = new RPGObj;
    p19->initObj("tree");
    p19->setPosX(5);
    p19->setPosY(1);

    RPGObj *p20 = new RPGObj;
    p20->initObj("tree");
    p20->setPosX(7);
    p20->setPosY(1);

    RPGObj *p21 = new RPGObj;
    p21->initObj("tree");
    p21->setPosX(9);
    p21->setPosY(1);

    RPGObj *p22 = new RPGObj;
    p22->initObj("tree");
    p22->setPosX(10);
    p22->setPosY(1);

    RPGObj *p23 = new RPGObj;
    p23->initObj("tree");
    p23->setPosX(1);
    p23->setPosY(3);

    RPGObj *p24 = new RPGObj;
    p24->initObj("tree");
    p24->setPosX(1);
    p24->setPosY(5);

    RPGObj *p25 = new RPGObj;
    p25->initObj("tree");
    p25->setPosX(1);
    p25->setPosY(7);

    RPGObj *p26 = new RPGObj;
    p26->initObj("tree");
    p26->setPosX(1);
    p26->setPosY(10);

    RPGObj *p27 = new RPGObj;
    p27->initObj("tree");
    p27->setPosX(3);
    p27->setPosY(10);

    RPGObj *p28 = new RPGObj;
    p28->initObj("tree");
    p28->setPosX(5);
    p28->setPosY(10);

    RPGObj *p29 = new RPGObj;
    p29->initObj("tree");
    p29->setPosX(7);
    p29->setPosY(10);

    RPGObj *p30 = new RPGObj;
    p30->initObj("tree");
    p30->setPosX(9);
    p30->setPosY(10);

    RPGObj *p31 = new RPGObj;
    p31->initObj("tree");
    p31->setPosX(11);
    p31->setPosY(10);

    RPGObj *p32 = new RPGObj;
    p32->initObj("tree");
    p32->setPosX(13);
    p32->setPosY(10);

    RPGObj *p33 = new RPGObj;
    p33->initObj("tree");
    p33->setPosX(13);
    p33->setPosY(10);

    RPGObj *p34 = new RPGObj;
    p34->initObj("tree");
    p34->setPosX(15);
    p34->setPosY(10);

    RPGObj *p35 = new RPGObj;
    p35->initObj("tree");
    p35->setPosX(16);
    p35->setPosY(10);

    RPGObj *p36 = new RPGObj;
    p36->initObj("tree");
    p36->setPosX(16);
    p36->setPosY(8);

    RPGObj *p37 = new RPGObj;
    p37->initObj("tree");
    p37->setPosX(16);
    p37->setPosY(5);

    RPGObj *p38 = new RPGObj;
    p38->initObj("tree");
    p38->setPosX(3);
    p38->setPosY(3);

    RPGObj *p39 = new RPGObj;
    p39->initObj("tree");
    p39->setPosX(3);
    p39->setPosY(5);

    RPGObj *p40 = new RPGObj;
    p40->initObj("tree");
    p40->setPosX(3);
    p40->setPosY(7);

    RPGObj *p41 = new RPGObj;
    p41->initObj("guideboard");
    p41->setPosX(7);
    p41->setPosY(8);

    RPGObj *p42 = new RPGObj;
    p42->initObj("corn");
    p42->setPosX(9);
    p42->setPosY(8);

    RPGObj *p43 = new RPGObj;
    p43->initObj("path1");
    p43->setPosX(1);
    p43->setPosY(9);

    RPGObj *p44 = new RPGObj;
    p44->initObj("path1");
    p44->setPosX(4);
    p44->setPosY(9);

    RPGObj *p45 = new RPGObj;
    p45->initObj("path1");
    p45->setPosX(7);
    p45->setPosY(7);

    RPGObj *p46 = new RPGObj;
    p46->initObj("path1");
    p46->setPosX(10);
    p46->setPosY(7);

    RPGObj *p47 = new RPGObj;
    p47->initObj("path1");
    p47->setPosX(13);
    p47->setPosY(7);

    RPGObj *p48 = new RPGObj;
    p48->initObj("path1");
    p48->setPosX(15);
    p48->setPosY(7);

    RPGObj *p49 = new RPGObj;
    p49->initObj("path1");
    p49->setPosX(7);
    p49->setPosY(3);

    RPGObj *p50 = new RPGObj;
    p50->initObj("path1");
    p50->setPosX(9);
    p50->setPosY(3);

    RPGObj *p51 = new RPGObj;
    p51->initObj("path2");
    p51->setPosX(5);
    p51->setPosY(3);

    RPGObj *p52 = new RPGObj;
    p52->initObj("path2");
    p52->setPosX(5);
    p52->setPosY(6);

    RPGObj *p53 = new RPGObj;
    p53->initObj("path2");
    p53->setPosX(6);
    p53->setPosY(3);

    RPGObj *p54 = new RPGObj;
    p54->initObj("path2");
    p54->setPosX(6);
    p54->setPosY(6);

    RPGObj *p55 = new RPGObj;
    p55->initObj("path2");
    p55->setPosX(13);
    p55->setPosY(5);

    RPGObj *p56 = new RPGObj;
    p56->initObj("root");
    p56->setPosX(8);
    p56->setPosY(4);

    RPGObj *p57 = new RPGObj;
    p57->initObj("lamp");
    p57->setPosX(9);
    p57->setPosY(4);

    RPGObj *p58 = new RPGObj;
    p58->initObj("well");
    p58->setPosX(10);
    p58->setPosY(4);

    RPGObj *p59 = new RPGObj;
    p59->initObj("statue");
    p59->setPosX(12);
    p59->setPosY(5);

    RPGObj *p60 = new RPGObj;
    p60->initObj("statue");
    p60->setPosX(14);
    p60->setPosY(5);

    RPGObj *p61 = new RPGObj;
    p61->initObj("flower");
    p61->setPosX(15);
    p61->setPosY(5);

    RPGObj *p62 = new RPGObj;
    p62->initObj("flower");
    p62->setPosX(15);
    p62->setPosY(6);

    RPGObj *p63 = new RPGObj;
    p63->initObj("wood");
    p63->setPosX(13);
    p63->setPosY(8);

    RPGObj *p64 = new RPGObj;
    p64->initObj("basictower");
    p64->setPosX(7);
    p64->setPosY(5);

    RPGObj *p65 = new RPGObj;
    p65->initObj("basictower");
    p65->setPosX(14);
    p65->setPosY(8);

    RPGObj *p66 = new RPGObj;
    p66->initObj("wood");
    p66->setPosX(13);
    p66->setPosY(8);

    RPGObj *p67 = new RPGObj;
    p67->initObj("tree");
    p67->setPosX(11);
    p67->setPosY(8);

    RPGObj *p68 = new RPGObj;
    p68->initObj("fruit");
    p68->setPosX(5);
    p68->setPosY(3);

    RPGObj *p69 = new RPGObj;
    p69->initObj("fruit");
    p69->setPosX(6);
    p69->setPosY(6);

    RPGObj *p70 = new RPGObj;
    p70->initObj("fruit");
    p70->setPosX(9);
    p70->setPosY(3);

    RPGObj *p71 = new RPGObj;
    p71->initObj("fruit");
    p71->setPosX(13);
    p71->setPosY(7);

    RPGObj *p72 = new RPGObj;
    p72->initObj("fruit");
    p72->setPosX(17);
    p72->setPosY(7);


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
    this->_objs.push_back(p17);
    this->_objs.push_back(p18);
    this->_objs.push_back(p19);
    this->_objs.push_back(p20);
    this->_objs.push_back(p21);
    this->_objs.push_back(p22);
    this->_objs.push_back(p23);
    this->_objs.push_back(p24);
    this->_objs.push_back(p25);
    this->_objs.push_back(p26);
    this->_objs.push_back(p27);
    this->_objs.push_back(p28);
    this->_objs.push_back(p29);
    this->_objs.push_back(p30);
    this->_objs.push_back(p31);
    this->_objs.push_back(p32);
    this->_objs.push_back(p33);
    this->_objs.push_back(p34);
    this->_objs.push_back(p35);
    this->_objs.push_back(p36);
    this->_objs.push_back(p37);
    this->_objs.push_back(p38);
    this->_objs.push_back(p39);
    this->_objs.push_back(p40);
    this->_objs.push_back(p41);
    this->_objs.push_back(p42);
    this->_objs.push_back(p43);
    this->_objs.push_back(p44);
    this->_objs.push_back(p45);
    this->_objs.push_back(p46);
    this->_objs.push_back(p47);
    this->_objs.push_back(p48);
    this->_objs.push_back(p49);
    this->_objs.push_back(p50);
    this->_objs.push_back(p51);
    this->_objs.push_back(p52);
    this->_objs.push_back(p53);
    this->_objs.push_back(p54);
    this->_objs.push_back(p55);
    this->_objs.push_back(p56);
    this->_objs.push_back(p57);
    this->_objs.push_back(p58);
    this->_objs.push_back(p59);
    this->_objs.push_back(p60);
    this->_objs.push_back(p61);
    this->_objs.push_back(p62);
    this->_objs.push_back(p63);
    this->_objs.push_back(p64);
    this->_objs.push_back(p65);
    this->_objs.push_back(p66);
    this->_objs.push_back(p67);
    this->_objs.push_back(p68);
    this->_objs.push_back(p69);
    this->_objs.push_back(p70);
    this->_objs.push_back(p71);
    this->_objs.push_back(p72);


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
    this->_enemy1->show(painter);
    this->_enemy2->show(painter);



}

void World::eraseObj(int x, int y){
    vector<RPGObj*>::iterator it;
    it = _objs.begin();
    while(it!=_objs.end()){
        int flag1 = ((*it)->getObjType()=="fruit"); //是水果
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

void World::handlePlayerMove1(int direction, int steps){
    int x =  this->_enemy1->getNextX(direction);
    int y = this->_enemy1->getNextY(direction);
    this->eraseObj(x,y);
    this->_enemy1->move(direction, steps);
}
void World::handlePlayerMove2(int direction, int steps){
    int x =  this->_enemy2->getNextX(direction);
    int y = this->_enemy2->getNextY(direction);
    this->eraseObj(x,y);
    this->_enemy2->move(direction, steps);
}
