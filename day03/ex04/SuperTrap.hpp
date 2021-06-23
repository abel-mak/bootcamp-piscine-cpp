/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 16:36:22 by abel-mak          #+#    #+#             */
/*   Updated: 2021/06/21 15:44:13 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

/*
 * Super Class:The class whose properties are inherited by sub class is called 
 * Super class.
 */

class SuperTrap : public FragTrap, public NinjaTrap
{
	private:

	public:
		SuperTrap(void);
		SuperTrap(const SuperTrap &src);
		SuperTrap	&operator=(const SuperTrap &rhs);
		~SuperTrap(void);
		SuperTrap(std::string name);
		void	rangedAttack(std::string const &target);
		void	meleeAttack(std::string const &target);
};

#endif /* SUPERTRAP_HPP */
