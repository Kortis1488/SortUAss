#include "scanner.h"

void Scanner::scanArea(std::vector<fsb::path>* files, fsb::path* dir){
    for (fsb::directory_entry& x : fsb::directory_iterator(*dir)){
        files->push_back(x.path());
    }
}