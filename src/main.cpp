#include <iostream>
#include <boost/filesystem/operations.hpp>
#include "Node.h"
namespace fsb = boost::filesystem;
using namespace std;

int main(int argc, char* argv[])
{
    string path = "Z:\\Desktop\\test";
    Node node(path);
    node.printFiles();
    return 0;
}