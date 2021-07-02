/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 20:19:14 by abel-mak          #+#    #+#             */
/*   Updated: 2021/06/30 17:34:31 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP 
# define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	private:

	protected:

	public:
		PowerFist(void);
		PowerFist(PowerFist const &src);
		virtual ~PowerFist(void);
		PowerFist	&operator=(PowerFist const &rhs);
		virtual void	attack(void) const;
};


#endif 

     
