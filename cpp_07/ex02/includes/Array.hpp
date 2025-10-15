#pragma once

#include <iostream>
#include <exception>

template <typename T>
class Array {
    private:
        T *array;
        unsigned int len;
    public:
        Array();
        Array(unsigned int n);
        Array(const Array& other);
        ~Array();

        Array& operator=(const Array& other);
        T& operator[](unsigned int index);
        const T& operator[](unsigned int index) const;
        
        unsigned int get_len() const;
};

#include "../srcs/Array.tpp"