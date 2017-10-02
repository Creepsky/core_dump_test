#include "module_a.hpp"

int main()
{
    return [](){ return module_a::func(); };
}
