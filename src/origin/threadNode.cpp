#include "../inc/threadNode.h"

using tn = threadNode;

tn::threadNode(fsb::path *path){
    createNode(path);
}

bool tn::createNode(fsb::path *path){
    bool isDir = false;
    
    if(fsb::exists(*path)&&fsb::is_directory(*path)){
        nodes.push_back(Node(path));
        isDir = true;
    }

    return isDir;
}

bool tn::haveOnlyOneElement(){
    if(nodes.size()==1) return false;
    return true;
}

bool tn::deleteNode(fsb::path *path){
    return false;
}


std::vector<Node>& tn::getThread(){
    return nodes;
}

Node tn::getNode(fsb::path *path){
    for (Node x : nodes){
        if(x.getDir().generic_string() == *path) return x;
    }
}