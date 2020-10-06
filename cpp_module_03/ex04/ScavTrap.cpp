#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
    this->hit_points = 100;
    this->max_hit_points = 100;
    this->energy_points = 50;
    this->max_energy_points = 50;
    this->level = 1;
    this->_name = name;
    this->melee_attack_damage = 20;
    this->ranged_attack_damage = 15;
    this->armor_damage_reduction = 3;
    std::cout << YELLOW << "[" << this->_name << "]" << GREEN << "[Locking the door]" << RESET << "- " << this->level << " level\n";
    std::cout << CYAN;
    std::cout << "         __" << std::endl;
    std::cout << " _(\\    |@@|" << std::endl;
    std::cout << "(__/\\__ \\--/ __" << std::endl;
    std::cout << "   \\___|----|  |   __" << std::endl;
    std::cout << "       \\ }{ /\\ )_ / _\\" << std::endl;
    std::cout << "       /\\__/\\ \\__O (__/" << std::endl;
    std::cout << "      (--/\\--)    \\__/" << std::endl;
    std::cout << "      _)(  )(_" << std::endl;
    std::cout << "     `---''---`" << std::endl;
    std::cout << std::endl << RESET;
    srand(time(nullptr));
}

ScavTrap::~ScavTrap()
{
    std::cout << YELLOW << "[" << this->_name << "]" << RED << "[Door breached]\n" << RESET;
}

void ScavTrap::challengeNewcomer(void)
{
    std::string array[] = { "Ты пытался открыть меня?", "Одной обоймы будет недостаточно!", "Давайте начнем эту вечеринку!", "Ты называешь себя крутым парнем?", "Неужели кто-то что-то почувствовал?" };
    int randomValue;

    randomValue = rand() % 10;
    if (randomValue > 4)
        randomValue -= 5;
    std::cout << YELLOW << "[" << this->_name << "]: " << RESET << array[randomValue] << std::endl;
}
