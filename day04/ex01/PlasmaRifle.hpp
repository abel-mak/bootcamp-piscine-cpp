/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 19:10:36 by abel-mak          #+#    #+#             */
/*   Updated: 2021/06/30 17:32:15 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	private:

	protected:

	public:
		PlasmaRifle(void);
		PlasmaRifle(PlasmaRifle const &src);
		virtual ~PlasmaRifle(void);
		PlasmaRifle	&operator=(PlasmaRifle const &rhs);
		virtual void	attack(void) const;
};


#endif /* PLASMARIFLE_HPP */
