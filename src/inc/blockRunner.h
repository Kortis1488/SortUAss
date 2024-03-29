#include "threadNodeManager.h"

enum class blockRunnerType{
    THREAD_NODE_CREATOR,
    NODE_CREATOR
};

struct panelData{
    fsb::path* dir;
    fsb::path* subBir;
    std::vector<rule> * rules;
};

class blockRunnerData{
    public:
        static panelData dataBR;
        static void setData(fsb::path* dir,std::vector<rule>* rules);
        static void setSubDir(fsb::path* subBir);
};


class blockRunner{
    public:
        blockRunner(blockRunnerType brt, controlThreadPanel* manager);
        blockRunnerType getType();
        virtual void runBR();
        blockRunnerData* brdp;
    protected:
        blockRunnerType brt;
        controlThreadPanel* manager;
};

// class ruleCreator: public blockRunner{
//     using blockRunner::blockRunner;
//     public:
//         void runBR() override;
// };

class nodeCreator: public blockRunner{
    public:
        nodeCreator(controlThreadPanel* manager);
        void runBR() override;
};

class threadNodeCreator: public blockRunner{
    public:
        threadNodeCreator(controlThreadPanel* manager);
        void runBR() override;
};

class getNodeDir: public blockRunner{
    public:
        getNodeDir(controlThreadPanel* manager);
        void runBR() override;
};