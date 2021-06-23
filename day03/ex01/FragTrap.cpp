/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 18:38:28 by abel-mak          #+#    #+#             */
/*   Updated: 2021/06/21 13:50:27 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
: hitPoint(100), maxHitPoint(100), energyPoints(100),
	maxEnergyPoint(100), level(1),
	meleeAttackDamage(30), rangedAttackDamage(20),
	armorDamageReduction(5), name(name)
{
	std::cout << "FR4G-TP " << "Let's get this party started!" << std::endl;
	return ;
}

FragTrap::FragTrap(void)
{
	std::cout << "FR4G-TP " << "Let's get this party started!" << std::endl;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FR4G-TP " << "party ended!" << std::endl;
	return ;
}

FragTrap::FragTrap(const FragTrap &src)
{
	*this = src;
}

int		FragTrap::getFragTrap(std::string what) const
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

std::string FragTrap::getName(void) const
{
	return (this->name);
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs)
{
	this->hitPoint = rhs.getFragTrap("hitPoint");
	this->maxHitPoint = rhs.getFragTrap("maxHitPoint");
	this->energyPoints = rhs.getFragTrap("energyPoints");
	this->maxEnergyPoint = rhs.getFragTrap("maxEnergyPoint");
	this->level = rhs.getFragTrap("level");
	this->meleeAttackDamage = rhs.getFragTrap("meleeAttackDamage");
	this->rangedAttackDamage = rhs.getFragTrap("rangedAttackDamage");
	this->armorDamageReduction = rhs.getFragTrap("armorDamageReduction");
	this->name = rhs.getName();
	return (*this);
}

void	FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->getName() << " attacks " << target
		<< " at range, causing " << this->getFragTrap("rangedAttackDamage") 
		<< " points of damage!" << std::endl;
}

void	FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->getName() << " attacks " << target
		<< " melee, causing " << this->getFragTrap("meleeAttackDamage")
		<< " points of damage!" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	this->hitPoint -= (amount - this->armorDamageReduction);
	if (this->hitPoint < 0 || this->hitPoint > this->maxHitPoint)
		this->hitPoint = 0;
	std::cout << "FR4G-TP " << this->getName() 
		<< " - That looks like it hurts!" << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	this->hitPoint += amount;
	if (this->hitPoint < 0 || this->hitPoint > this->maxHitPoint)
		this->hitPoint = this->maxHitPoint;
	std::cout << "FR4G-TP " << this->getName() 
		<< " - I found health!" << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	std::string	attacks[5] = {
		"Drop the Hammer",
		"Killbot",
		"Repulsive",
		"Hyperion Punch",
		"Second Wind"
	};

	if (this->energyPoints < 25)
		std::cout << "FR4G-TP " << "OOPS! not enough energy." << std::endl;
	else
	{
		std::cout << "FR4G-TP " << this->getName() << " attacks " << target 
			<< " with " << attacks[rand() % 5] << " attack" << std::endl;
		this->energyPoints -= 25;
	}
}
