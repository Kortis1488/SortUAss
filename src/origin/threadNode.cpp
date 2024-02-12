#include "../inc/threadNode.h"

//namespace th = threadNode;

bool threadNode::createNode(std::string pathS){
    
    bool isDir = false;
    
    fsb::path *path = new fsb::path(pathS);
    if(fsb::exists(*path)&&fsb::is_directory(*path)){
        nodes.push_back(pathS);
        isDir = true;
    }
    delete path;

    return isDir;
}
bool threadNode::deleteNode(std::string path){
    return false;
}
std::vector<Node>& threadNode::getThread(){
    return nodes;
}
Node threadNode::getNode(std::string path){
    for (Node x : nodes){
        
    }
}