#include <iostream>       // std::cout
#include <string>         // std::string
#include <locale>         // std::toupper

int main(int ac, char **av)
{
    int     i;
    size_t  j;

    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    else
    {
        i = 1;
        while (i < ac)
        {
            std::string temp_str(av[i]);
            j = 0;
            while (j < temp_str.length())
            {
                std::cout << (char)std::toupper(temp_str[j]);
                j++;
            }
            std::cout << "\n";
            i++;
        }
    }
    return (0);
}
