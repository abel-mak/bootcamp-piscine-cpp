/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 12:33:53 by abel-mak          #+#    #+#             */
/*   Updated: 2021/07/13 11:44:54 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
	private:


	public:
		typedef typename 
			std::stack<T, Container>::container_type::iterator iterator;
		MutantStack(void);
		MutantStack(MutantStack<T, Container> const &src);
		MutantStack<T, Container>	&operator=(
				MutantStack<T, Container> const &rhs);
		virtual ~MutantStack(void);
		iterator	begin(void)
		{
			return (this->c.begin());
		}
		iterator	end(void)
		{
			return (this->c.end());
		}
};

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack(void)
{
}

template <typename T, typename Container>
MutantStack<T, Container>::~MutantStack(void)
{
}

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack(
		MutantStack<T, Container> const &src) : std::stack<T, Container>(src)
{
}

template <typename T, typename Container>
MutantStack<T, Container>	&MutantStack<T, Container>::operator=(
		MutantStack<T, Container> const &rhs)
{
	std::stack<T, Container>::operator=(rhs);
	return (*this);
}

#endif /* MUTANTSTACK_H */
