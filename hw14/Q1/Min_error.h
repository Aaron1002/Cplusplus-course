#include <stdexcept>
using namespace std;

class MinuteError : public runtime_error{
    public:
        MinuteError() : runtime_error("The 'minute' value is invalid."){};
};
