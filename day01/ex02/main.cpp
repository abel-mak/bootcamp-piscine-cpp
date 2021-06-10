/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 14:46:53 by abel-mak          #+#    #+#             */
/*   Updated: 2021/06/09 15:40:08 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int main(void)
{
	ZombieEvent z;
	Zombie		*zheap;
	Zombie		hz("sleepy", "Geek");

	z.setZombieType("killer");
	zheap = z.newZombie("Lurker");
	z.randomChump();
	zheap->announce();
	hz.announce();
	delete zheap;
	return (0);
}
