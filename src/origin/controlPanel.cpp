#include "../inc/controlPanel.h"

using cp = controlPanel;
using typeB = blockRunnerType;
using cm = controlManager;


controlThreadPanel* cm::getMngrAdrs(){
            return &manager;
}


cp::controlPanel(){ 
    controlThreadPanel* manager;
    manager = cm.getMngrAdrs();
    blocks.push_back(new threadNodeCreator(manager));
}

bool cp::runBlock(blockRunnerType brt){
    bool report = false;
    controlThreadPanel* manager;
    manager = cm.getMngrAdrs();
    
    for(blockRunner *br :blocks){
        if(br->getType() == brt){
            br->runBR();
            report = true;
            break;
        }
    }

    return report;
}

cp::~controlPanel(){
    for (blockRunner* ptr : blocks) {
    delete ptr;
}
}