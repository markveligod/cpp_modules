#include <iostream>
#include "Array.hpp"

/*
**==========================
**         Colors
**==========================
*/
# define RED "\033[1;31m"
# define YELLOW "\033[1;33m"
# define CYAN "\033[1;36m"
# define RESET "\033[0m"

int main()
{
    srand(time(NULL));
    std::cout << RED << "|=============================|\n" << RESET;
    std::cout << YELLOW << "Testing type INT\n" << RESET;
    Array<int> arr_int;
    Array<int> arr_int_temp(10);
    arr_int = arr_int_temp;
    std::cout << YELLOW << "[Array]: " << CYAN;
    for (unsigned int i = 0; i < arr_int.size(); i++)
    {
        arr_int[i] = rand() % 100;
        std::cout << arr_int[i] << " ";
    }
    std::cout << RESET << std::endl;
    std::cout << RED << "|=============================|\n" << RESET;

    std::cout << RED << "|=============================|\n" << RESET;
    std::cout << YELLOW << "Testing type DOUBLE\n" << RESET;
    Array<double> arr_double;
    Array<double> arr_double_temp(10);
    arr_double = arr_double_temp;
    std::cout << YELLOW << "[Array]: " << CYAN;
    for (unsigned int i = 0; i < arr_double.size(); i++)
    {
        arr_double[i] = (rand() % 100) + (0.01 * (rand() % 100));
        std::cout << arr_double[i] << " ";
    }
    std::cout << RESET << std::endl;
    std::cout << RED << "|=============================|\n" << RESET;

    std::cout << RED << "|=============================|\n" << RESET;
    std::cout << YELLOW << "Testing type CHAR\n" << RESET;
    Array<char> arr_char;
    Array<char> arr_char_temp(10);
    arr_char = arr_char_temp;
    std::string str = "0123456789abcdefghijklmopqrstuvxyzABCDEFGHIJKLMOPQRSTUVXYZ";
    std::cout << YELLOW << "[Array]: " << CYAN;
    for (unsigned int i = 0; i < arr_char.size(); i++)
    {
        arr_char[i] = str[rand() % str.size()];
        std::cout << arr_char[i] << " ";
    }
    std::cout << RESET << std::endl;
    std::cout << RED << "|=============================|\n" << RESET;

    return (0);
}