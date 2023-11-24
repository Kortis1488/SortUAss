#include "Node.h"
#include <iostream>
void Node::addFile(std::string path){
    files.push_back(file(path));
}
void Node::printFiles(){
    std::vector<file>::iterator iter = files.begin();
    while(iter!=files.end()){
        std::cout << iter->getPath() << std::endl;  
        iter++;  
    }
} 
// bool Node::removeFile(std::string path){
//     std::vector<file>::iterator iter = files.begin();
//     while(iter!=files.end()){
        
//     }
//     return false;
// }