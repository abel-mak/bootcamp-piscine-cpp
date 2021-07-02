/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 17:12:57 by abel-mak          #+#    #+#             */
/*   Updated: 2021/07/01 14:42:39 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
}

Character::Character(std::string const &name) 
	: name(name), ap(40), weapon(0),  diedEnemy(0), eCount(0)
{
}

std::string const	&Character::getName(void) const
{
	return (this->name);
}

Character::Character(Character const &src)
{
	*this = src;
}

Character	&Character::operator=(Character const &rhs)
{
	int		i;

	if (rhs.getDied() != 0)
	{
		this->diedEnemy = new Enemy*[rhs.geteCount()];
		i = 0;
		while (i < rhs.geteCount())
		{
			this->diedEnemy[i] = rhs.getDied()[i]; 
			i++;
		}
	}
	else
		this->diedEnemy = 0;
	this->eCount = rhs.geteCount();
	this->weapon = rhs.getWeapon();
	this->ap = rhs.getAp();
	this->name = rhs.getName();
	return (*this);
}

Character::~Character(void)
{
	if (this->diedEnemy != 0)
		delete [] this->diedEnemy;
}

void	Character::recoverAP(void)
{
	this->ap += 10;
	if (this->ap > 40)
		this->ap = 40;
}

void	Character::attack(Enemy *enemy)
{
	if (weapon != 0 && this->ap >= weapon->getAPCost() && enemy != 0 
			&& this->findDied(enemy) == 0)
	{
		this->ap -= weapon->getAPCost();
		std::cout << this->name << " attacks " << enemy->getType() << " with a "
			<< weapon->getName() << std::endl;
		weapon->attack();
		enemy->takeDamage(weapon->getDamage());
		if (enemy->getHp() == 0)
		{
			this->addDiedEnemy(enemy);
			delete enemy;
		}
	}
}

void	Character::equip(AWeapon *weapon)
{
	this->weapon = weapon;
}

AWeapon	*Character::getWeapon(void) const
{
	return (this->weapon);
}

int		Character::getAp(void) const
{
	return (this->ap);
}

int		Character::geteCount(void) const
{
	return (this->eCount);
}

void	Character::addDiedEnemy(Enemy *e)
{
	Enemy	**tmp;
	int		i;

	tmp = this->diedEnemy;
	this->diedEnemy = new Enemy*[this->eCount + 1];
	i = 0;
	while (i < this->eCount && tmp != 0)
	{
		this->diedEnemy[i] = tmp[i];
		i++;
	}
	this->diedEnemy[i] = e;
	this->eCount++;
	if (tmp != 0)
		delete [] tmp;
}

Enemy	**Character::getDied(void) const
{
	return (this->diedEnemy);
}

int		Character::findDied(Enemy *e) const
{
	int i;

	i = 0;
	while (i < this->eCount)
	{
		if (e == this->diedEnemy[i])
			return (1);
		i++;
	}
	return (0);
}

std::ostream &operator<<(std::ostream &o, Character const &input)
{
	o << input.getName() << " has " << input.getAp() << " AP and " 
		<< ((input.getWeapon() == 0) ?
				"is unarmed" :  "wields a " + input.getWeapon()->getName())
		<< std::endl;
	return (o);
}
