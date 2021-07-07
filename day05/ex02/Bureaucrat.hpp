/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 15:39:36 by abel-mak          #+#    #+#             */
/*   Updated: 2021/07/05 12:14:26 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <exception>
# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	public : class GradeTooHighException : public std::exception
			 {
				 public:
					 virtual const char	*what() const throw();
			 };
	public : class GradeTooLowException : public std::exception
			 {
				 public:
					 virtual const char	*what() const throw();
			 };
	private:
			 std::string	const	name;
			 int					grade;

	public:
			 Bureaucrat(void);
			 Bureaucrat(Bureaucrat const &src);
			 Bureaucrat(std::string const &name, int grade);
			 virtual ~Bureaucrat(void);
			 Bureaucrat	&operator=(Bureaucrat const &rhs);
			 std::string	getName(void) const;
			 int			getGrade(void) const;
			 void		increment(void);
			 void		decrement(void);
			 void		signForm(Form &f);
			 void		executeForm(Form const &f);
};

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &input);

#endif /* BUREAUCRAT_HPP */
