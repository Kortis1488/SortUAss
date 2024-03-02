#include "../inc/blockRunner.h"
#include <iostream>
using typeB = blockRunnerType;
using dataB = blockRunnerData;
void blockRunnerData::setData(fsb::path* dir,std::vector<rule>* rules){
    dataBR.dir = dir;
    dataBR.rules = rules; 
}


struct data blockRunnerData::dataBR = {nullptr, nullptr};


blockRunner::blockRunner(blockRunnerType brt, controlThreadPanel* manager){
    this->brt = brt;
    this->manager = manager;
}

threadNodeCreator::threadNodeCreator(controlThreadPanel* manager)
:blockRunner(typeB::THREAD_NODE_CREATOR, manager)
{
}


blockRunnerType blockRunner::getType(){
    return this->brt;
}

void blockRunner::runBR(){
}

void threadNodeCreator:: runBR(){
    manager->createThreadNode(dataB::dataBR.dir);
}

void getNodeDir:: runBR(){
    std::vector<threadNode>* thd = manager->getThreadNodes();    
}