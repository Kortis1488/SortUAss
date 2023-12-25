#include <vector>
#include <boost/filesystem/operations.hpp>

namespace fsb = boost::filesystem;

class Scanner{
    public:
        void scanArea(std::vector<fsb::path>* files, fsb::path* dir);
};