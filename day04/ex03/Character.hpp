/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 13:29:17 by abel-mak          #+#    #+#             */
/*   Updated: 2021/07/01 16:21:28 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string 	name;
		AMateria		**inventory;
		Character(void);

	protected:

	public:
		Character(std::string const &name);
		Character(Character const &src);
		virtual ~Character(void);
		virtual AMateria	**getInv(void) const;
		Character			&operator=(Character const &rhs);
		std::string const	&getName(void) const;
		void 				equip(AMateria *m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
};

#endif /* CHARACTER_HPP */
