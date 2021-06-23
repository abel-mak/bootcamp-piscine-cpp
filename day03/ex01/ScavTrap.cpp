/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 17:02:45 by abel-mak          #+#    #+#             */
/*   Updated: 2021/06/21 14:56:52 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
: hitPoint(100), maxHitPoint(100), energyPoints(50),
	maxEnergyPoint(50), level(1),
	meleeAttackDamage(20), rangedAttackDamage(15),
	armorDamageReduction(3), name(name)
{
	std::cout << "SC4V-TP " << "Hey everybody! Check out my package!" 
		<< std::endl;
	return ;
}

ScavTrap::ScavTrap(void)
{
	std::cout << "SC4V-TP " << "Hey everybody! Check out my package!" 
		<< std::endl;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "SC4V-TP " << "hey i'm being destructed!" << std::endl;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
	*this = src;
}

int		ScavTrap::getScavTrap(std::string what) const
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

std::string ScavTrap::getName(void) const
{
	return (this->name);
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs)
{
	this->hitPoint = rhs.getScavTrap("hitPoint");
	this->maxHitPoint = rhs.getScavTrap("maxHitPoint");
	this->energyPoints = rhs.getScavTrap("energyPoints");
	this->maxEnergyPoint = rhs.getScavTrap("maxEnergyPoint");
	this->level = rhs.getScavTrap("level");
	this->meleeAttackDamage = rhs.getScavTrap("meleeAttackDamage");
	this->rangedAttackDamage = rhs.getScavTrap("rangedAttackDamage");
	this->armorDamageReduction = rhs.getScavTrap("armorDamageReduction");
	this->name = rhs.getName();
	return (*this);
}

void	ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "SC4V-TP " << this->getName() << " attacks " << target
		<< " at range, causing " << this->getScavTrap("rangedAttackDamage") 
		<< " points of damage!" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "SC4V-TP " << this->getName() << " attacks " << target
		<< " melee, causing " << this->getScavTrap("meleeAttackDamage")
		<< " points of damage!" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	this->hitPoint -= (amount - this->armorDamageReduction);
	if (this->hitPoint < 0 || this->hitPoint > this->maxHitPoint)
		this->hitPoint = 0;
	std::cout << "SC4V-TP " << this->getName() 
		<< " - Ow hohoho, that hurts! Yipes!" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	this->hitPoint += amount;
	if (this->hitPoint < 0 || this->hitPoint > this->maxHitPoint)
		this->hitPoint = this->maxHitPoint;
	std::cout << "SC4V-TP " <<this->getName() 
		<< " - Health over here!" << std::endl;
}

void	ScavTrap::challengeNewcomer(void)
{
	std::string challenges[4] = {
		"Say 'Watt' Again: Deal 5000 electrocute damage",
		"I Just Want to Set the World on Fire: Deal 5000 burn damage",
		"I'm not Really a People Person: Kill 250 Human enemies",
		"How Much For The Planet?: Earn 9,999,999 Dollars",
	};

	std::cout << challenges[rand() % 4] << std::endl; 
}
