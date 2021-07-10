/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 18:16:05 by abel-mak          #+#    #+#             */
/*   Updated: 2021/07/10 12:00:42 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER
# define WHATEVER

template<typename T>
void	swap(T &a, T &b)
{
	T	c(a);

	a = b;
	b = c;
}

template<typename T>
T	max(T &a, T &b)
{
	if (b >= a)
		return b;
	else
		return a;
}

template<typename T>
T	min(T &a, T &b)
{
	if (b <= a)
		return b;
	else
		return a;
}

#endif /* ifndef WHATEVER  */
