/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 10:04:37 by abel-mak          #+#    #+#             */
/*   Updated: 2021/06/30 17:03:28 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(void)
{
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
}

Peon	&Peon::operator=(Peon const &rhs)
{
	this->name = rhs.getName();
	return (*this);
}

Peon::Peon(Peon const &src)
{
	*this = src;
}

void	Peon::getPolymorphed(void) const
{
	std::cout << this->name << " has been turned into a pink pony!"
		<< std::endl;
}

