#pragma once

#include "main.hpp"

class Data
{
    private:
        int count;
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string login;
        std::string postal_address;
        std::string email_address;
        std::string phone_number;
        std::string birthday_date;
        std::string favorite_meal;
        std::string underwear_color;
        std::string darkest_secret;
    public:
        Data();
        ~Data();
        void set_data();
        void search_data();
};
