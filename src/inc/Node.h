#include <string>
#include <filesystem>
#include <boost/filesystem/operations.hpp>
#include <iostream>

#include "scanner.h"

namespace fsb = boost::filesystem;


struct rule{
            std::string directory;
            std::string extension;
            rule(std::string dir, std::string ext){
                this->directory = dir;
                this->extension = ext;
            }
        };



class Node{
    private:
        //информация о ноде и его подконтрольных
        fsb::path dir;
        //правила
        std::vector<rule> rules;

    public:
        Node(fsb::path *path); 
        Node();
        fsb::path*  getDir();

        //информация о правилах нода
        bool addRule(std::string dir, std::string ext); //добавить правила сортировки
        void getRule(); //узнать какие правила хранятся в node
        
        // TODO: добавить возможность удалять правила
        bool removeRule();
};

