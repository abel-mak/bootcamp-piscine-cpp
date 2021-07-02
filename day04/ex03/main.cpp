/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 12:16:00 by abel-mak          #+#    #+#             */
/*   Updated: 2021/07/01 16:28:26 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	ICharacter* alex = new Character(*(Character*)me);
	me->use(0, *bob);
	me->use(1, *bob);	
	
	std::cout << alex->getName() << std::endl;
	std::cout << ((Character*)alex)->getInv()[0] << std::endl;
	std::cout <<((Character*)me)->getInv()[0] << std::endl;
	std::cout << ((Character*)alex)->getInv()[0]->getType() << std::endl;
	std::cout <<((Character*)me)->getInv()[0]->getType() << std::endl;
	
	delete alex;
	delete bob;
	delete me;
	delete src;
	return 0;
}
