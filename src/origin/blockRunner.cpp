#include "../inc/blockRunner.h"
#include <iostream>
using typeB = blockRunnerType;
using dataB = blockRunnerData;
void blockRunnerData::setData(fsb::path* dir,std::vector<rule>* rules){
    dataBR.dir = dir;
    dataBR.rules = rules; 
}
void blockRunnerData::setSubDir(fsb::path* subBir){
    dataBR.subBir = subBir;
}

struct panelData blockRunnerData::dataBR = {nullptr, nullptr, nullptr};

blockRunner::blockRunner(blockRunnerType brt, controlThreadPanel* manager){
    this->brt = brt;
    this->manager = manager;
}

threadNodeCreator::threadNodeCreator(controlThreadPanel* manager)
:blockRunner(typeB::THREAD_NODE_CREATOR, manager)
{}

nodeCreator::nodeCreator(controlThreadPanel* manager)
:blockRunner(typeB::NODE_CREATOR, manager)
{}


blockRunnerType blockRunner::getType(){
    return this->brt;
}

void blockRunner::runBR(){
}

void threadNodeCreator:: runBR(){
    manager->createThreadNode(dataB::dataBR.dir);
}

void nodeCreator::runBR(){
    
}

void getNodeDir:: runBR(){
    std::vector<threadNode>* thd = manager->getThreadNodes();    
}