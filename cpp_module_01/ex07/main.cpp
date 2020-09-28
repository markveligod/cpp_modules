#include "main.hpp"

std::string check_line(std::string &line, std::string const &src, std::string const &dst)
{
    std::stringstream os;
    size_t src_size = src.size();
    size_t line_size = line.size();
    size_t i = 0;
    size_t j;

    while (i < line_size)
    {
        j = 0;
        while (line[i + j] == src[j] && j < src_size)
            j++;
        if (j == src_size)
        {
            os << dst;
            i += j - 1;
        }
        else
            os << line[i];
        i++;
    }
    return (os.str());
}

int replace(std::string const &path, std::string const &src, std::string const &dst)
{
    std::ifstream in_file;
    std::ofstream out_file;
    std::string line;

    if (path.size() == 0)
        return (ERR_PATH);
    if (src.size() == 0)
        return (ERR_SRC);
    if (dst.size() == 0)
        return (ERR_DST);
    in_file.open(path);
    out_file.open(path + ".replace", std::ios::trunc);
    if (!in_file.is_open() || !out_file.is_open())
        return (ERR_FILE);
    while (std::getline(in_file, line))
    {
        out_file << check_line(line, src, dst);
        if (!in_file.eof())
            out_file << "\n";
    }
    in_file.close();
    out_file.close();
    return (0);
}

int main(int ac, char **av)
{
    int status;

    if (ac != 4)
    {
        std::cout << RED << "[Error]: " << RESET << "Invalid number of arguments.\n";
        return (1);
    }
    else
    {
        if ((status = replace(av[1], av[2], av[3])) != 0)
        {
            std::cout << RED << "[Error]: " << RESET << "Code: " << status << std::endl;            
            return (status);
        }
        std::cout << GREEN << "[Success]: " << RESET << "check " << av[1] << ".replace\n";
    }
    return (0);
}
