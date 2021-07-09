/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 16:32:04 by abel-mak          #+#    #+#             */
/*   Updated: 2021/07/09 10:59:51 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>

class Base
{

	public:
		virtual ~Base(void);
};

class A : public  Base
{
};

class B : public Base
{
};

class C : public Base
{
};

void	identify(Base &p);
void	identify(Base* p);
Base	*generate(void);

#endif /* BASE_H */
