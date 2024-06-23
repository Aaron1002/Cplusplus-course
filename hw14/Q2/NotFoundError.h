#include <exception>
using namespace std;

class ProductNotFoundException : public exception{
    public:
        ProductNotFoundException(){};
        virtual const char* what() const throw(){
            return "The product is not found.";
        }
};