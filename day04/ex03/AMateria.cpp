/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 17:20:59 by abel-mak          #+#    #+#             */
/*   Updated: 2021/06/29 18:53:23 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
}

AMateria::~AMateria(void)
{
}

AMateria::AMateria(std::string const &type) :  _xp(0), type(type)
{
}

AMateria::AMateria(AMateria const &src)
{
	*this = src;
}

std::string	const &AMateria::getType(void) const
{
	return (this->type);
}

unsigned int	AMateria::getXp(void) const
{
	return (this->_xp);
}

void	AMateria::use(ICharacter &target)
{
	this->_xp += 10;
	if (this->type.compare("ice") == 0)
		std::cout << "* shoots an ice bolt at " << target.getName() << " *"
			<< std::endl;
	else if (this->type.compare("cure") == 0)
		std::cout << "* heals " << target.getName() << "’s wounds * " 
			<< std::endl;

}

AMateria	&AMateria::operator=(AMateria const &rhs)
{
	this->_xp = rhs.getXp();
	return (*this);
}
