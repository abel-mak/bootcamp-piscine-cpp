/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 14:34:48 by abel-mak          #+#    #+#             */
/*   Updated: 2021/06/08 14:58:02 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon
{
	private:
		std::string type;

	public:
		Weapon(std::string type);
		//~Weapon();
		const std::string	&getType(void);
		void				setType(std::string type);
};

#endif /* WEAPON_HPP */
