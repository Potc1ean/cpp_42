#pragma once

template <typename T>
Array<T>::Array() : array(NULL), len(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : array(new T[n]()), len(n) {}

template <typename T>
Array<T>::Array(const Array& other) : array(new T[other.len]), len(other.len) {
    for (unsigned int i = 0; i < len; ++i)
    {
        array[i] = other.array[i];
    }
}

template <typename T>
Array<T>::~Array() {
    delete [] array;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& other) {
    if (this != &other)
    {
        delete[] array;

        len = other.len;
        array = new T[len];
        for (unsigned int i = 0; i < len; ++i)
        {
            array[i] = other.array[i];
        }
    }
    return *this;
}

template <typename T>
T& Array<T>::operator[](unsigned int index) {
    if (len <= index)
        throw std::out_of_range("Index out of range");
    return array[index];
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const {
    if (len <= index)
        throw std::out_of_range("Index out of range");
    return array[index];
}

template <typename T>
unsigned int Array<T>::size() const {
    return len;
}
