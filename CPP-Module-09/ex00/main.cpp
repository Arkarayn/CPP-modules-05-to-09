#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    if (argc != 2) {
        std::cerr << "Usage: ./bitcoin [input file]" << std::endl;
        return 1;
    }
    BitcoinExchange::GenerateCvs( );
    BitcoinExchange::ScapInput(argv[1]);
    return 0;
}