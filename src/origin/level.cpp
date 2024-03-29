#include "../inc/level.h"

levelNodeUnit::levelNodeUnit(std::vector<Node>* lvl){
    this->lvl = lvl;
}

levelNodeSearcher::levelNodeSearcher(std::vector<Node>* lvl):levelNodeUnit(lvl){}

levelNodeEditor::levelNodeEditor(std::vector<Node>* lvl):levelNodeUnit(lvl){}

Node* levelNodeSearcher::searchNode(fsb::path* dir){
    for(Node node : *lvl){
        if(node.getDir() == *dir) return &node;
    }
    return nullptr;
}

void levelNodeEditor::addNode(fsb::path* dir){
    lvl->push_back(Node(dir));
}

void levelNodeEditor::deleteNode(fsb::path* dir){
    iterator iter = lvl->cbegin();
    for(Node node : *lvl){
        if(node.getDir() == *dir) break;
        iter++;
    }
    lvl->erase(iter);
}

level::level():
lNE(&lvl),
lNS(&lvl)
{}
