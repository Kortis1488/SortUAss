#include "Node.h"
#include <map> 

class level{
    private:
        std::map<fsb::path, Node> lvl;
    public:
        level();
        
        bool addNode(fsb::path& dir);
        bool deleteNode(fsb::path& dir);

        std::map<fsb::path, Node>* getNodes();
        Node* getNode(fsb::path& dir);
};

// TODO: проработать механнизм добавления нодов
// TODO: придумать по какому признаку и как сортировать NODE