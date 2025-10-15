#pragma once

#include <iostream>

template<typename T>
void iter(T *array, const int len, void (*f)(T &)) {
    for (int i = 0; i < len; ++i)
    {
        f(array[i]);
    }
}
