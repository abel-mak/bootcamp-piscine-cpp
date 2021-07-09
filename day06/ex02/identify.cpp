/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 16:38:27 by abel-mak          #+#    #+#             */
/*   Updated: 2021/07/09 10:59:49 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base	*generate(void)
{
	int i;

	srand(time(NULL));
	i = rand() % 3;
	if (i == 0)
		return (new A);
	else if (i == 1)
		return (new B);
	else
		return (new C);
}

void	identify(Base* p)
{
	A	*pa;
	B	*pb;
	C	*pc;

	pa = dynamic_cast<A*>(p);
	if (pa != NULL)
	{
		std::cout << "A identified" << std::endl;
		return;
	}
	pb = dynamic_cast<B*>(p);
	if (pb != NULL)
	{
		std::cout << "B identified" << std::endl;
		return;
	}
	pc = dynamic_cast<C*>(p);
	if (pc != NULL)
	{
		std::cout << "C identified" << std::endl;
		return;
	}
}

void	identify(Base &p)
{
	try
	{
		A	&pa = dynamic_cast<A&>(p);
		static_cast<void>(pa);
		std::cout << "A identified" << std::endl;
		return ;
	}
	catch(std::exception &e)
	{
	}
	try
	{
		B	&pb = dynamic_cast<B&>(p);
		static_cast<void>(pb);
		std::cout << "B identified" << std::endl;
		return ;
	}
	catch(std::exception &e)
	{
	}
	try
	{
		C	&pc = dynamic_cast<C&>(p);
		static_cast<void>(pc);
		std::cout << "C identified" << std::endl;
		return ;
	}
	catch(std::exception &e)
	{
	}
}
