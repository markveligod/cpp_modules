#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
    this->hit_points = 100;
    this->max_hit_points = 100;
    this->energy_points = 100;
    this->max_energy_points = 100;
    this->level = 1;
    this->_name = name;
    this->melee_attack_damage = 30;
    this->ranged_attack_damage = 20;
    this->armor_damage_reduction = 5;
    std::cout << YELLOW << "[" << this->_name << "]" << GREEN << "[LIVE]" << RESET << "- " << this->level << " level\n";
    std::cout << CYAN;
    std::cout << "      \\_/" << std::endl;
    std::cout << "     (* *)" << std::endl;
    std::cout << "    __)#(__" << std::endl;
    std::cout << "   ( )...( )(_)" << std::endl;
    std::cout << "   || |_| ||//" << std::endl;
    std::cout << ">==() | | ()/" << std::endl;
    std::cout << "    _(___)_" << std::endl;
    std::cout << "   [-]   [-]" << std::endl;
    std::cout << std::endl << RESET;
    srand(time(nullptr));
}

FragTrap::~FragTrap()
{
    std::cout << YELLOW << "[" << this->_name << "]" << RED << "[DEAD]\n" << RESET;
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
    std::string array[] = { "Возьми это!", "Убирайся с моей лужайки!", "- Кофе? Черный... как моя душа.", "Я - огонь, Я - Смерть!", "Молния! Кукачев!" };
    int randomValue;

    if (this->energy_points >= 25)
    {
        randomValue = rand() % 10;
        if (randomValue > 4)
            randomValue -= 5;
        std::cout << YELLOW << "[" << this->_name << "]: " << RESET << array[randomValue] << std::endl;
        std::cout << YELLOW << "FR4G-TP <" << this->_name << ">" << RESET << " attacks " << YELLOW << "<" << target << ">" << RESET << " for " << RED << "<" << ((rand() % this->ranged_attack_damage) + randomValue) << ">" << RESET << " points of damage!\n";
        this->energy_points -= 25;

    }
    else
        std::cout << YELLOW << "FR4G-TP <" << this->_name << ">" << RESET << " is out of energy!\n";
}
