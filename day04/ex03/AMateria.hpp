/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 17:15:50 by abel-mak          #+#    #+#             */
/*   Updated: 2021/06/28 20:04:35 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		int					_xp;
		std::string const	type;
		AMateria(void);

	public:
		AMateria(std::string const &type);
		AMateria(AMateria const &src);
		virtual	~AMateria(void);
		AMateria			&operator=(AMateria const &rhs);
		std::string const	&getType(void) const;
		unsigned int		getXp(void) const;
		virtual AMateria	*clone(void) const = 0;
		virtual void		use(ICharacter	&target);
};

#endif /* AMATERIA_HPP */
