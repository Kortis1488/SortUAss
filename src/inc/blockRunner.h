#include "threadNodeManager.h"

enum class blockRunnerType{
    RC
};



struct blockRunnerData{
    fsb::path* dir;
    std::vector<rule>* rules;
};


class blockRunner{
    public:
        blockRunner(blockRunnerType brt, controlThreadPanel* manager);
        blockRunnerType getType();
        virtual void runBR(blockRunnerData* brd);
        blockRunnerData* brdp;
    protected:
        blockRunnerType brt;
        controlThreadPanel* manager;
};

// class ruleCreator: public blockRunner{
//     using blockRunner::blockRunner;
//     public:
//         void runBR(blockRunnerData* brd) override;
// };

// class nodeCreator: public blockRunner{
//     using blockRunner::blockRunner;
//     public:
//         void runBR(blockRunnerData* brd) override;
// };

class threadNodeCreator: public blockRunner{
    public:
    threadNodeCreator(blockRunnerType brt, controlThreadPanel* manager);
    void runBR(blockRunnerData* brd) override;
};