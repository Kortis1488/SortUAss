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
        std::vector<fsb::path> files; //коллекция файлов в дирректории
        fsb::path dir; // корневой путь нода

        //правила
        std::vector<rule> rules; // набор правил
        void fill(); // загрузка файлов
        bool checkAppendedRule(std::string dir, std::string ext); //проверка доб. правил
        bool checkAvailabilityRule(std::string ext);//TODO


        //объекты-интрументы внешних классов для работы с информацией о файлах и правилами
        Scanner scanner; // объект сканера

    public:
        //информация о ноде и его подконтрольных
        Node(std::string pathName); 
        fsb::path getDir(); //дать директорию которую отслеживает нод
        std::vector<fsb::path>& getFiles(); //дать набор файлов в данной дирректории

        //правила
        bool addRule(std::string dir, std::string ext); //добавить правила сортировки
        void getRule(); //узнать какие правила хранятся в node
        bool removeRule();//TODO
};



//that class store a files of the directory, which it belongs
//that class can refill itself
//that class also store rulse of the directory sort
//it can give the collection of files for output or manipulation
//but the main purpose of this is to store files

//этот класс чтобы хранить инфу о файлах