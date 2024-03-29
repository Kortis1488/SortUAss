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

class fileHandler{

};

class ruleHandler{

};

class fileFiller{
    
};

class ruleEditor{

};

class Node{
    private:
        //информация о ноде и его подконтрольных
        fsb::path dir; // корневой путь нода
        std::vector<fsb::path> files; //коллекция файлов в дирректории

        //правила
        std::vector<rule> rules; // набор правил 
        void fill(); // загрузка файлов 
        bool checkAppendedRule(std::string dir, std::string ext); //проверка доб. правил
        bool checkAvailabilityRule(std::string ext);//TODO


        //объекты-интрументы внешних классов для работы с информацией о файлах и правилами
        Scanner scanner; // объект сканера

    public:
        //информация о ноде и его подконтрольных
        Node(fsb::path *path); 
        Node();
        fsb::path getDir(); //дать директорию которую отслеживает нод
        std::vector<fsb::path>& getFiles(); //дать набор файлов в данной дирректории

        //правила
        bool addRule(std::string dir, std::string ext); //добавить правила сортировки
        void getRule(); //узнать какие правила хранятся в node
        bool removeRule();//TODO
};