/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 18:38:28 by abel-mak          #+#    #+#             */
/*   Updated: 2021/06/21 15:29:05 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
: ClapTrap(name, 100, 100, 100, 100, 1, 30, 20, 5)
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

FragTrap	&FragTrap::operator=(FragTrap const &rhs)
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

void	FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->getName() << " attacks " << target
		<< " at range, causing " << this->getTrap("rangedAttackDamage") 
		<< " points of damage!" << std::endl;
}

void	FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->getName() << " attacks " << target
		<< " melee, causing " << this->getTrap("meleeAttackDamage")
		<< " points of damage!" << std::endl;
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
