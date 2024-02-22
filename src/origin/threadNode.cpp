#include "../inc/threadNode.h"

using tn = threadNode;

tn::threadNode(std::string path){
    createNode(path);
}

bool tn::createNode(std::string pathS){
    bool isDir = false;
    fsb::path *path = new fsb::path(pathS);
    if(fsb::exists(*path)&&fsb::is_directory(*path)){
        nodes.push_back(pathS);
        isDir = true;
    }
    delete path;

    return isDir;
}

bool tn::haveOnlyOneElement(){
    if(nodes.size()==1) return false;
    return true;
}

bool tn::deleteNode(std::string path){
    return false;
}


std::vector<Node>& tn::getThread(){
    return nodes;
}

Node tn::getNode(std::string path){
    for (Node x : nodes){
        
    }
}