/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 14:59:23 by abel-mak          #+#    #+#             */
/*   Updated: 2021/06/08 15:36:06 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class HumanA
{
	private:
		std::string name;
		Weapon &wep;

	public:
		HumanA(std::string name, Weapon &wep);
		//~HumanA();
		void	attack(void);
};

#endif /* HUMANA_HPP */
