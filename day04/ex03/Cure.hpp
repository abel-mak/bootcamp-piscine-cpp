/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 11:20:11 by abel-mak          #+#    #+#             */
/*   Updated: 2021/06/29 15:51:49 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	private:


	public:
		Cure(void);
		Cure(Cure const &src);
		virtual ~Cure(void);
		Cure	&operator=(Cure const &rhs);
		Cure	*clone(void) const;
};

#endif /* CURE_HPP */
