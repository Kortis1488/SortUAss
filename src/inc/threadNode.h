#include "level.h" 
class threadNode{
     private:
        std::vector<level> lvl;
     public:
        threadNode(fsb::path *path);
        bool addLvl(fsb::path *path);
        bool deleteLvl(fsb::path *path);
};

//этот класс чтобы управлять звеньями