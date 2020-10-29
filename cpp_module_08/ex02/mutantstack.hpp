#pragma once

/*
**==========================
**		Includes
**==========================
*/
#include <iostream>
#include <deque>
#include <stack>
#include <iterator>

/*
* https://en.cppreference.com/w/cpp/container/stack
*/

template < class T, class Container = std::deque<T> >
class MutantStack: public std::stack<T, Container>
{
	public:
		MutantStack() {}
		MutantStack(MutantStack<T, Container> const &other) : std::stack<T,Container>() 
		{
			*this = other;
		}
		~MutantStack() {}

		MutantStack<T, Container> &operator=(MutantStack<T, Container> const &other) 
		{
			*this = other;
			return (*this);
		}

		// https://en.cppreference.com/w/cpp/iterator/iterator
		typedef typename std::stack<T, Container>::container_type::iterator iterator;
		iterator begin() 
		{
			return (this->c.begin());
		}

		iterator end() 
		{
			return (this->c.end());
		}

		typedef typename std::stack<T, Container>::container_type::const_iterator const_iterator;
		const_iterator begin() const
		{
			return (this->c.begin());
		}

		const_iterator end() const
		{
			return (this->c.end());
		}

		// https://en.cppreference.com/w/cpp/iterator/reverse_iterator
		typedef typename std::stack<T, Container>::container_type::reverse_iterator reverse_iterator;
		reverse_iterator rbegin() 
		{
			return (this->c.rbegin());
		}

		reverse_iterator rend() 
		{
			return (this->c.rend());
		}

		typedef typename std::stack<T, Container>::container_type::const_reverse_iterator const_reverse_iterator;
		const_reverse_iterator rbegin() const 
		{
			return (this->c.rbegin());
		}

		const_reverse_iterator rend() const
		{
			return (this->c.rend());
		}
};

