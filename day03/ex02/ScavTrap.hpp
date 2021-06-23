/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 18:51:27 by abel-mak          #+#    #+#             */
/*   Updated: 2021/06/21 15:32:15 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:

	public:
		ScavTrap(void);
		ScavTrap(const ScavTrap &src);
		ScavTrap	&operator=(const ScavTrap &rhs);
		~ScavTrap(void);
		ScavTrap(std::string name);
		void	rangedAttack(std::string const &target);
		void	meleeAttack(std::string const &target);
		void	challengeNewcomer(void);

};

#endif /* SCAVTRAP_HPP */
