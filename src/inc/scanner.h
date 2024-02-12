#include <vector>
#include <boost/filesystem/operations.hpp>

namespace fsb = boost::filesystem;

class Scanner{
    private:
        std::vector<fsb::path> files;
    public:
        void scanArea(fsb::path* dir, std::vector<fsb::path>* files);
};