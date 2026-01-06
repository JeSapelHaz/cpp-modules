#include <iostream>
#include "Array.hpp"

int main()
{
    Array<int> new_array(5);
    new_array[0] = 1;
    new_array[1] = 14;
    new_array[2] = 41;
    new_array[3] = 10;
    new_array[4] = 65;
    std::cout << new_array[0] << std::endl;
    std::cout << new_array[1] << std::endl;
    std::cout << new_array[2] << std::endl;
    std::cout << new_array[3] << std::endl;
    std::cout << new_array[4] << std::endl;

}