#include "../inc/scanner.h"

void Scanner::scanArea(fsb::path* dir, std::vector<fsb::path>* files){
    dir->root_path();
    files->clear();

    for (fsb::directory_entry& x : fsb::directory_iterator(*dir)){
        files->push_back(x.path());
    }
}