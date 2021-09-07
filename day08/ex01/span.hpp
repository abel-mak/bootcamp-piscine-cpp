/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 16:28:59 by abel-mak          #+#    #+#             */
/*   Updated: 2021/07/13 10:51:31 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <iostream>

class Span
{
	private:
		unsigned int const	n;
		std::vector<int>	*nums;
		Span(void);
		
	public:
		Span(Span const &src);
		Span(int const &n);
		virtual ~Span(void);
		Span	&operator=(Span const &rhs);
		void	addNumber(int number);
		void	addNumber(
				std::vector<int>::iterator b, std::vector<int>::iterator e);
		int		shortestSpan(void);
		int		longestSpan(void);
};

#endif /* SPAN_HPP */
