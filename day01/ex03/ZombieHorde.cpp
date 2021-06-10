/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 17:08:45 by abel-mak          #+#    #+#             */
/*   Updated: 2021/06/09 15:44:16 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ZombieHorde.hpp"

ZombieHorde::~ZombieHorde(void)
{
	int i;

	i = 0;
	while (this->ZombieArr[i] != NULL)
	{
		delete this->ZombieArr[i];
		i++;
	}
	delete [] ZombieArr;
}

ZombieHorde::ZombieHorde(int n)
{
	int i;
	std::string names[5] = {"Walker", "Geek", "Lurker", "Biter", "Rotter"};

	if (n < 0)
		n = 0;
	srand (time(NULL));
	this->ZombieArr = new Zombie* [n + 1];
	i = 0;
	while (i < n)
	{
		this->ZombieArr[i] = new Zombie("killer", names[rand() % 5]); 
		i++;
	}
	this->ZombieArr[i] = NULL;
}

void	ZombieHorde::announce(void)
{
	int i;

	i = 0;
	while (this->ZombieArr[i] != NULL)
	{
		ZombieArr[i]->announce();
		i++;
	}
}

