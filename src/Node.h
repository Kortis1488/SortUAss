#include <string>
#include <filesystem>
#include <boost/filesystem/operations.hpp>
#include <iostream>
#include "scanner.h"

namespace fsb = boost::filesystem;

class Node{
    private:
        std::vector<fsb::path> files; 
        fsb::path dir;
        Scanner scanner;

    public:
        Node(std::string pathName);
        void scan(std::vector<fsb::path>* files, fsb::path* dir);
        void addFile(std::string path);
        void printFiles();
        //bool removeFile(std::string path);
        void fillNode(); 
};