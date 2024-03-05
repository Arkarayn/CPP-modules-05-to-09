#pragma once

#include <iostream>

template <typename T>
class Array
{
    public:
        Array() : _arr(NULL), _size(0) {}
        Array(unsigned int n) : _arr(new T[n]), _size(n) {}
        Array(const Array &other) : _arr(new T[other._size]), _size(other._size) {
            for (unsigned int i = 0; i < _size; i++)
                _arr[i] = other._arr[i];
        }
        ~Array() { delete[] _arr; }

        Array &operator=(const Array &other) {
            if (this != &other) {
                delete[] _arr;
                _arr = new T[other._size];
                _size = other._size;
                for (unsigned int i = 0; i < _size; i++)
                    _arr[i] = other._arr[i];
            }
            return *this;
        }

        T &operator[](unsigned int i) {
            if (i >= _size)
                throw std::out_of_range("Index out of range");
            return _arr[i];
        }

        unsigned int size() const { return _size; }

    private:
        T *_arr;
        unsigned int _size;
};