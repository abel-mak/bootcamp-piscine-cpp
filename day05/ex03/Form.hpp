/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 11:16:15 by abel-mak          #+#    #+#             */
/*   Updated: 2021/07/06 10:14:29 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		class GradeTooHighException : public std::exception 
	{
		public:
			virtual const char	*what() const throw();
	};
	public: 
		class GradeTooLowException : public std::exception 
	{
		public:
			virtual const char	*what() const throw();
	};

	private:
		std::string const	name;
		bool				isSigned;
		int const			gradeSign;
		int const			gradeExec;

	public:
		Form(void);
		Form(Form const &src);
		Form(std::string const &name, int const &gradeSign, 
				int const &gradeExec);
		virtual ~Form(void);
		Form		&operator=(Form const &rhs);
		std::string		getName(void) const;
		int				getGradeSign(void) const;
		int				getGradeExec(void) const;
		bool			getIsSigned(void) const;
		void			beSigned(Bureaucrat const &b);
		virtual void	execute(Bureaucrat const &executor) const = 0;
};

std::ostream	&operator<<(std::ostream &o, Form const &input);

#endif /* FORM_HPP */
