/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 15:33:25 by abel-mak          #+#    #+#             */
/*   Updated: 2021/06/21 15:17:46 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

void    vaulthunter_dot_exe(std::string const &target);

int main(void)
{
	FragTrap frag("__FT__");
	ScavTrap scav("__ST__");

	frag.rangedAttack("a-target");
	frag.meleeAttack("b-target");
	frag.takeDamage(10);
	std::cout << "hit Points: " << frag.getTrap("hitPoint") << std::endl;
	frag.beRepaired(10);
	std::cout << "hit Points: " << frag.getTrap("hitPoint") << std::endl;
	frag.takeDamage(120);
	std::cout << "hit Points: " << frag.getTrap("hitPoint") << std::endl;
	frag.beRepaired(100);
	std::cout << "hit Points: " << frag.getTrap("hitPoint") << std::endl;
	frag.vaulthunter_dot_exe("c-target");
	frag.vaulthunter_dot_exe("d-target");
	frag.vaulthunter_dot_exe("e-target");
	frag.vaulthunter_dot_exe("f-target");
	frag.vaulthunter_dot_exe("f-target");
	
	scav.rangedAttack("a-target");
	scav.meleeAttack("b-target");
	scav.takeDamage(10);
	std::cout << "hit Points: " << scav.getTrap("hitPoint") << std::endl;
	scav.beRepaired(10);
	std::cout << "hit Points: " << scav.getTrap("hitPoint") << std::endl;
	scav.takeDamage(120);
	std::cout << "hit Points: " << scav.getTrap("hitPoint") << std::endl;
	scav.beRepaired(100);
	std::cout << "hit Points: " << scav.getTrap("hitPoint") << std::endl;
	scav.challengeNewcomer();
	scav.challengeNewcomer();
	scav.challengeNewcomer();
	scav.challengeNewcomer();
	return (0);
}
