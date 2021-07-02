/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 17:57:13 by abel-mak          #+#    #+#             */
/*   Updated: 2021/06/28 17:44:13 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include "ISpaceMarine.hpp"
# include <iostream>

class AssaultTerminator : public ISpaceMarine
{
	private:

	public:
		AssaultTerminator(void);
		AssaultTerminator(AssaultTerminator const &src);
		virtual ~AssaultTerminator(void);
		AssaultTerminator	&operator=(AssaultTerminator const &rhs);
		void	battleCry(void) const;
		void	rangedAttack(void) const;
		void	meleeAttack(void) const;
		AssaultTerminator *clone(void) const;
};

#endif /* ASSAULTTERMINATOR_HPP */
