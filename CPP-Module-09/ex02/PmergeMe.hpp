#pragma once

#include <iostream>
#include <stack>
#include <string>
#include <vector>
#include <sstream>
#include <cmath>

class PmergeMe
{
    public:
        PmergeMe(void);
        ~PmergeMe(void);
        PmergeMe(const PmergeMe&);
        PmergeMe& operator=(const PmergeMe&);

        std::vector<int> _vector;
        std::deque<int> _deque;
};