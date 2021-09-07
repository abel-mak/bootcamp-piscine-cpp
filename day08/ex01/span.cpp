/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 16:28:51 by abel-mak          #+#    #+#             */
/*   Updated: 2021/07/13 11:39:40 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <algorithm>
#include <stdexcept>

Span::Span(void) : n(0), nums(new std::vector<int>)
{
}

Span::~Span(void)
{
	delete this->nums;
}

Span::Span(int const &n) : n(n), nums(new std::vector<int>) 
{
}

void	Span::addNumber(int number)
{
	if (this->nums->size() < n)
		this->nums->push_back(number);
	else
		throw std::runtime_error("already filled!");
}

Span	&Span::operator=(Span const &rhs)
{
	if (this->n >= rhs.n)
		*(this->nums) = *(rhs.nums);
	return (*this);
}

Span::Span(Span const &src) : n(src.n)
{
	*this = src;
}

void	Span::addNumber(
				std::vector<int>::iterator b, std::vector<int>::iterator e)
{
	if ((unsigned long)std::distance(b, e) > n - nums->size())
		throw std::runtime_error("Error: range of iterator!");
	else
		nums->insert(nums->end(), b, e);
}

int	Span::shortestSpan(void)
{
	std::vector<int>	tmp;
	int					i;
	int					diff;

	if (this->nums->size() > 1)
	{
		tmp = *nums;
		sort(tmp.begin(), tmp.end());
		diff = tmp[1] - tmp[0];
		i = 1;
		while ((size_t)i < tmp.size())
		{
			if (tmp[i] - tmp[i - 1] < diff)
				diff = tmp[i] - tmp[i - 1];
			i++;
		}
		return (diff);
	}
	throw std::runtime_error("no span!");
}

int	Span::longestSpan(void)
{
	std::vector<int>	tmp;

	if (this->nums->size() > 1)
	{
		tmp = *nums;
		sort(tmp.begin(), tmp.end());
		return (*(--tmp.end())- *(tmp.begin()));
	}
	throw std::runtime_error("no span!");
}
