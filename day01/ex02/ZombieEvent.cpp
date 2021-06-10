/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 14:26:26 by abel-mak          #+#    #+#             */
/*   Updated: 2021/06/09 15:40:05 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <stdlib.h>

/*
 * srand if not used rand will return every time same number
 */

void	ZombieEvent::randomChump(void)
{
	Zombie *z;
	std::string names[5] = {"Walker", "Geek", "Lurker", "Biter", "Rotter"};
	
	srand (time(NULL));
	z = this->newZombie(names[rand() % 5]);
	z->announce();
	delete z;
}

void	ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(this->type, name));
}
