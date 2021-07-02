/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 13:02:12 by abel-mak          #+#    #+#             */
/*   Updated: 2021/06/27 15:26:53 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>

class AWeapon
{
	protected:
		AWeapon(void);
		std::string const	name;
		int					apcost;
		int					damage;

	public:
		AWeapon(AWeapon const &src);
		virtual ~AWeapon(void);
		AWeapon		&operator=(AWeapon const &rhs);
		AWeapon(std::string const &name, int apcost, int damage);
		std::string const	&getName(void) const;
		int					getAPCost(void) const;
		int					getDamage(void) const; 
		virtual void		attack(void) const = 0;
};

std::ostream &operator<<(std::ostream &o, AWeapon const &input);

#endif /* AWEAPON_HPP */
