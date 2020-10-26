#include <iostream>
#include <cstdlib>

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

template <typename Type>
void iter(Type *array, int size, void (*f)(Type num, int i))
{
    for (int i = 0; i < size; i++)
        (*f)(array[i], i);
    
}

template <typename Type>
void print_ch(Type ch, int i)
{
    std::cout << YELLOW << "[Index #" << GREEN << i << YELLOW << "]: " << CYAN << "'" << ch << "'\n" << RESET;
}

char *generate_char()
{
    std::string arr = "0123456789abcdefghijklmopqrstuvxyzABCDEFGHIJKLMOPQRSTUVXYZ";
    int size = arr.size();
    char *str = new char[7];

    for (int i = 0; i < 6; i++)
        str[i] = arr[rand() % size];
    str[6] = '\0';
    return (str);
}

int *generate_int()
{
    int *str = new int[6];

    for (int i = 0; i < 6; i++)
        str[i] = rand() % 100;
    return (str);
}

double *generate_double()
{
    double *str = new double[6];

    for (int i = 0; i < 6; i++)
        str[i] = (rand() % 100) + (0.01 * (rand() % 100));
    return (str);
}

int main()
{
    srand(time(NULL));

    std::cout << RED << "|===============|\n" << RESET;
    std::cout << YELLOW << "Testing array CHAR...\n" << RESET;
    for (int i = 0; i < 5; i++)
    {
        std::cout << std::endl << YELLOW << "Test #" << GREEN << i + 1 << std::endl << RESET;
        char *str = generate_char();
        std::cout << YELLOW << "[ARRAY]: " << CYAN << str << std::endl << RESET;
        iter(str, 6, print_ch);
        delete str;
    }
    std::cout << RED << "|===============|\n" << RESET;

    std::cout << RED << "|===============|\n" << RESET;
    std::cout << YELLOW << "Testing array INT...\n" << RESET;
    for (int i = 0; i < 5; i++)
    {
        std::cout << std::endl << YELLOW << "Test #" << GREEN << i + 1 << std::endl << RESET;
        int *str = generate_int();
        std::cout << YELLOW << "[ARRAY]: " << CYAN;
        for (int j = 0; j < 6; j++)
            std::cout << str[j] << " ";
        std::cout << RESET << std::endl;
        iter(str, 6, print_ch);
        delete str;
    }
    std::cout << RED << "|===============|\n" << RESET;

    std::cout << RED << "|===============|\n" << RESET;
    std::cout << YELLOW << "Testing array DOUBLE...\n" << RESET;
    for (int i = 0; i < 5; i++)
    {
        std::cout << std::endl << YELLOW << "Test #" << GREEN << i + 1 << std::endl << RESET;
        double *str = generate_double();
        std::cout << YELLOW << "[ARRAY]: " << CYAN;
        for (int j = 0; j < 6; j++)
            std::cout << str[j] << " ";
        std::cout << RESET << std::endl;
        iter(str, 6, print_ch);
        delete str;
    }
    std::cout << RED << "|===============|\n" << RESET;
    return (0);
}