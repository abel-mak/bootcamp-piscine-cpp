/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 13:34:48 by abel-mak          #+#    #+#             */
/*   Updated: 2021/06/26 17:11:41 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(void)
{
}

Enemy::~Enemy(void)
{
}

Enemy	&Enemy::operator=(Enemy const &rhs)
{
	this->hp = rhs.getHp();
	return (*this);
}

Enemy::Enemy(Enemy const &src)
{
	*this = src;
}

Enemy::Enemy(int hp, std::string const &type) 
	: hp(hp), type(type)
{
}

std::string const &Enemy::getType(void) const 
{
	return (this->type);
}

int		Enemy::getHp(void) const
{
	return (this->hp);
}

void	Enemy::takeDamage(int damage)
{
	if (damage < 0)
		return ;
	if (damage > this->hp)
		this->hp = 0;
	else	
		this->hp = this->hp - damage;
}

std::ostream	&operator<<(std::ostream &o, Enemy const &input)
{
	o << "type: " << input.getType() << " "
		<< "hit point: " << input.getHp() << " ";
	return (o);
}
