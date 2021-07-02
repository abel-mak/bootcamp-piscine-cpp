/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 17:36:21 by abel-mak          #+#    #+#             */
/*   Updated: 2021/06/28 17:40:43 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include "ISpaceMarine.hpp"
# include <iostream>

class TacticalMarine : public ISpaceMarine
{
	private:


	public:
		TacticalMarine(void);
		TacticalMarine(TacticalMarine const &src);
		virtual ~TacticalMarine(void);
		TacticalMarine	&operator=(TacticalMarine const &rhs);
		virtual void			battleCry(void) const;
		void			rangedAttack(void) const;
		void			meleeAttack(void) const;
		TacticalMarine	*clone(void) const;
};

#endif /* TACTICALMARINE_HPP */
