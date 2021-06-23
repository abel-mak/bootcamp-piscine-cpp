/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 16:40:30 by abel-mak          #+#    #+#             */
/*   Updated: 2021/06/21 15:44:15 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void)
{
	std::cout << "SUP3R-TP " << "It's about to get magical!" << std::endl;
	return ;
}

SuperTrap::~SuperTrap(void)
{
	std::cout << "SUP3R-TP " << "Exploded!" << std::endl;
	return ;
}

SuperTrap::SuperTrap(const SuperTrap &src)
{
	*this = src;
}

SuperTrap::SuperTrap(std::string name) : FragTrap(100, 100, 20, 5),
	NinjaTrap(50, 50, 20)
{
	this->name = name;
	std::cout << "SUP3R-TP " << "It's about to get magical!" << std::endl;
}

SuperTrap	&SuperTrap::operator=(SuperTrap const &rhs)
{
	this->hitPoint = rhs.getTrap("hitPoint");
	this->maxHitPoint = rhs.getTrap("maxHitPoint");
	this->energyPoints = rhs.getTrap("energyPoints");
	this->maxEnergyPoint = rhs.getTrap("maxEnergyPoint");
	this->level = rhs.getTrap("level");
	this->meleeAttackDamage = rhs.getTrap("meleeAttackDamage");
	this->rangedAttackDamage = rhs.getTrap("rangedAttackDamage");
	this->armorDamageReduction = rhs.getTrap("armorDamageReduction");
	this->name = rhs.getName();
	return (*this);
}

void	SuperTrap::rangedAttack(std::string const &target)
{
	FragTrap::rangedAttack(target);
}

void	SuperTrap::meleeAttack(std::string const &target)
{
	NinjaTrap::meleeAttack(target);
}
