#include <iostream>
#include "Node.h"
using namespace std;



int main(){
    Node node;
    string command;
    string s = "f1";
    for(;;){
        cin >> command;
        if(command == "exit") break;
        if(command == "add") {
            node.addFile(s);
            s+="1";
        } 
        if(command == "show") node.printFiles(); 
    }
    return 0;
}