/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 15:41:28 by abel-mak          #+#    #+#             */
/*   Updated: 2021/07/01 15:23:07 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void) : count(0), units(0)
{
}

int	Squad::getCount(void) const
{
	return (this->count);
}

ISpaceMarine	*Squad::getUnit(int n) const
{
	if (n < 0 || n >= count)
		return ((ISpaceMarine*)0);
	return (this->units[n]);
}

Squad::Squad(Squad const &src)
{
	*this = src;
}

Squad::~Squad(void)
{
	this->destroyUnit();
}

int	Squad::push(ISpaceMarine *unit)
{
	ISpaceMarine **tmp;
	int i;

	if (unit == 0 || this->find(unit) == 1)
		return (this->count);
	tmp = units;
	this->units = new ISpaceMarine*[count + 1];
	i = 0;
	while (i < this->count && tmp != 0)
	{
		this->units[i] = tmp[i];
		i++;
	}
	this->units[i] = unit;
	if (tmp != 0)
		delete tmp;
	this->count++;
	return (this->count);
}

int		Squad::find(ISpaceMarine *unit)
{
	int i;

	i = 0;
	while (i < this->count)
	{
		if (this->units[i] == unit)
			return (1);
		i++;
	}
	return (0);
}

void	Squad::destroyUnit(void)
{
	int i;

	if (this->count == 0)
		return ;
	i = 0;
	while (i < this->count)
	{
		delete this->units[i];
		i++;
	}
	delete [] this->units;
	this->units = (ISpaceMarine**)0;
	this->count = 0;
}

Squad	&Squad::operator=(Squad const &rhs)
{
	int	i;

	this->destroyUnit();
	this->units = new ISpaceMarine*[rhs.getCount()];
	i = 0;
	while (i < rhs.getCount())
	{
		this->units[i] = rhs.getUnit(i)->clone();
		i++;
	}
	this->count = rhs.getCount(); 
	return (*this);
}
