#include "../inc/controlPanel.h"

using cp = controlPanel;
using typeB = blockRunnerType;
cp::controlPanel()
:tNC(typeB::RC, &manager)
{
    
}
void cp::createThreadNode(std::string path){

}