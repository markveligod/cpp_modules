#include "main.hpp"

int main(void)
{
    bool check = true;
    std::string com;
    Data run;

    start_display();
    while (check)
    {
        std::getline(std::cin, com);
        if (com == "ADD")
        {
            run.set_data();
            start_display();
        }
        else if (com == "SEARCH")
            run.search_data();
        else if (com == "EXIT")
            check = false;
        else
            std::cout << "#> ";
    }
    return (0);
}
