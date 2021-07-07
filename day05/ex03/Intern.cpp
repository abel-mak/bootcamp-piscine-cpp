/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 12:51:21 by abel-mak          #+#    #+#             */
/*   Updated: 2021/07/06 11:27:33 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(void)
{
}

Intern::~Intern(void)
{
}

Intern::Intern(Intern const &src)
{
	*this = src;
}

Intern	&Intern::operator=(Intern const &rhs)
{
	(void)rhs;
	return (*this);
}

Form	*Intern::makeShru(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form	*Intern::makeRobo(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form	*Intern::makePres(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form	*Intern::makeForm(std::string const &fName, std::string const &target)
{
	Form *(Intern::*f[3])(std::string) = {
		&Intern::makeRobo,
		&Intern::makePres,
		&Intern::makeShru
	};
	std::string names[3] = {"robotomy request",
		"presidential pardon",
		"shrubbery creation"
	};
	int i;

	i = 0;
	while (i < 3)
	{
		if (names[i].compare(fName) == 0)
			return ((this->*f[i])(target));
		i++;
	}
	std::cout << "Error: unrecognized form " << fName << std::endl;
	return (NULL);
}
