/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 17:02:45 by abel-mak          #+#    #+#             */
/*   Updated: 2021/06/21 15:37:49 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
	: ClapTrap(name, 100, 100, 50, 50, 1, 20, 15, 3)
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

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs)
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

void	ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "SC4V-TP " << this->getName() << " attacks " << target
		<< " at range, causing " << this->getTrap("rangedAttackDamage") 
		<< " points of damage!" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "SC4V-TP " << this->getName() << " attacks " << target
		<< " melee, causing " << this->getTrap("meleeAttackDamage")
		<< " points of damage!" << std::endl;
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
