/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 14:38:33 by abel-mak          #+#    #+#             */
/*   Updated: 2021/06/26 17:11:47 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include "Enemy.hpp"

/*
 * takedamge implicitly virtual
 */

class SuperMutant : public Enemy
{
	private:

	public:
		SuperMutant(void);
		SuperMutant(SuperMutant const &src);
		virtual ~SuperMutant(void);
		SuperMutant	&operator=(SuperMutant const &rhs);
		void	takeDamage(int damage); 
};

#endif /* SUPERMUTANT_HPP */
