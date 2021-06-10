/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 14:58:21 by abel-mak          #+#    #+#             */
/*   Updated: 2021/06/08 15:56:04 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


HumanA::HumanA(std::string name, Weapon &wep) : name(name), wep(wep)
{
}

void	HumanA::attack(void)
{
	std::cout << this->name << " " << " attacks with his " 
		<< this->wep.getType() << std::endl;
}

