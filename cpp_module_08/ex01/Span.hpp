#pragma once

/*
**==========================
**		Includes
**==========================
*/
#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>
#include <cstdlib>

class Span
{
	private:
		Span();

		std::vector<int> arr;
		unsigned int _max_size;
	public:
		Span(unsigned int num);
		Span(Span const &other);
		~Span();

		Span &operator=(Span const &other);

		void	addNumber(long int x);
		int		shortestSpan() const;
		int		longestSpan() const;
};
