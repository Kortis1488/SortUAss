#include "../inc/Node.h"

Node::Node(fsb::path *path){
    dir = *path;
    fill();
}

//возвращает набор файлов в данной дирректории
std::vector<fsb::path>& Node::getFiles(){
    return files;
}

//возвращает директорию которую отслеживает нод
fsb::path Node::getDir(){
    return dir;
}

//загрузить файлы
void Node::fill(){
    scanner.scanArea(&dir, &files);
} 

//добавить правила сортировки
bool Node::addRule(std::string dir, std::string ext){
    rules.push_back(rule(dir,ext));
    return true;
}
//узнать какие правила хранятся в node**
//** - в будущем будет выдавать список правил
void Node::getRule(){
    for(rule r : rules){
        std::cout << r.directory << " " << r.extension << std::endl; 
    }
}

//проверка доб. правил*
bool Node::checkAppendedRule(std::string dir, std::string ext){
    bool add = true;
    // if(!rules.empty()){
    //     add = false;
    // }
    return add;
}
//* - возможно вынесится в отдельный класс
//** - будущая версия будет делать что-то иначе

/*когда пользователь пытается добавить правило он должен ввести два значение
1) директорию куда будет отсортировавываться файлы
2) и расширение файлов

что нужно проверить
1) 
    а) существет ли такая дирректория
    б) находится ли она ниже директории который управляет Node
    в) директория ли это
2)
*/