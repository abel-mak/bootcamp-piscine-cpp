/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 18:03:05 by abel-mak          #+#    #+#             */
/*   Updated: 2021/06/21 15:37:47 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	protected:
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
		ClapTrap(void);
		ClapTrap(const ClapTrap &src);
		ClapTrap	&operator=(const ClapTrap &rhs);
		~ClapTrap(void);
		ClapTrap(std::string name, int hitPoint, int maxHitPoint, 
				int energyPoints, int maxEnergyPoint, int level, 
				int meleeAttackDamage, int rangedAttackDamage, 
				int armorDamageReduction);
		int			getTrap(std::string what) const;
		std::string	getName(void) const;
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif /* CLAPTRAP_HPP */
