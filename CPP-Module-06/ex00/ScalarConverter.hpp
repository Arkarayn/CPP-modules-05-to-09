#pragma once

#include <iostream>
#include <string>
#include <cctype>
#include <cmath>
#include <limits>
#include <iomanip>


Class ScalarConverter {
    public:
        ScalarConverter();
        ScalarConverter(ScalarConverter const & src);
        ~ScalarConverter();
        ScalarConverter & operator=(ScalarConverter const & src);
    private:
        std::string _input;
        ScalarConverter(std::string input);
        void _convertChar();
        void _convertInt();
        void _convertFloat();
        void _convertDouble();
        void _printChar();
        void _printInt();
        void _printFloat();
        void _printDouble();
        void _printError();
};