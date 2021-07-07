/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 12:51:32 by abel-mak          #+#    #+#             */
/*   Updated: 2021/07/06 11:27:34 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"

class Intern
{
	private:

	public:
		Intern(void);
		Intern(Intern const &src);
		virtual ~Intern(void);
		Intern	&operator=(Intern const &rhs);
		Form	*makeForm(std::string const &fName, std::string const &target);
		Form	*makeShru(std::string target);
		Form	*makeRobo(std::string target);
		Form	*makePres(std::string target);
};

#endif /* INTERN_HPP */
