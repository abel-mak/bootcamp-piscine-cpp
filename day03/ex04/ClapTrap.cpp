/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 18:10:40 by abel-mak          #+#    #+#             */
/*   Updated: 2021/06/21 15:39:38 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name, int hitPoint, int maxHitPoint, 
		int energyPoints, int maxEnergyPoint, int level, int meleeAttackDamage,
		int rangedAttackDamage, int armorDamageReduction)
: hitPoint(hitPoint), maxHitPoint(maxHitPoint), energyPoints(energyPoints),
	maxEnergyPoint(maxEnergyPoint), level(level),
	meleeAttackDamage(meleeAttackDamage), 
	rangedAttackDamage(rangedAttackDamage),
	armorDamageReduction(armorDamageReduction), name(name)
{
	std::cout << "CL4P-TP " << "This time it'll be awesome, I promise!" 
		<< std::endl;
	return ;
}

ClapTrap::ClapTrap(void)
{
	std::cout << "CL4P-TP " << "This time it'll be awesome, I promise!" 
		<< std::endl;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "CL4P-TP " << "Why do I even feel pain?!" << std::endl;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	*this = src;
}

int		ClapTrap::getTrap(std::string what) const
{
	if (what.compare("hitPoint") == 0)
		return (this->hitPoint);
	else if (what.compare("maxHitPoint") == 0)
		return (this->maxHitPoint);
	else if (what.compare("energyPoints") == 0)
		return (this->energyPoints);
	else if (what.compare("maxEnergyPoint") == 0)
		return (this->maxEnergyPoint);
	else if (what.compare("level") == 0)
		return (this->level);
	else if (what.compare("meleeAttackDamage") == 0)
		return (this->meleeAttackDamage);
	else if (what.compare("rangedAttackDamage") == 0)
		return (this->rangedAttackDamage);
	else if (what.compare("armorDamageReduction") == 0)
		return (this->armorDamageReduction);
	return (-1);
}

std::string ClapTrap::getName(void) const
{
	return (this->name);
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs)
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

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->hitPoint -= (amount - this->armorDamageReduction);
	if (this->hitPoint < 0 || this->hitPoint > this->maxHitPoint)
		this->hitPoint = 0;
	std::cout << "CL4P-TP " << this->getName() 
		<< " - That looks like it hurts!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->hitPoint += amount;
	if (this->hitPoint < 0 || this->hitPoint > this->maxHitPoint)
		this->hitPoint = this->maxHitPoint;
	std::cout << "CL4G-TP " << this->getName()
		<< " - I found health!" << std::endl;
}
