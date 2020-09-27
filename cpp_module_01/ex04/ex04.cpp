#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *pointer = &str;
    std::string &ref = str;

    std::cout << "[str]: " << str << std::endl;
    std::cout << "[pointer]: " << *pointer << std::endl;
    std::cout << "[ref]: " << ref << std::endl;
    return (0);
}
