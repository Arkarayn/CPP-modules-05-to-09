#include "PmergeMe.hpp"

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cerr << "Usage: ./PmergeMe [args]" << std::endl;
        return 1;
    }
    PmergeMe p;
    return 0;
}