/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:44:12 by abel-mak          #+#    #+#             */
/*   Updated: 2021/06/21 16:07:51 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
	private:

	public:
		NinjaTrap(void);
		NinjaTrap(const NinjaTrap &src);
		NinjaTrap	&operator=(const NinjaTrap &rhs);
		~NinjaTrap(void);
		NinjaTrap(std::string name);
		NinjaTrap(int energyPoints, int maxEnergyPoint,
				int meleeAttackDamage);
		void	ninjaShoebox(FragTrap &frag);
		void	ninjaShoebox(ScavTrap &scav);
		void	ninjaShoebox(NinjaTrap &ninja);
		void	meleeAttack(std::string const &target);
		void	ninjaShoebox(ClapTrap &clap);

};

#endif /* NINJATRAP_HPP */
