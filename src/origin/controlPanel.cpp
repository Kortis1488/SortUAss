#include "../inc/controlPanel.h"

using cp = controlPanel;
using typeB = blockRunnerType;

cp::controlPanel(){
    blocks.push_back(threadNodeCreator(typeB::RC, &manager));
}

void cp::setPath(fsb::path *dir){
    blockRD.dir = dir;
}

void cp::setRule(std::vector<rule> *rules){
    blockRD.rules = rules;
}

bool cp::runBlock(blockRunnerType brt){
    bool report = 0;
    for(blockRunner br :blocks){
        if(br.getType() == brt){
            br.runBR(&blockRD);
            report = 1;
            break;
        }
    }
    return report;
}