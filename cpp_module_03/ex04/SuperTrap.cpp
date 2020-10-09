#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name): ClapTrap("ClapTrap"), NinjaTrap(), FragTrap()
{
    this->level = 1;
    this->_name = name;
    this->hit_points = FragTrap::hit_points;
    this->max_hit_points = FragTrap::max_hit_points;
    this->energy_points = NinjaTrap::energy_points;
    this->max_energy_points = NinjaTrap::max_energy_points;
    this->melee_attack_damage = NinjaTrap::melee_attack_damage;
    this->ranged_attack_damage = FragTrap::ranged_attack_damage;
    this->armor_damage_reduction = FragTrap::armor_damage_reduction;
    std::cout << YELLOW << "[" << this->_name << "]" << GREEN << "[LIVE]" << RESET << "- " << this->level << " level\n";
    std::cout << CYAN;
    std::cout << "          ______________" << std::endl;
    std::cout << "         `--------------'" << std::endl;
    std::cout << "      _.  .--./|  |\\.--.  ._" << std::endl;
    std::cout << "     //|  |--||----||--|  |\\" << std::endl;
    std::cout << "    ||__\\_|  ||____||  |_/__||" << std::endl;
    std::cout << "    ||_-- |__|||==|||__| --_||" << std::endl;
    std::cout << "    ||_() |___||--||___| ()_||" << std::endl;
    std::cout << "    || --_|   ||__||   |_-- ||" << std::endl;
    std::cout << "    ||||  |---||__||---|  ||||" << std::endl;
    std::cout << "     \\|| /|___||__||___|\\_||/" << std::endl;
    std::cout << "     |||_| \\.||||||||./ |_|||" << std::endl;
    std::cout << "     \\ _ /   \\--==--/   \\ _ /" << std::endl;
    std::cout << "      <_>  /----------\\  <_>" << std::endl;
    std::cout << "      ||| _\\__ |  | __/_ |||" << std::endl;
    std::cout << "      ||| \\  |\\|  |/|  / |||" << std::endl;
    std::cout << "      ||| |  |_|__|_|  | |||" << std::endl;
    std::cout << "      ||| [--+ \\  / +--] |||" << std::endl;
    std::cout << "      ||| |--+-/  \\-+--| |||" << std::endl;
    std::cout << "      ||| |  ||    ||  | |||" << std::endl;
    std::cout << "      |=| |___|    |___| |=|" << std::endl;
    std::cout << "      / \\ |---|    |---| / \\" << std::endl;
    std::cout << "      |=| | | |    | | | |=|" << std::endl;
    std::cout << "      \\ / |___|    |___| \\ /" << std::endl;
    std::cout << "       = (| | ||  || | |) =" << std::endl;
    std::cout << "          |--_||  ||_--|" << std::endl;
    std::cout << "         _|_#__|  |__#_|_" << std::endl;
    std::cout << "        /______\\  /______\\" << std::endl;
    std::cout << "       |________||________|" << std::endl;
    std::cout << std::endl << RESET;
    srand(time(nullptr));
}

SuperTrap::~SuperTrap()
{
    std::cout << YELLOW << "[" << this->_name << "]" << RED << "[DEAD]\n" << RESET;
}

void SuperTrap::rangedAttack(std::string const &target)
{
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const &target)
{
	NinjaTrap::meleeAttack(target);
}