/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 15:19:30 by abel-mak          #+#    #+#             */
/*   Updated: 2021/06/30 17:20:18 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int main(void)
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Victim *a;
	Victim *b;
	Sorcerer s("__S__", "__S_TITLE__");
	Victim v("__V__");
	Peon p("__P__");

	a = new Peon("__A__");
	b = new Victim("__B__");
	*a = *b;
	std::cout << "-------------------" << std::endl;
	std::cout << a->getName() << std::endl;
	std::cout << b->getName() << std::endl;
	std::cout << robert << jim << joe; 
	robert.polymorph(jim);
	robert.polymorph(joe);
	std::cout << s << std::endl;
	v.getPolymorphed();
	std::cout << v << std::endl;
	p.getPolymorphed();
	delete a;
	delete b;
	return (0);
}
