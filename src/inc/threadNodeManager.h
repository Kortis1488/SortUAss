#include "threadNode.h"
class controlThreadPanel{
        private:
                std::vector<threadNode> threadNodes; 
        public:
                void createThreadNode(fsb::path *path);
                void deleteThreadNode(fsb::path *path);
                std::vector<threadNode>* getThreadNodes();
                threadNode& getThreadNodes(fsb::path *path);
                bool isEmpty();
};

//этот класс чтобы управлять цепями