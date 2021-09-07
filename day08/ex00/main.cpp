/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 12:03:48 by abel-mak          #+#    #+#             */
/*   Updated: 2021/07/13 11:51:51 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main(void)
{
	std::vector<int> a(10);

	a[0] = 1;
	a[1] = 2;
	a[2] = 3;
	a[3] = 4;
	a[4] = 5;
	a[5] = 6;
	a[6] = 7;
	a[7] = 8;
	a[8] = 9;
	a[9] = 10;

	try
	{
		std::cout << easyfind(a, 4) << std::endl;
		std::cout << easyfind(a, 5) << std::endl;
		std::cout << easyfind(a, 7) << std::endl;
		std::cout << easyfind(a, 8) << std::endl;
		std::cout << easyfind(a, 11) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
