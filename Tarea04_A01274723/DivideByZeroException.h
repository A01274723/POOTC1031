#include <stdexcept>

class DivideByZeroExeption : public std::runtime_error{
    public:
        DivideByZeroExeption() : std::runtime_error{"attempted to divide zero"}{}
};