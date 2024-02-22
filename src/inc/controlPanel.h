#include "blockRunner.h"

class controlPanel{
    private:
        controlThreadPanel manager;
        threadNodeCreator tNC;
    public:
        controlPanel();
        void createThreadNode(std::string path);
};