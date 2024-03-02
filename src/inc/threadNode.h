#include "Node.h" 
class threadNode{
     private:
        std::vector<Node> nodes;
     public:
        threadNode(fsb::path *path);
        bool createNode(fsb::path *path);
        bool deleteNode(fsb::path *path);
        std::vector<Node>& getThread();
        Node getNode(fsb::path *path);
        bool haveOnlyOneElement();
};

//этот класс чтобы управлять звеньями