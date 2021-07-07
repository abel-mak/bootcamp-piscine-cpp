/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 16:25:29 by abel-mak          #+#    #+#             */
/*   Updated: 2021/07/06 11:12:51 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat	b("__B__", 5);
	Form		f("__FORM__", 10, 10);
	Form		f1("__FORM_1__", 1, 1);

	b.signForm(f);
	b.signForm(f1);
	std::cout << f << std::endl;
	std::cout << f1 << std::endl;
	try
	{
		f1.beSigned(b);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
