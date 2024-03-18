#include "RPN.hpp"

int main(int ac, char **av) {
    if (ac != 2) {
        std::cerr << "Usage: ./RPN \"[string]\"" << std::endl;
        return 1;
    }
    RPN::ParsArgs(av[1]);
    RPN::printStack();
    return 0;
}