/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 11:30:46 by abel-mak          #+#    #+#             */
/*   Updated: 2021/07/06 10:09:12 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: Form("presidential pardon", 25, 5), target(target)
{
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src)
	: Form(src.getName(), src.getGradeSign(), src.getGradeExec())
{
	*this = src;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(
		PresidentialPardonForm const &rhs)
{
	Form::operator=(rhs);
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const &b) const
{
	if (b.getGrade() <= this->getGradeExec())
	{
		std::cout << this->target << " has been pardoned by Zafod Beeblebrox"
			<< std::endl;
	}
	else
		throw PresidentialPardonForm::GradeTooLowException();

}
