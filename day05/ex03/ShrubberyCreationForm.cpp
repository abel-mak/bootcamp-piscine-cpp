/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 16:07:04 by abel-mak          #+#    #+#             */
/*   Updated: 2021/07/06 10:10:20 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target)
	: Form("shrubbery creation", 145, 137), target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(void)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src)
: Form(src.getName(), src.getGradeSign(), src.getGradeExec())
{
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(
		ShrubberyCreationForm const &rhs)
{
	Form::operator=(rhs);
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	std::ofstream file((this->target + "_shrubbery").c_str());

	if (this->getGradeExec() >= executor.getGrade())
	{
		file
			<< "         *"  << std::endl
			<< "        /|\\" << std::endl
			<< "       /*|O\\" << std::endl
			<< "      /*/|\\*\\" << std::endl
			<< "     /X/O|*\\X\\" << std::endl
			<< "    /*/X/|\\X\\*\\" << std::endl
			<< "   /O/*/X|*\\O\\X\\" << std::endl
			<< "  /*/O/X/|\\X\\O\\*\\" << std::endl
			<< " /X/O/*/X|O\\X\\*\\O\\" << std::endl
			<< "/O/X/*/O/|\\X\\*\\O\\X\\" << std::endl
			<< "        |X|" << std::endl
			<< "        |X|" << std::endl;
	}
	else
		throw Form::GradeTooLowException();
}
