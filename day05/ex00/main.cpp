/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 16:25:29 by abel-mak          #+#    #+#             */
/*   Updated: 2021/07/06 11:11:16 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	try 
	{
		Bureaucrat b("__B__", 151);
	}
	catch(std::exception &e) 
	{
		std::cout << e.what() << std::endl;
	}
	Bureaucrat b("__B__", 1);
	try
	{
		b.increment();
	}
	catch (std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
		std::cout << b << std::endl;
	}
	Bureaucrat b1("__B__", 150);
	try
	{
		b1.decrement();
	}
	catch (std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
		std::cout << b1 << std::endl;
	}
	return (0);
}
