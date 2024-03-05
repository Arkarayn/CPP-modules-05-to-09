#include "Array.hpp"

int main() {

    Array<int> arr(5);
    Array<int> arr2(5);

    for (size_t i = 0; i < arr.size(); i++)
        arr[i] = i;

    arr2 = arr;

    for (size_t i = 0; i < arr2.size(); i++)
        std::cout << arr2[i] << std::endl;

    try
    {
        arr2[6] = 0;
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}