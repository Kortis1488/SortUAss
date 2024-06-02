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

//этот класс чтобы управлять звеньями