/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 13:42:02 by abel-mak          #+#    #+#             */
/*   Updated: 2021/06/30 17:01:57 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include "Victim.hpp"
# include <iostream>

class Sorcerer
{
	private:
		std::string name;
		std::string title;
	protected:
		Sorcerer(void);
	public:
		Sorcerer(const Sorcerer &src);
		Sorcerer(std::string name, std::string title);
		virtual	~Sorcerer(void);
		Sorcerer	&operator=(const Sorcerer &rhs);
		std::string	getSor(std::string const var) const;
		void		polymorph(Victim const &);
};

std::ostream	&operator<<(std::ostream &o, const Sorcerer &src);

#endif /* SORCERER_HPP */
