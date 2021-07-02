/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 16:54:55 by abel-mak          #+#    #+#             */
/*   Updated: 2021/06/30 18:58:37 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"


RadScorpion::RadScorpion(void) : Enemy(80, std::string("RadScorpion"))
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &src) 
	: Enemy(0, std::string("RadScorpion"))
{
	*this = src;
}

RadScorpion	&RadScorpion::operator=(RadScorpion const &rhs)
{
	this->hp = rhs.getHp();
	return (*this);
}

RadScorpion::~RadScorpion(void)
{
	std::cout << "* SPROTCH *" << std::endl;
}
