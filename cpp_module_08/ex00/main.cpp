#include "easyfind.hpp"
#include <iostream>
#include <cstdlib>
#include <vector>
#include <list>


/*
**==========================
**         Colors
**==========================
*/
# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define YELLOW "\033[1;33m"
# define CYAN "\033[1;36m"
# define RESET "\033[0m"

template<typename Type>
void print(Type a)
{
    std::cout << a << " ";
}

int main()
{
    srand(time(NULL));

    std::cout << RED << "|============================|\n" << RESET;
    std::cout << YELLOW << "Testing " << CYAN << "vector" << YELLOW << " with INT number's...\n" << RESET;
    int find_number = rand() % 100;
    std::vector<int> vec_num;
    vec_num.reserve(30);
    for (int i = 0; i < 30; i++)
        vec_num.push_back(rand() % 100);
    std::cout << YELLOW << "[Array]<int>: " << CYAN;
    std::for_each (vec_num.begin(), vec_num.end(), print<int>);
    std::cout << RESET << std::endl;
    std::cout << YELLOW << "[Number]: " << CYAN << find_number << RESET << std::endl;
    try
    {
        std::vector<int>::iterator it_1 = easyfind(vec_num, find_number);
        std::cout << GREEN << "\tNumber is found !(^_^)! -> " << CYAN << "[" << &it_1 << "]\n" << RESET;
    }
    catch(const std::exception& e)
    {
        std::cerr << RED << "\t" << e.what() << '\n';
    }
    std::cout << RED << "|============================|\n" << RESET;

    std::cout << RED << "|============================|\n" << RESET;
    std::cout << YELLOW << "Testing " << CYAN << "list" << YELLOW << " with INT number's...\n" << RESET;
    int list_number = rand() % 100;
    std::list<int> list_num;
    for (int i = 0; i < 30; i++)
        list_num.push_back(rand() % 100);
    std::cout << YELLOW << "[Array]<int>: " << CYAN;
    std::for_each (list_num.begin(), list_num.end(), print<int>);
    std::cout << RESET << std::endl;
    std::cout << YELLOW << "[Number]: " << CYAN << list_number << RESET << std::endl;
    try
    {
        std::list<int>::iterator it_2 = easyfind(list_num, list_number);
        std::cout << GREEN << "\tNumber is found !(^_^)! -> " << CYAN << "[" << &it_2 << "]\n" << RESET;
    }
    catch(const std::exception& e)
    {
        std::cerr << RED << "\t" << e.what() << '\n';
    }
    std::cout << RED << "|============================|\n" << RESET;

    return (0);
}