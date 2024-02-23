#include "blockRunner.h"

class controlPanel{
    private:
        controlThreadPanel manager;
        blockRunnerData blockRD;
        std::vector<blockRunner> blocks;
    public:
        controlPanel();

        void setRule(std::vector<rule> *rules);
        void setPath(fsb::path *dir);
        
        bool runBlock(blockRunnerType brt);
};