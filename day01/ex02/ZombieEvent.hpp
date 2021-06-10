/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 13:52:48 by abel-mak          #+#    #+#             */
/*   Updated: 2021/06/09 15:40:07 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP
# include <iostream>
# include "Zombie.hpp"

class ZombieEvent
{
	public:
		void	setZombieType(std::string type);
		Zombie	*newZombie(std::string name);
		void	randomChump(void);

	private:
		std::string type;
};

#endif 
