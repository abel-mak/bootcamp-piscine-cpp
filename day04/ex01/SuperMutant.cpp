/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 14:39:22 by abel-mak          #+#    #+#             */
/*   Updated: 2021/06/30 18:56:09 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, std::string("Super Mutant"))
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &src) : Enemy(0, 
		std::string("Super Mutant"))
{
	*this = src;
}

SuperMutant	&SuperMutant::operator=(SuperMutant const &rhs)
{
	this->hp = rhs.getHp();
	return (*this);
}

SuperMutant::~SuperMutant(void)
{
	std::cout << "Aaargh..." << std::endl;
}

void	SuperMutant::takeDamage(int damage)
{
	if (damage < 3)
		return ;
	damage = damage - 3;	
	if (damage > this->hp)
		this->hp = 0;
	else	
		this->hp = this->hp - damage;
}
