#include "Node.h"

Node::Node(std::string path){
    dir.replace_filename(path);
    scan(&files, &dir);
}

void Node::addFile(std::string pathName){
    files.push_back(fsb::path(pathName));
}
void Node::printFiles(){
    std::vector<fsb::path>::iterator iter = files.begin();
    while(iter!=files.end()){
        std::cout << iter->filename().generic_string() << std::endl;  
        iter++;  
    }
}
void Node::scan(std::vector<fsb::path>* files, fsb::path* dir){
    scanner.scanArea(files, dir);
} 
// bool Node::removeFile(std::string path){
//     std::vector<file>::iterator iter = files.begin();
//     while(iter!=files.end()){
        
//     }
//     return false;
// }