#include "../inc/blockRunner.h"
#include <iostream>
using typeB = blockRunnerType;
void blockRunnerData::setData(fsb::path* dir,std::vector<rule>* rules){
    dataBR.dir = dir;
    dataBR.rules = rules; 
}


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
    std::cout<<"DONE\n";
}