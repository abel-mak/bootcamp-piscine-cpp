/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 17:02:18 by abel-mak          #+#    #+#             */
/*   Updated: 2021/06/16 17:59:29 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>

class ScavTrap
{
	private:
		int	hitPoint;
		int	maxHitPoint;
		int	energyPoints;
		int	maxEnergyPoint;
		int	level;
		int	meleeAttackDamage;
		int	rangedAttackDamage;
		int	armorDamageReduction;
		std::string name;

	public:
		ScavTrap(void);
		ScavTrap(const ScavTrap &src);
		ScavTrap	&operator=(const ScavTrap &rhs);
		~ScavTrap(void);
		ScavTrap(std::string name);
		int			getScavTrap(std::string what) const;
		std::string	getName(void) const;
		void		rangedAttack(std::string const &target);
		void		meleeAttack(std::string const &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		void		challengeNewcomer(void);
};

#endif /* SCAVTRAP_HPP */
