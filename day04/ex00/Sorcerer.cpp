/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 13:52:52 by abel-mak          #+#    #+#             */
/*   Updated: 2021/06/30 17:01:59 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) 
	: name(name), title(title)
{
	std::cout << name << ", " << title << ", " << "is born!" << std::endl;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << this->name << ", " << this->title << ", " << "is dead. "
		<< "Consequences will never be the same!" << std::endl;
}

Sorcerer::Sorcerer(void)
{
}

Sorcerer	&Sorcerer::operator=(const Sorcerer &rhs)
{
	this->name = rhs.getSor("name");
	this->title = rhs.getSor("title");
	return (*this);
}

Sorcerer::Sorcerer(Sorcerer const &src)
{
	*this = src;
}

std::string	Sorcerer::getSor(std::string const var) const
{
	if (var.compare("name") == 0)
		return (this->name);
	else if (var.compare("title") == 0)
		return (this->title);
	return ("");
}

std::ostream	&operator<<(std::ostream &o, const Sorcerer &src)
{
	o << "I'am a " << src.getSor("name")  << ", " << src.getSor("title")
		<< ", " << "and I like ponies!" << std::endl;
	return (o);
}

void	Sorcerer::polymorph(Victim const &vict)
{
	vict.getPolymorphed();
}
