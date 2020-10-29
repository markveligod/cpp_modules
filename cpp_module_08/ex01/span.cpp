#include "span.hpp"

Span::Span()
{}

Span::Span(unsigned int num)
{
	this->arr.reserve(num);
	this->_max_size = num;
}

Span::Span(Span const &other)
{
	this->arr = other.arr;
	this->_max_size = other._max_size;
}

Span::~Span()
{}

Span &Span::operator=(Span const &other)
{
	this->arr = other.arr;
	this->_max_size = other._max_size;
	return(*this);
}

void Span::addNumber(long int x)
{
	if (x < std::numeric_limits<int>::min() || x > std::numeric_limits<int>::max())
		throw std::runtime_error("Overflow");
	if (this->arr.size() == this->_max_size)
		throw std::runtime_error("Array is max");
	int temp = static_cast<int>(x);
	std::vector<int>::iterator it = std::find(this->arr.begin(), this->arr.end(), temp);
	if (it != this->arr.end())
		throw std::runtime_error("Duplicate numbers");
	this->arr.push_back(temp);
}

int Span::shortestSpan() const
{
	if (this->arr.size() < 2)
		throw std::runtime_error("Size < 2");
	std::vector<int> temp(this->arr.size());
	std::copy(this->arr.begin(), this->arr.end(), temp.begin());
	std::sort(temp.begin(), temp.end());
	int res = temp[1] - temp[0];
	for (size_t i = 0; i < temp.size(); i++)
		if (temp[i + 1] && (temp[i + 1] - temp[i]) < res)
			res = temp[i + 1] - temp[i];
	return (res);
	
}

int	Span::longestSpan() const
{
	if (this->arr.size() < 2)
		throw std::runtime_error("Size < 2");
	return ((*std::max_element(this->arr.begin(), this->arr.end())) - (*std::min_element(this->arr.begin(), this->arr.end())));
}
