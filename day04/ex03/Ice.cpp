/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 10:49:52 by abel-mak          #+#    #+#             */
/*   Updated: 2021/07/01 15:47:36 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
}

Ice::~Ice(void)
{
}

Ice::Ice(Ice const &src) : AMateria("ice")
{
	*this=src;
}

Ice &Ice::operator=(Ice const &rhs)
{
	this->_xp = rhs.getXp();
	return (*this);
}

Ice	*Ice::clone(void) const
{
	return (new Ice());
}
