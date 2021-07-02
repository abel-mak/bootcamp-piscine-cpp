/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 13:30:24 by abel-mak          #+#    #+#             */
/*   Updated: 2021/07/01 16:08:35 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
}

Character::~Character(void)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (this->inventory[i] != 0)
			delete inventory[i];
		i++;
	}
	delete [] this->inventory;
}

Character::Character(Character const &src) : inventory(new AMateria*[4])
{
	int i;
	
	i = 0;
	while (i < 4)
	{
		this->inventory[i] = 0;
		i++;
	}
	*this = src;
}

Character::Character(std::string const &name) 
	: name(name), inventory(new AMateria*[4])
{
	int i;
	
	i = 0;
	while (i < 4)
	{
		this->inventory[i] = 0;
		i++;
	}
}

std::string	const	&Character::getName(void) const
{
	return (this->name);
}

//The Character possesses an inventory of 4 Materia at most, empty at start. 
//He’ll equip the Materia in slots 0 to 3, in this order.
//In case we try to equip a Materia in a 
//full inventory, or use/uneqip a nonexistent Materia, don’t do a thing.

void	Character::equip(AMateria *m)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (inventory[i] == 0)
		{
			inventory[i] = m;
			return ;
		}
		i++;
	}
	std::cout << "equip: " <<"Not enought space in the inventory!" 
		<< std::endl;
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
	{
		if (this->inventory[idx] != 0)
			this->inventory[idx] = 0;
		else
			std::cout << "unequip: " << "nothing in " << idx << std::endl;
	}
	else
		std::cout << "unequip: " << "out of bound idx" << std::endl;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4)
	{
		if (this->inventory[idx] != 0)
			this->inventory[idx]->use(target);
		else
			std::cout << "equip: " << "nothing in " << idx << std::endl;
	}
	else
		std::cout << "equip: " << "out of bound idx" << std::endl;
}

AMateria	**Character::getInv(void) const
{
	return (this->inventory);
}

Character	&Character::operator=(Character const &rhs)
{
	AMateria	*tmp;
	int			i;

	i = 0;
	this->name = rhs.getName();
	while (i < 4)
	{
		tmp = this->inventory[i];
		this->inventory[i] = 
			(rhs.getInv()[i] != 0) ? (rhs.getInv())[i]->clone() : 0;
		if (tmp != 0)
			delete tmp;
		i++;
	}
	return(*this);
}
