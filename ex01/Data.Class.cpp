#include "main.hpp"

void add_data(std::string name, std::string *result)
{
    std::string temp;
    std::cout << "Enter " << name << ":\n> ";
    std::getline(std::cin, temp);
    *result += temp;
    *result += "\n";
}

void Data::set_data()
{
    add_data("first name", &this->first_name);
    add_data("last name", &this->last_name);
    add_data("nickname", &this->nickname);
    add_data("login", &this->login);
    add_data("postal address", &this->postal_address);
    add_data("email address", &this->email_address);
    add_data("phone number", &this->phone_number);
    add_data("birthday date", &this->birthday_date);
    add_data("favorite meal", &this->favorite_meal);
    add_data("underwear color", &this->underwear_color);
    add_data("darkest secret", &this->darkest_secret);
}

void show_header()
{
    std::string temp[] = {"index", "first_name", "last_name", "nickname"};
    for (int i = 0; i < 4; i++)
        std::cout << "|" << std::setw(10) << temp[i];
    std::cout << "|\n";
}

int print_data(std::string str, int index)
{
    int i = 0;
    char info[11];

    while (str[index] && str[index] != '\n')
    {
        if (i == 9)
        {
            info[i] = '.';
            info[i + 1] = '\0';
            std::cout << "|" << std::setw(10) << info;
            while (str[i] && str[i] != '\n')
                i++;
            return (i);
        }
        info[i] = str[index];
        i++;
        index++;
    }
    info[i] = '\0';
    std::cout << "|" << std::setw(10) << info;
    return (i);
}

void show_data(std::string f_name, std::string l_name, std::string nick)
{
    int index = 0;
    int ind_f_name = 0;
    int ind_l_name = 0;
    int ind_nick = 0;
    bool check = true;

    if ((f_name.length() + l_name.length() + nick.length()) == 0)
        return ;
    while (check)
    {
        std::cout << "|" << std::setw(10) << index;
        ind_f_name += print_data(f_name, ind_f_name);
        ind_l_name += print_data(l_name, ind_l_name);
        ind_nick += print_data(nick, ind_nick);
        std::cout << "|\n";
        if (f_name[ind_f_name])
            ind_f_name++;
        if (l_name[ind_l_name])
            ind_l_name++;
        if (nick[ind_nick])
            ind_nick++;
        index++;
        if (!f_name[ind_f_name] && !l_name[ind_l_name] && !nick[ind_nick])
            check = false;
    }
}

void Data::search_data()
{
    show_header();
    show_data(this->first_name, this->last_name, this->nickname);
}
