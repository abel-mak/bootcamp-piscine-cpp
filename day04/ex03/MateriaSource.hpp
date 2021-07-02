/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 15:54:51 by abel-mak          #+#    #+#             */
/*   Updated: 2021/06/30 11:41:55 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		int			count;
		AMateria	**mArr;

	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const &src);
		virtual			~MateriaSource(void);
		MateriaSource	&operator=(MateriaSource const &rhs);
		void			learnMateria(AMateria *m);
		AMateria		*createMateria(std::string const &type);
		AMateria		**getMat(void) const;
		int				getCount(void) const;
};

#endif /* MATERIASOURCE_HPP */
