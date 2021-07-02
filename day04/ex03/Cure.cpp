/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 11:19:56 by abel-mak          #+#    #+#             */
/*   Updated: 2021/07/01 15:45:28 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
}

Cure::Cure(Cure const &src) : AMateria("cure")
{
	*this = src;
}

Cure::~Cure(void)
{
}

Cure	&Cure::operator=(Cure const &rhs)
{
	this->_xp = rhs.getXp();
	return (*this);
}

Cure	*Cure::clone(void) const
{
	return (new Cure());
}
