#pragma once

/*
**==========================
**		Includes
**==========================
*/
# include <exception>
# include <cstdlib>

template <typename T>
class Array
{
	private:
		unsigned int _size;
		T *arr;
	public:
		Array();
		Array(unsigned int n);
		Array(Array<T> const &other);
		~Array();

		Array<T> &operator=(Array<T> const &other);

		T &operator[](unsigned int index);
		unsigned int size() const;

		class WrongIndexOfArgv: public std::exception
		{
			virtual const char* what() const throw();
		};
};

template<typename T>
Array<T>::Array()
{
	this->_size = 0;
	this->arr = NULL;
}

template<typename T>
Array<T>::Array(unsigned int n)
{
	this->_size = n;
	this->arr = new T[n]();
}

template<typename T>
Array<T>::Array(Array<T> const &other)
{
	if (other._size > 0)
	{
		this->arr = new T[other._size]();
		for (unsigned int i = 0; i < other._size; i++)
			this->arr[i] = other.arr[i];
		this->_size = other._size;
	}
	else
	{
		this->_size = 0;
		this->arr = NULL;
	}
}

template<typename T>
Array<T>::~Array()
{
	if (this->_size > 0)
		delete[] this->arr;
}

template<typename T>
const char* Array<T>::WrongIndexOfArgv::what() const throw()
{
	return "WrongIndexOfArgv";
}

template<typename T>
Array<T> &Array<T>::operator=(Array<T> const &other)
{
	if (this->_size > 0)
		delete[] this->arr;
	if (other._size > 0)
	{
		this->arr = new T[other._size]();
		for (unsigned int i = 0; i < other._size; i++)
			this->arr[i] = other.arr[i];
		this->_size = other._size;
	}
	else
	{
		this->_size = 0;
		this->arr = NULL;
	}
	return (*this);
}

template<typename T>
T &Array<T>::operator[](unsigned int index)
{
	if (index >= this->_size)
		throw Array<T>::WrongIndexOfArgv();
	return (this->arr[index]);
}

template<typename T>
unsigned int Array<T>::size() const
{
	return (this->_size);
}
