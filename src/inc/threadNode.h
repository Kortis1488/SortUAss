#include "Node.h" 
class threadNode{
     private:
        std::vector<Node> nodes;
     public:
        threadNode(std::string path);
        bool createNode(std::string path);
        bool deleteNode(std::string path);
        std::vector<Node>& getThread();
        Node getNode(std::string path);
        bool haveOnlyOneElement();
};

//этот класс чтобы управлять звеньями