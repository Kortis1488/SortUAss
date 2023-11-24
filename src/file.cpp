#include "file.h"

file::file(std::string path){
    this->path = path;
}

void file::setPath(std::string path){
    this->path = path;
}  
std::string file::getPath(){
    return this->path;
}