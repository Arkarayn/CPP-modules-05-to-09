#pragma once

#include <vector>
#include <algorithm>
#include <iostream>
#include <numeric>

class Span
{
    private:
        std::vector<int> _container;
        unsigned int _size;
        unsigned int _maxSize;
    
    public:
        Span(unsigned int n);
        Span(const Span &other);
        Span &operator=(const Span &other);
        ~Span();

        void addNumber(int number);
        void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        void addMoreNumbers(unsigned int amount, int span);
        int shortestSpan();
        int longestSpan();
        unsigned int getSize() const;
        unsigned int getMaxSize() const;
        std::vector<int> getContainer() const;
        void setContainer(std::vector<int> container);
        void setSize(unsigned int size);
        void setMaxSize(unsigned int maxSize);
};