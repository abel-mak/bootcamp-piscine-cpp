/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 12:42:54 by abel-mak          #+#    #+#             */
/*   Updated: 2021/07/09 11:19:10 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cast.hpp"

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		Cast	c(argv[1]);

		std::cout << c << std::endl;
	}
	else
		std::cout << "wrong arguments" << std::endl; 
	return (0);
}
