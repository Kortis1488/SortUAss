#include "../inc/blockRunner.h"
#include <iostream>
//namespace br = blockRunner;

blockRunner::blockRunner(blockRunnerType brt, controlThreadPanel* manager){
    this->brt = brt;
    this->manager = manager;
}

threadNodeCreator::threadNodeCreator(blockRunnerType brt, controlThreadPanel* manager)
:blockRunner(brt, manager)
{
}


blockRunnerType blockRunner::getType(){
    return this->brt;
}

void blockRunner::runBR(blockRunnerData* brd){

}

void threadNodeCreator:: runBR(blockRunnerData* brd){
    
}