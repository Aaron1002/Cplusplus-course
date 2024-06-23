#include <stdexcept>
using namespace std;

class HourError : public runtime_error{
    public:
        HourError() : runtime_error("The 'hour' value is invalid."){};
};
