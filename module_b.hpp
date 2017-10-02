#pragma once

#include "module_c.hpp"

template <typename T> 
struct module_b
{
    template <typename F>
    T func(F f)
    {
        module_c<T> c;
        c.func = std::move(f);
        return c.func();
    }
};
