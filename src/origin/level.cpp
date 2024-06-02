#include "../inc/level.h"



bool level::addNode(fsb::path& dir){
        lvl[dir] = Node(&dir);
}

bool level::deleteNode(fsb::path& dir){
    lvl.erase(dir);
}
        
std::map<fsb::path, Node>* level::getNodes(){
    return &lvl;
}

Node* level::getNode(fsb::path& dir){
    return &lvl[dir];
}
