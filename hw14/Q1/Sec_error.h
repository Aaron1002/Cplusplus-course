#include <stdexcept>
using namespace std;

class SecondError : public runtime_error{
    public:
        SecondError() : runtime_error("The 'second' value is invalid."){};
};
