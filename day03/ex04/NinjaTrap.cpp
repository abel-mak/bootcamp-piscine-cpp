/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:49:46 by abel-mak          #+#    #+#             */
/*   Updated: 2021/06/21 16:07:41 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name)
	: ClapTrap(name, 60, 60, 120, 120, 1, 60, 5, 0)
{
	std::cout << "NINJ4-TP " << "Recompiling my combat code!" << std::endl;
	return ;
}

NinjaTrap::NinjaTrap(int energyPoints, int maxEnergyPoint,
		int meleeAttackDamage)
{
	this->energyPoints = energyPoints;
	this->maxEnergyPoint = maxEnergyPoint;
	this->meleeAttackDamage = meleeAttackDamage;
	std::cout << "NINJ4-TP " << "Recompiling my combat code!" << std::endl;
	return ;
}

NinjaTrap::NinjaTrap(void)
{
	std::cout << "NINJ4-TP " << "Recompiling my combat code!" << std::endl;
	return ;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "NINJ4-TP " << "If only my chassis... weren't made of " << 
		"recycled human body parts!!" << std::endl;
	return ;
}

NinjaTrap::NinjaTrap(const NinjaTrap &src)
{
	*this = src;
}

NinjaTrap	&NinjaTrap::operator=(NinjaTrap const &rhs)
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

void	NinjaTrap::meleeAttack(std::string const &target)
{
	std::cout << "NINJ4-TP " << this->getName() << " attacks " << target
		<< " melee, causing " << this->getTrap("meleeAttackDamage")
		<< " points of damage!" << std::endl;
}

void	NinjaTrap::ninjaShoebox(FragTrap &frag)
{
	frag.takeDamage(20);
	std::cout << "NINJ4-TP " << this->getName() 
		<< " - Now you're sorted! " << frag.getName()<< std::endl;
}

void	NinjaTrap::ninjaShoebox(ScavTrap &scav)
{
	scav.takeDamage(20);
	std::cout << "NINJ4-TP " << this->getName() 
		<< " - One down, any other takers? " << scav.getName() << std::endl;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap &ninja)
{
	ninja.takeDamage(20);
	std::cout << "NINJ4-TP " << this->getName() 
		<< " - Don't tell me that wasn't awesome! " << ninja.getName() 
		<< std::endl;
}

void	NinjaTrap::ninjaShoebox(ClapTrap &clap)
{
	clap.takeDamage(20);
	std::cout << "NINJ4-TP " << this->getName() 
		<< " - Wait, did I really do that?! " << clap.getName()
		<< std::endl;
}


