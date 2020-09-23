#include "main.hpp"

void add_data(std::string name, std::string *result)
{
    std::string temp;
    if (name == "first name" || name == "last name" || name == "nickname")
    {
        while (temp.empty())
        {
            std::cout << RED << "[Это обязательное поле для заполнения]\n" << RESET;
            std::cout << YELLOW << "[Enter " << name << "]: " << RESET;
            std::getline(std::cin, temp);
        }
    }
    else
    {
        std::cout << YELLOW << "[Enter " << name << "]: " << RESET;
        std::getline(std::cin, temp);
    }
    *result += temp;
    *result += "\n";
    return ;
}

void show_header()
{
    std::string temp[] = {"index", "first_name", "last_name", "nickname"};
    std::cout << "|----------|----------|----------|----------|\n";
    for (int i = 0; i < 4; i++)
        std::cout << "|" << std::setw(10) << temp[i];
    std::cout << "|\n";
    std::cout << "|----------|----------|----------|----------|\n";
    return ;
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


void show_data(std::string f_name, std::string l_name, std::string nick, int *count)
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
        std::cout << "|" << std::setw(10) << index + 1;
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
        (*count)++;
        if (!f_name[ind_f_name] && !l_name[ind_l_name] && !nick[ind_nick])
            check = false;
    }
    std::cout << "\n";
    return ;
}

void pars_data(std::string name, std::string str, int index)
{
    int i = 0;
    int j = 0;

    while (i < index - 1)
    {
        while (str[j] && str[j] != '\n')
            j++;
        i++;
        j++;
    }
    std::cout << YELLOW << "[" << name << "]: " << RESET;
    while (str[j] && str[j] != '\n')
        std::cout << str[j++];
    std::cout << "\n";
    return ;
}

void start_display()
{
    std::cout << RED << "\n\n[Help]:\n" << RESET;
    std::cout << YELLOW << "[ADD]: " << RESET << "Добавление контакта в книгу\n";
    std::cout << YELLOW << "[SEARCH]: " << RESET << "Поиск контакта в книге\n";
    std::cout << YELLOW << "[EXIT]: " << RESET << "Выход\n";
    std::cout << YELLOW << "[┏(-_-)┛┗(-_-)┓┗(-_-)┛┏(-_-)┓]\n\n" << RESET;
    std::cout << "#> ";
}

int ft_atoi(const char *str)
{
	int		i;
	int		sing;
	long	res;

	i = 0;
	res = 0;
	sing = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	if (str[i] == '-' || str[i] == '+')
		sing = ((str[i++] == '-') ? -1 : 1);
	while ((str[i] >= '0' && str[i] <= '9') && str[i] != '\0')
		res = (res * 10) + (str[i++] - '0');
	return (res * sing);
}
