/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 10:36:09 by abel-mak          #+#    #+#             */
/*   Updated: 2021/07/06 10:09:52 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <unistd.h>

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: Form("robotomy request", 72, 45), target(target)
{
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src)
	: Form(src.getName(), src.getGradeSign(), src.getGradeExec())
{
	*this = src;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(
		RobotomyRequestForm const &rhs)
{
	Form::operator=(rhs);
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const &b) const
{
	if (b.getGrade() <= this->getGradeExec())
	{
		srand(time(NULL));
		usleep(100 * 1000);
		if (rand() % 2 == 1)
			std::cout << this->target << " has been robotomized successfully"
				<< std::endl;
		else
			std::cout << "it’s a failure" << std::endl;
	}
	else
		throw RobotomyRequestForm::GradeTooLowException();

}
