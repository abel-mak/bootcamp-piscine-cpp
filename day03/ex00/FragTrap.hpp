/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 18:38:40 by abel-mak          #+#    #+#             */
/*   Updated: 2021/06/21 13:44:26 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>

class FragTrap
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
		FragTrap(void);
		FragTrap(const FragTrap &src);
		FragTrap	&operator=(FragTrap const &rhs);
		~FragTrap(void);
		FragTrap(std::string name);
		int			getFragTrap(std::string what) const;
		std::string	getName(void) const;
		void		rangedAttack(std::string const &target);
		void		meleeAttack(std::string const &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		void		vaulthunter_dot_exe(std::string const &target);
};

#endif /* FRAGTRAP_HPP */
