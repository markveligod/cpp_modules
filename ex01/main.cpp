#include "main.hpp"

int main(void)
{
    bool check = true;
    std::string com;
    Data run;

    while (check)
    {
        std::cout << "#> ";
        std::getline(std::cin, com);
        if (com == "ADD")
            run.set_data();
        else if (com == "SEARCH")
            run.search_data();
        else if (com == "EXIT")
            check = false;
    }
    return (0);
}