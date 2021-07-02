/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 10:46:45 by abel-mak          #+#    #+#             */
/*   Updated: 2021/06/30 12:51:22 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
	private:

	public:
		Ice(void);
		Ice(Ice const &src);
		virtual ~Ice(void);
		Ice	&operator=(Ice const &rhs);
		Ice	*clone(void) const;
};

#endif /* ICE_HPP */
