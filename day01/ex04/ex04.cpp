/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 18:52:59 by abel-mak          #+#    #+#             */
/*   Updated: 2021/06/07 19:01:24 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string str;
	std::string *p;
	std::string &ref = str;

	str = "HI THIS IS BRAIN";
	p = &str;
	ref = str;
	std::cout << *p << std::endl;
	std::cout << ref << std::endl;
	return (0);
}
