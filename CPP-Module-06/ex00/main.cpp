#include "ScalarConverter.hpp"

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cerr << "Usage: ./convert [value]" << std::endl;
        return 1;
    }
    ScalarConverter sc(argv[1]);
    sc.convert(argv[1]);
    return 0;
}