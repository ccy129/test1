#include "icon.h"
#include<iostream>
int ICON::GRID_SIZE = 32;


pair<string,ICON> pairArray[] =
{
    make_pair("enemy1",ICON("enemy1",1,13, 1, 2)),
    make_pair("enemy1",ICON("enemy2",1,13, 1, 2)),
    make_pair("stone",ICON("stone",4,9, 1, 1)),
    make_pair("fruit",ICON("fruit",10,13, 1, 1)),
    make_pair("bole",ICON("bole",4,8, 2, 1)),
    make_pair("path1",ICON("path1",3,3, 3, 1)),
    make_pair("path2",ICON("path2",7,0, 1, 3)),
    make_pair("house",ICON("house",8,7, 4, 3)),
    make_pair("tree",ICON("tree",6,6, 2, 2)),
    make_pair("basictower",ICON("basictower",0,2, 2, 2)),
    make_pair("guideboard",ICON("guideboard",0,5, 1, 1)),
    make_pair("corn",ICON("corn",11,11, 2, 2)),
    make_pair("root",ICON("root",2,5, 1, 1)),
    make_pair("well",ICON("well",2,10, 2, 3)),
    make_pair("lamp",ICON("lamp",4,10, 1, 3)),
    make_pair("statue",ICON("statue",8,12, 1, 2)),
    make_pair("flower",ICON("flower",6,11, 1, 1)),
    make_pair("wood",ICON("wood",2,13, 1, 2))
};

map<string,ICON> ICON::GAME_ICON_SET(pairArray,pairArray+sizeof(pairArray)/sizeof(pairArray[0]));


ICON::ICON(string name, int x, int y, int w, int h){
    this->typeName = name;
    this->srcX = x;
    this->srcY = y;
    this->width = w;
    this->height = h;
}

ICON ICON::findICON(string type){
    map<string,ICON>::iterator kv;
    kv = ICON::GAME_ICON_SET.find(type);
    if (kv==ICON::GAME_ICON_SET.end()){

       cout<<"Error: cannot find ICON"<<endl;
       return ICON();
    }
    else{
        return kv->second;
    }
}
