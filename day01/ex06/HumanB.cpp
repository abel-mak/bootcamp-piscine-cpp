/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 15:36:01 by abel-mak          #+#    #+#             */
/*   Updated: 2021/06/08 15:56:00 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)
{
}

void	HumanB::setWeapon(Weapon &wep)
{
	this->wep = &wep;
}

void	HumanB::attack(void)
{
	std::cout << this->name << " " << " attacks with his " 
		<< this->wep->getType() << std::endl;
}
