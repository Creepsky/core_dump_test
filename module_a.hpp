#pragma once

#include "module_b.hpp"
#include "module_c.hpp"

struct module_a
{
    static int func()
    {
        module_b<int> b;
        return b.func([](module_c<int>& c){ return *c.p; });
    }
};
