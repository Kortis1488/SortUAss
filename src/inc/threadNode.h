#include "level.h" 
class threadNode{
     private:
        std::vector<level> lvl;
     public:
        threadNode(fsb::path *path);
        bool addLvl();
        bool deleteLvl(int number);
        bool getLvl(int number);
};
// TODO: придумать как сортировать LVL
//этот класс чтобы управлять звеньями