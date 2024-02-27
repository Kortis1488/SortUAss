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
    blocks.push_back(threadNodeCreator(manager));
}

bool cp::runBlock(blockRunnerType brt){
    bool report = 0;
    controlThreadPanel* manager;
    manager = cm.getMngrAdrs();
    threadNodeCreator tnc(manager);
    tnc.runBR();
    for(blockRunner br :blocks){
        if(br.getType() == brt){
            br.runBR();
            report = true;
            break;
        }
    }
    std::cout<<report<<std::endl;
    return report;
}

