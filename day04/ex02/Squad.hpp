/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 15:31:28 by abel-mak          #+#    #+#             */
/*   Updated: 2021/06/30 12:58:21 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"
# include <iostream>

class Squad : public ISquad
{
	private:
		int count;
		ISpaceMarine **units;
	public:
		Squad(void);
		Squad(Squad const &src);
		virtual ~Squad(void);
		Squad	&operator=(Squad const &rhs);
		int				push(ISpaceMarine *unit);
		int				getCount(void) const;
		ISpaceMarine	*getUnit(int n) const;
		int				find(ISpaceMarine *unit);
		void			destroyUnit(void);
};

#endif /* SQUAD_H */
