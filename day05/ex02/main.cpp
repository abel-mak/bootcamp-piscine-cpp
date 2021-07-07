/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 16:25:29 by abel-mak          #+#    #+#             */
/*   Updated: 2021/07/06 11:17:05 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>
#include <fstream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{

	Bureaucrat	b("__B__", 130);
	Bureaucrat	lb("__LB__", 140);
	Bureaucrat	b1("__B1__", 40);
	Bureaucrat	lb1("__LB1__", 50);
	Bureaucrat	b2("__B2__", 1);
	Bureaucrat	lb2("__LB2__", 10);
	ShrubberyCreationForm s("__SHRUB__");
	ShrubberyCreationForm s1("__SHRUB_1_");
	RobotomyRequestForm r("__ROBOT__");
	RobotomyRequestForm r1("__ROBOT_1_");
	PresidentialPardonForm p("__PRES__");
	PresidentialPardonForm p1("__PRES_1_");

	b.executeForm(s);
	b1.executeForm(r);
	b2.executeForm(p);
	try
	{
		s1.execute(lb);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		r1.execute(lb1);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		p1.execute(lb2);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
