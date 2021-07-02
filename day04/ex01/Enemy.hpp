/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 11:11:13 by abel-mak          #+#    #+#             */
/*   Updated: 2021/06/30 18:50:37 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>

class Enemy
{
	private:

	protected:
		Enemy(void);
		int					hp;
		std::string const	type;

	public:
		Enemy(Enemy const &src);
		virtual ~Enemy(void);
		Enemy(int hp, std::string const &type);
		Enemy				&operator=(Enemy const &rhs);
		std::string const	&getType(void) const;
		int					getHp(void) const;
		virtual void		takeDamage(int value);
};

std::ostream	&operator<<(std::ostream &o, Enemy const &input);

#endif /* ENEMY_HPP */
