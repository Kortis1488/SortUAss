#include <string>
class file{
    protected:
        std::string path;
        std::string name;
    public:
        file(std::string path);
        void setPath(std::string path); 
        std::string getPath();
};