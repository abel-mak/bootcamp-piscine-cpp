/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 15:43:42 by abel-mak          #+#    #+#             */
/*   Updated: 2021/07/10 14:32:31 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template <typename T>
class Array
{
	class outOfBounds : public std::exception
	{
		virtual const char	*what() const throw()
		{
			return "out of bounds";
		}
	};
	private:
		T				*arr;
		unsigned int	len;
	public:
		Array(void);
		Array(Array const &src);
		Array(unsigned int n);
		virtual ~Array();
		Array			&operator=(Array const &rhs);
		T				&operator[](unsigned int pos) const;
		unsigned int	size(void) const;
};

template <typename T>
Array<T>::Array(void) : len(0)
{
	arr = 0;
}

template <typename T>
Array<T>::~Array(void)
{
	delete [] arr;
}

template <typename T>
Array<T>::Array(Array const &src) : arr(0), len(0)
{
	*this = src;
}

template <typename T>
Array<T>	&Array<T>::operator=(Array<T> const &rhs)
{
	unsigned int	i;

	if (this->arr != 0)
		delete this->arr;	
	this->arr = new T[rhs.len];
	i = 0;
	while (i < rhs.len) 
	{
		this->arr[i] = rhs.arr[i];
		i++;
	}
	this->len = rhs.len;
	return (*this);
}

template <typename T>
Array<T>::Array(unsigned int n) : len(n)
{
	unsigned int	i;

	this->arr = new T[n];
	i = 0;
	while (i < n)
	{
		this->arr[i] = 0;
		i++;
	}
}

template <typename T>
T	&Array<T>::operator[](unsigned int pos) const
{
	if (pos >= 0 && pos < this->len)
		return this->arr[pos];
	else
		throw Array<T>::outOfBounds();
}

template<typename T>
unsigned int	Array<T>::size(void) const
{
	return (this->len);
}

#endif /* ARRAY_HPP */
