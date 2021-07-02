/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 20:19:05 by abel-mak          #+#    #+#             */
/*   Updated: 2021/06/30 17:35:43 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void) 
	: AWeapon(std::string("Power Fist"), 8, 50)
{
}

PowerFist::~PowerFist(void)
{
}

PowerFist	&PowerFist::operator=(PowerFist const &rhs)
{
	this->apcost = rhs.getAPCost();
	this->damage = rhs.getDamage();
	return (*this);
}

PowerFist::PowerFist(PowerFist const &src)
	: AWeapon(std::string("Power Fist"), 0, 0) 
{
	*this = src;
}

void	PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
