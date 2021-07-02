/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 15:20:18 by abel-mak          #+#    #+#             */
/*   Updated: 2021/06/30 17:02:43 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>

class Victim
{
	private:

	protected:
		Victim(void);
		std::string name;

	public:
		Victim(Victim const &src);
		Victim(std::string name); 
		virtual	~Victim(void);
		Victim			&operator=(Victim const &rhs);
		std::string		getName(void) const;
		virtual void	getPolymorphed(void) const;
};

std::ostream 	&operator<<(std::ostream &o, Victim const &input);

#endif /* VICTIM_HPP */
