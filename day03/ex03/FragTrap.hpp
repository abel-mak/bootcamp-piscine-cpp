/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 14:30:03 by abel-mak          #+#    #+#             */
/*   Updated: 2021/06/21 15:35:11 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:


	public:
		FragTrap(void);
		FragTrap(const FragTrap &src);
		FragTrap	&operator=(const FragTrap &rhs);
		~FragTrap(void);
		FragTrap(std::string name);
		void	rangedAttack(std::string const &target);
		void	meleeAttack(std::string const &target);
		void	vaulthunter_dot_exe(std::string const &target);
};

#endif /* FRAGTRAP_HPP */
