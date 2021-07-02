/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 09:59:19 by abel-mak          #+#    #+#             */
/*   Updated: 2021/06/24 12:01:49 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class Peon : public Victim 
{
	private:
		
	protected:
		Peon(void);

	public:
		Peon(Peon const &src);
		virtual ~Peon(void);
		Peon(std::string name);
		Peon			&operator=(Peon const &rhs);
		virtual void	getPolymorphed(void) const;
};

#endif /* PEON_HPP */
