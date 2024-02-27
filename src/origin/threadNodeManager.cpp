#include "../inc/threadNodeManager.h"

void controlThreadPanel::createThreadNode(std::string path){
    threadNodes.push_back(threadNode(path));
}