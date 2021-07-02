/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 19:12:13 by abel-mak          #+#    #+#             */
/*   Updated: 2021/06/30 17:35:07 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) 
	: AWeapon(std::string("Plasma Rifle"), 5, 21)
{
}

PlasmaRifle::~PlasmaRifle(void)
{
}

PlasmaRifle	&PlasmaRifle::operator=(PlasmaRifle const &rhs) 
{
	this->apcost = rhs.getAPCost();
	this->damage = rhs.getDamage();
	return (*this);
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &src)
	: AWeapon(std::string("Plasma Rifle"), 0, 0)
{
	*this = src;
}

void	PlasmaRifle::attack(void) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

