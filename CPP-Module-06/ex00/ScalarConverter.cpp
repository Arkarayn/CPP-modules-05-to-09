#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(std::string value) {}

void ScalarConverter::convert(std::string value)
{
    std::cout << "char: ";
    try
    {
        char c = static_cast<char>(std::stoi(value));
        if (std::isprint(c))
            std::cout << "'" << c << "'" << std::endl;
        else
            std::cout << "Non displayable" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "impossible" << std::endl;
    }
    std::cout << "int: ";
    try
    {
        std::cout << std::stoi(value) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "impossible" << std::endl;
    }
    std::cout << "float: ";
    try
    {
        std::cout << std::stof(value) << "f" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "impossible" << std::endl;
    }
    std::cout << "double: ";
    try
    {
        std::cout << std::stod(value) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "impossible" << std::endl;
    }
}

ScalarConverter::~ScalarConverter() {}