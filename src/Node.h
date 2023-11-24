#include <string>
#include <filesystem>
#include <vector>
#include "file.h"
class Node{
    private:
        std::vector<file> files;    
    public:
        void addFile(std::string path);
        void printFiles();
        //bool removeFile(std::string path);
        
};