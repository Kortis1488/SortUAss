#include "../inc/threadNode.h"

using tn = threadNode;

bool tn::addLvl(){
    lvl.push_back(level());
    return false;
}

tn::threadNode(fsb::path *path){
    addLvl();
    lvl[0].addNode(path);   
}







