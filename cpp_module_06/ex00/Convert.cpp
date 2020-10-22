#include "Convert.hpp"

Convert::Convert()
{}

Convert::Convert(char *av)
{
	std::string argv(av);
	std::stringstream ss;
	char *end;

	if (argv.empty())
		throw Convert::UnknownString();
	if ((argv.size() == 1) && !isdigit(argv[0]))
	{
		this->num_char = argv[0];
		this->num_int = static_cast<int>(argv[0]);
		this->num_float = static_cast<float>(argv[0]);
		this->num_double = static_cast<double>(argv[0]);

		ss << "'" << this->num_char << "'";
		this->std_char = ss.str();
		ss.str(std::string());

		ss << this->num_int;
		this->std_int = ss.str();
		ss.str(std::string());

		ss << this->num_float << ".0f";
		this->std_float = ss.str();
		ss.str(std::string());

		ss << this->num_double << ".0";
		this->std_double = ss.str();
		ss.str(std::string());
	}
	else if ((isdigit(argv[0])) || (argv[0] == '-' && isdigit(argv[1])))
	{
		long int temp = strtod(av, &end);
		if (*end != '\0' && *end != 'f')
			throw Convert::UnknownString();

		if (temp > std::numeric_limits<char>::max() || temp < std::numeric_limits<char>::min())
		{
			this->std_char = "overflow";
		}
		else if (!isprint(this->num_char = static_cast<char>(temp)))
		{
			this->std_char = "Non displayable";
		}
		else
		{
			ss << "'" << this->num_char << "'";
			this->std_char = ss.str();
			ss.str(std::string());
		}

		if (temp > std::numeric_limits<int>::max() || temp < std::numeric_limits<int>::min())
		{
			this->std_int = "overflow";
		}
		else
		{
			this->num_int = static_cast<int>(temp);
			ss << this->num_int;
			this->std_int = ss.str();
			ss.str(std::string());
		}

		if (temp > std::numeric_limits<float>::max() || temp < std::numeric_limits<float>::min())
		{
			this->std_float = "overflow";
		}
		else
		{
			this->num_float = static_cast<float>(temp);
			ss << std::fixed << std::setprecision(1) << this->num_float << "f";
			this->std_float = ss.str();
			ss.str(std::string());
		}

		if (temp > std::numeric_limits<double>::max() || temp < std::numeric_limits<double>::min())
		{
			this->std_double = "overflow";
		}
		else
		{
			this->num_double = static_cast<double>(temp);
			ss << std::fixed << std::setprecision(1) << this->num_double;
			this->std_double = ss.str();
			ss.str(std::string());
		}
	}
	else if (argv == "nan" || argv == "nanf" || argv == "-inff" || argv == "+inff" || argv == "+inf" || argv == "-inf")
	{
		if (argv[0] == '+')
			this->sign += argv[0];
		this->num_double = strtod(av, &end);
		this->num_float = static_cast<float>(num_double);

		this->std_char = "impossible";
		this->std_int = "impossible";
		
		std::stringstream ss;
		ss << this->sign << num_double;
		this->std_double = ss.str();
		ss.str(std::string());

		ss << this->sign << num_float << "f";
		this->std_float = ss.str();
		ss.str(std::string());
	}
	else
		throw Convert::UnknownString();
}

Convert::Convert(Convert const &other)
{
	(void)other;
}

Convert::~Convert()
{}

Convert &Convert::operator=(Convert const &other)
{
	(void)other;
	return(*this);
}

const char* Convert::UnknownString::what() const throw()
{
	return ("UnknownString");
}

std::string Convert::getChar() const
{
	return (this->std_char);
}

std::string Convert::getInt() const
{
	return (this->std_int);
}

std::string Convert::getFloat() const
{
	return (this->std_float);
}

std::string Convert::getDouble() const
{
	return (this->std_double);
}

std::ostream &operator<<(std::ostream &out, Convert const &base)
{
	std::cout << "char: " << base.getChar() << std::endl;
	std::cout << "int: " << base.getInt() << std::endl;
	std::cout << "float: " << base.getFloat() << std::endl;
	std::cout << "double: " << base.getDouble();
	return (out);
}
