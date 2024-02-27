#include "threadNodeManager.h"

enum class blockRunnerType{
    THREAD_NODE_CREATOR
};

struct data{
    fsb::path* dir;
    std::vector<rule>* rules;
};

class blockRunnerData{
    public:
        data dataBR;
        void setData(fsb::path* dir,std::vector<rule>* rules);
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

// class nodeCreator: public blockRunner{
//     using blockRunner::blockRunner;
//     public:
//         void runBR() override;
// };

class threadNodeCreator: public blockRunner{
    public:
    threadNodeCreator(controlThreadPanel* manager);
    void runBR() override;
};