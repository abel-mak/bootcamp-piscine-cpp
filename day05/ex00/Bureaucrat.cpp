/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 15:50:14 by abel-mak          #+#    #+#             */
/*   Updated: 2021/07/06 11:32:07 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("grade too low");
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("grade too high");
}

Bureaucrat::Bureaucrat(void) 
	: name(""), grade(150) 
{
}

Bureaucrat::~Bureaucrat(void)
{
}

Bureaucrat::Bureaucrat(std::string const &name, int grade) 
	: name(name), grade(grade)
{
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : name(src.getName())
{
	*this = src;
}


Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &rhs)
{
	this->grade = rhs.grade;
	return (*this);
}

std::string	Bureaucrat::getName(void) const
{
	return (this->name);
}

int			Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

void	Bureaucrat::increment(void)
{
	if (this->grade == 1)
		throw Bureaucrat::GradeTooHighException();
	this->grade--;
}

void	Bureaucrat::decrement(void)
{
	if (this->grade == 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade++;
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &input)
{
	o << "<" << input.getName() << ">, bureaucrat grade " << "<" 
		<< input.getGrade() << ">";
	return (o);
}
