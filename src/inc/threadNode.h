#include "Node.h" 
class threadNode{
     private:
        std::vector<Node> nodes;
     public:
        bool createNode(std::string path);
        bool deleteNode(std::string path);
        std::vector<Node>& getThread();
        Node getNode(std::string path);
};

//этот класс чтобы управлять звеньями