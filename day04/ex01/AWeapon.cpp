/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 13:04:02 by abel-mak          #+#    #+#             */
/*   Updated: 2021/06/27 15:27:13 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(void)
{
}

AWeapon::AWeapon(std::string const &name, int apcost, int damage) 
	: name(name), apcost(apcost), damage(damage)
{
}

AWeapon::~AWeapon(void)
{
}

std::string const &AWeapon::getName(void) const
{
	return (this->name);
}

int	AWeapon::getAPCost(void) const
{
	return (this->apcost);
}

int	AWeapon::getDamage(void) const
{
	return (this->damage);
}

//name is const

std::ostream &operator<<(std::ostream &o, AWeapon const &input)
{
	o << "name: "  << input.getName() << " "
		 << "apcost: " << input.getAPCost() << " " 
		<< "damage: " << input.getDamage() << " "; 
		return (o);
}

AWeapon	&AWeapon::operator=(AWeapon const &rhs)
{
	this->apcost = rhs.getAPCost();
	this->damage = rhs.getDamage();
	return (*this);
}

AWeapon::AWeapon(AWeapon const &src)
{
	*this = src;
}
