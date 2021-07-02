/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 15:54:28 by abel-mak          #+#    #+#             */
/*   Updated: 2021/07/01 15:38:26 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : count(0), mArr(new AMateria*[4])
{
	int i;

	i = 0;
	while (i < 4)
	{
		mArr[i] = 0;
		i++;
	}
}

MateriaSource::~MateriaSource(void)
{
	int i;

	i = 0;
	while (i < this->count)
	{
		if (this->mArr[i] != 0)
			delete this->mArr[i]; 
		i++;
	}
	delete [] this->mArr;
}

void	MateriaSource::learnMateria(AMateria *m)
{
	if (m == 0)
		return ;
	if (this->count < 4)
	{
		mArr[this->count] = m;
		this->count++;
	}
	else
		std::cout << "learnMateria: not enough space" << std::endl;
}

AMateria	**MateriaSource::getMat(void) const
{
	return (this->mArr);
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (this->mArr[i] != 0 && this->mArr[i]->getType().compare(type) == 0)
			return (this->mArr[i]->clone());
		i++;
	}
	return ((AMateria*)0);
}

int	MateriaSource::getCount(void) const
{
	return (this->count);
}

MateriaSource::MateriaSource(MateriaSource const &src) 
	: count(0), mArr(new AMateria*[4])
{
	*this = src;
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &rhs)
{
	int			i;
	AMateria	*tmp;
	
	i = 0;
	this->count = rhs.getCount();
	while (i < this->count)
	{
		tmp = this->mArr[i];
		this->mArr[i] = (rhs.getMat()[i] != 0) ? (rhs.getMat()[i])->clone() : 0;
		if (tmp != 0)
			delete tmp;
		i++;
	}
	return (*this);
}
