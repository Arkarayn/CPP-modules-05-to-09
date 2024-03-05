#pragma once

#include <iostream>

template <typename T>
void iter(T *array, size_t length, void (*f)(T const &)) {
    for (size_t i = 0; i < length; i++) {
        f(array[i]);
    }
}

void print(int const &i) {
    std::cout << i << " ";
}

void print(std::string const &s) {
    std::cout << s << " ";
}