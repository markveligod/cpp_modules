#include "main.hpp"

void *serialize(void)
{
    std::string str = "0123456789abcdefghijklmopqrstuvxyzABCDEFGHIJKLMOPQRSTUVXYZ";
    size_t str_size = str.size();
    char *array = new char[20];

    for (int i = 0; i < 8; i++)
        array[i] = str[rand() % str_size];
    *reinterpret_cast<int*>(array + 8) = rand() % str_size;
    for(int i = 0; i < 8; i++)
        array[i + 12] = str[rand() % str_size];
    return (array);
}

Data *deserialize(void *raw)
{
    Data *data = new Data;

    data->s1 = std::string(static_cast<char*>(raw), 8);
    data->n = *reinterpret_cast<int*>(static_cast<char*>(raw) + 8);
    data->s2 = std::string(static_cast<char*>(raw) + 12, 8);
    return (data);
}

int main()
{
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        std::cout << "|===============|" << std::endl;
        std::cout << CYAN << "Test #" << i + 1 << RESET << std::endl;
        void *array = serialize();
        Data *data = deserialize(array);

        std::cout << YELLOW << "s1: " << RESET << data->s1 << std::endl;
        std::cout << YELLOW << "n: " << RESET << data->n << std::endl;
        std::cout << YELLOW << "s2: " << RESET << data->s2 << std::endl;
        delete data;
    }
    return (0);
}