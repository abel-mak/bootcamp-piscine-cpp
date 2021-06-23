/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 15:33:25 by abel-mak          #+#    #+#             */
/*   Updated: 2021/06/16 16:39:53 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void    vaulthunter_dot_exe(std::string const &target);

int main(void)
{
	FragTrap frag("__FT__");
	FragTrap frag1;

	frag.rangedAttack("a-target");
	frag.meleeAttack("b-target");
	frag.takeDamage(120);
	std::cout << "hit Points: " << frag.getFragTrap("hitPoint") << std::endl;
	frag.beRepaired(100);
	std::cout << "hit Points: " << frag.getFragTrap("hitPoint") << std::endl;
	frag.vaulthunter_dot_exe("c-target");
	frag.vaulthunter_dot_exe("d-target");
	frag.vaulthunter_dot_exe("e-target");
	frag.vaulthunter_dot_exe("f-target");
	frag.vaulthunter_dot_exe("f-target");
	frag1 = frag;
	frag1.vaulthunter_dot_exe("f-target");
	frag1.takeDamage(120);
	return (0);
}
