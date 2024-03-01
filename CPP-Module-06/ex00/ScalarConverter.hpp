#include <iostream>
#include <string>
#include <cctype>
#include <cmath>
#include <limits>
#include <iomanip>


class ScalarConverter
{
    public:
        static void convert(std::string);
        ScalarConverter(std::string);
        ~ScalarConverter();
    private:
        ScalarConverter();
};