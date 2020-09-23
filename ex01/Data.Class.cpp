#include "main.hpp"

Data::Data()
{
    this->count = 0;
    std::cout << YELLOW <<"[Constructor]" << RESET << GREEN << "[OK]\n" << RESET;
}

Data::~Data()
{
    std::cout << YELLOW <<"[Destructor]" << RESET << GREEN << "[OK]\n" << RESET;
}

void Data::set_data()
{
    std::cout << CYAN << "[ADD section]: " << RESET << GREEN << "[OPEN]\n" << RESET;
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
    std::cout << CYAN << "[ADD section]: " << RESET << RED << "[CLOSE]\n" << RESET;
    return ;
}

void Data::search_data()
{
    int index = 0;
    std::string temp;

    std::cout << CYAN << "[SEARCH section]: " << RESET << GREEN << "[OPEN]\n" << RESET;
    if ((this->first_name.length() + this->last_name.length() + this->nickname.length()) == 0)
    {
        std::cout << RED << "[Error]: " << RESET << "Книга контактов пуста\n";
        std::cout << CYAN << "[SEARCH section]: " << RESET << RED << "[CLOSE]\n" << RESET;
        start_display();
        return ;
    }
    show_header();
    show_data(this->first_name, this->last_name, this->nickname, &this->count);
    while (index == 0)
    {
        std::cout << YELLOW << "[Enter index]: " << RESET;
        std::cin >> temp;
        index = ft_atoi(temp.c_str());
        if (index <= 0 || index > this->count)
        {
            index = 0;
            std::cout << RED << "[Enter from 1 to " << this->count << "]\n" << RESET;
        }
    }
    std::cout << "\n---------------------------------------------\n";
    std::cout << YELLOW << "[Index]: " << RESET << index << "\n";
    pars_data("first name", this->first_name, index);
    pars_data("last name", this->last_name, index);
    pars_data("nickname", this->nickname, index);
    pars_data("login", this->login, index);
    pars_data("postal address", this->postal_address, index);
    pars_data("email address", this->email_address, index);
    pars_data("phone number", this->phone_number, index);
    pars_data("birthday date", this->birthday_date, index);
    pars_data("favorite meal", this->favorite_meal, index);
    pars_data("underwear color", this->underwear_color, index);
    pars_data("darkest secret", this->darkest_secret, index);
    std::cout << "---------------------------------------------\n";
    std::cout << CYAN << "[SEARCH section]: " << RESET << RED << "[CLOSE]\n\n" << RESET;
    return ;
}
