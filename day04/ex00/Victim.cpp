/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 15:31:06 by abel-mak          #+#    #+#             */
/*   Updated: 2021/06/30 17:03:35 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(void)
{

}

Victim::Victim(std::string name) : name(name)
{
	std::cout << "Some random victim called " << this->name << " just appeared!" 
		<< std::endl;
}

Victim::~Victim(void)
{
	std::cout << "Victim " << this->name << " just died for no apparent reason!"
		<< std::endl;
}

Victim::Victim(Victim const &src)
{
	*this = src;
}

std::string Victim::getName(void) const
{
	return (this->name);
}

Victim	&Victim::operator=(Victim const &rhs)
{
	this->name = rhs.getName();
	return (*this);
}

void	Victim::getPolymorphed(void) const
{
	std::cout << this->name <<  " has been turned into a cute little sheep!"
		<< std::endl;
}

std::ostream	&operator<<(std::ostream &o, Victim const &input)
{
	o << "I'm " << input.getName() << " and I like otters!" << std::endl;
	return (o);
}

