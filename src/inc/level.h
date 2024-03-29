#include "Node.h"
using iterator = std::vector<Node>::const_iterator;

//классы манипуляторы уровнем
class levelNodeUnit{
    protected:
        std::vector<Node>* lvl;
    public:
        levelNodeUnit(std::vector<Node>* lvl);
};

class levelNodeSearcher: public levelNodeUnit{
    public:
        levelNodeSearcher(std::vector<Node>* lvl);
        Node* searchNode(fsb::path* dir);
        iterator searhIndexNode(fsb::path* dir);
};


class levelNodeEditor: public levelNodeUnit{
    public:
        levelNodeEditor(std::vector<Node>* lvl);
        void addNode(fsb::path* dir);
        void deleteNode(fsb::path* dir);    
};
////////////

class level{
    private:
        std::vector<Node> lvl;
        levelNodeEditor lNE;
        levelNodeSearcher lNS;
    public:
        level();
        bool addNode(fsb::path* dir);
        bool deleteNode(fsb::path* dir);
        Node* getNode(fsb::path* dir);
};

