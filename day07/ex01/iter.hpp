/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 18:54:41 by abel-mak          #+#    #+#             */
/*   Updated: 2021/07/10 14:47:42 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER
# define ITER

# include <iostream>

template<typename T>
void	iter(T	*arr, int size, void (*f)(T const &))
{
	int i;

	i = 0;
	while (i < size)
	{
		(*f)(arr[i]);
		i++;
	}
}

template<typename U>
void	ft_print(U a)
{
	std::cout << a << std::endl;
}

#endif /* ifndef ITER */

