#include "../inc/Node.h"

Node::Node(fsb::path *path){
    dir = *path;
}


//возвращает директорию которую отслеживает нод
fsb::path* Node::getDir(){
    return &dir;
}



//добавить правила сортировки
bool Node::addRule(std::string dir, std::string ext){
    rules.push_back(rule(dir,ext));
    return true;
}
//узнать какие правила хранятся в node

void Node::getRule(){
    for(rule r : rules){
        std::cout << r.directory << " " << r.extension << std::endl; 
    }
}

