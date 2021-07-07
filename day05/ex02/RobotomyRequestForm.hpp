/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 10:41:12 by abel-mak          #+#    #+#             */
/*   Updated: 2021/07/05 12:18:43 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		RobotomyRequestForm(void);
		std::string target;

	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &src);
		RobotomyRequestForm	&operator=(RobotomyRequestForm const &rhs);
		virtual ~RobotomyRequestForm(void);
		void	execute(Bureaucrat const &b) const;
};

#endif /* ROBOTOMYREQUESTFORM_HPP */
