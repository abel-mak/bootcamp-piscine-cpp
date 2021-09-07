/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 12:35:07 by abel-mak          #+#    #+#             */
/*   Updated: 2021/07/13 10:47:01 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include <stdexcept>

template <typename T>
int easyfind(T cont, int e)
{

	typename T::iterator b;

	b = find(cont.begin(), cont.end(), e);
	if (b != cont.end())
		return (*b);
	throw std::runtime_error("Error: element not found");
}
