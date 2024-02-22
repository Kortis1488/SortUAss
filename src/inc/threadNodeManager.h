#include "threadNode.h"
class controlThreadPanel{
        private:
                std::vector<threadNode> threadNodes; 
        public:
                void createThreadNode(std::string path);
                void deleteThreadNode(std::string path);
                std::vector<Node>& getThreadNodes();
                bool isEmpty();
};

//этот класс чтобы управлять цепями