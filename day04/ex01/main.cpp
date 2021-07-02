/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 20:45:42 by abel-mak          #+#    #+#             */
/*   Updated: 2021/07/01 15:06:42 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int	main(void)
{
	Character* me = new Character("me");
	std::cout << *me;
	Enemy* b = new RadScorpion();
	AWeapon	*pr = new PlasmaRifle();
	AWeapon	*pf = new PowerFist();
	AWeapon	*pr1 = new PlasmaRifle(*((PlasmaRifle*)pr));
	AWeapon *pf1 = new PowerFist(*(PowerFist*)pf);
	PlasmaRifle pr2;
	PowerFist pf2;
	SuperMutant sm;
	RadScorpion rs;

	std::cout << *pr1 << std::endl;
	std::cout << *pr << std::endl;
	std::cout << "------------------" << std::endl;
	me->equip(pf1);
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	std::cout << "------------------" << std::endl;
	pr2.attack();
	pf2.attack();
	std::cout << "before: " << sm << std::endl;
	sm.takeDamage(13);
	std::cout << "after: " << sm << std::endl;
	std::cout << "before: " << rs << std::endl;
	rs.takeDamage(10);
	std::cout << "after: " << rs << std::endl;
	delete me;
	delete pr;
	delete pf;
	delete pr1;
	delete pf1;
	return 0;
}
