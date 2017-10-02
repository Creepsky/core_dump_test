#pragma once

#include <functional>

template <typename T>
struct module_c
{
    T* p = nullptr;
    std::function<T(module_c&)> func;
};
