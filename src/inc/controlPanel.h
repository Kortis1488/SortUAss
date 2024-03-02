#include "blockRunner.h"

class controlManager{
    private:
        controlThreadPanel manager;
    public:
        controlThreadPanel* getMngrAdrs();
};

class controlPanel{
    private:
        std::vector<blockRunner*> blocks;
        controlManager cm;
    public:
        controlPanel();
        bool runBlock(blockRunnerType brt);
        ~controlPanel();
};