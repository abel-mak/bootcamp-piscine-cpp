/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 11:16:18 by abel-mak          #+#    #+#             */
/*   Updated: 2021/07/06 09:53:20 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) 
	: name("default_form"), isSigned(false), gradeSign(1), gradeExec(1)
{
}

Form::~Form(void)
{
}

Form::Form(Form const &src) : 
	name(src.name),  gradeSign(src.gradeSign), gradeExec(src.gradeExec)
{
	*this = src;
}

Form::Form(std::string const &name,int const &gradeSign, int const &gradeExec) 
	: name(name), isSigned(false), gradeSign(gradeSign), gradeExec(gradeExec)
{
	if (this->gradeSign < 1 || this->gradeExec < 1)
		throw Form::GradeTooHighException();
	else if (this->gradeSign > 150 || this->gradeExec > 150)
		throw Form::GradeTooLowException();
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return ("grade too low");
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return ("grade too high");
}

Form	&Form::operator=(Form const &rhs)
{
	this->isSigned = rhs.isSigned;
	return (*this);
}

std::string	Form::getName(void) const
{
	return (this->name);
}

bool	Form::getIsSigned(void) const
{
	return (this->isSigned);
}

int	Form::getGradeSign(void) const
{
	return (this->gradeSign);
}

int	Form::getGradeExec(void) const
{
	return (this->gradeExec);
}

void	Form::beSigned(Bureaucrat const &b)
{
	if (b.getGrade() == this->gradeSign)
	{
		this->isSigned = true;
	}
	else if (b.getGrade() < this->gradeSign)
		throw Form::GradeTooHighException();
	else
		throw Form::GradeTooLowException(); 
}

std::ostream	&operator<<(std::ostream &o, Form const &input)
{
	o << input.getName() << " form require " <<  input.getGradeSign()
		<< " grade to sign and " << input.getGradeExec() << " to execute"
		<< " and it status: " 
		<< ((input.getIsSigned() == true) ? "signed" : "not signed");
	return (o);
}
