/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 14:02:01 by abel-mak          #+#    #+#             */
/*   Updated: 2021/06/07 15:13:28 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string type, std::string name) : type(type), name(name)
{
}

void	Zombie::announce(void) const
{
	std::cout << "<" << this->name << " " << "(" << this->type << ")" << ">"
		<< " Chaaaaarge..." << std::endl;
}
