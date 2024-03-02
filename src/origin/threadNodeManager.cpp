#include "../inc/threadNodeManager.h"

void controlThreadPanel::createThreadNode(fsb::path *path){
    threadNodes.push_back(threadNode(path));
}

std::vector<threadNode>* controlThreadPanel::getThreadNodes(){
    return &threadNodes;
}