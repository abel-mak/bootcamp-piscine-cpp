/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 17:13:11 by abel-mak          #+#    #+#             */
/*   Updated: 2021/07/01 14:58:30 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "Enemy.hpp"
#include "AWeapon.hpp"

class Character
{
	private:
		Character(void);
		std::string		name;
		int				ap;
		AWeapon			*weapon;
		Enemy			**diedEnemy;
		int				eCount;

	public:
		Character(std::string const &name);
		Character(Character const &src);
		virtual ~Character(void);
		Character			&operator=(Character const &rhs);
		std::string const	&getName(void) const;
		void				recoverAP(void);
		void				attack(Enemy *enemy);
		void				equip(AWeapon *weapon);
		AWeapon				*getWeapon(void) const;
		int					getAp(void) const;
		int					geteCount(void) const;
		void				addDiedEnemy(Enemy *e);
		Enemy				**getDied(void) const;
		int					findDied(Enemy *e) const;
};

std::ostream &operator<<(std::ostream &o, Character const &input);

#endif /* CHARACTER_HPP */
