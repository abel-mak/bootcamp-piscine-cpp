/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 19:10:10 by abel-mak          #+#    #+#             */
/*   Updated: 2021/06/09 14:44:25 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <string>
#include <iostream>

std::string	to_hex(long long in)
{
	int			value;
	std::string hexstr = "0123456789ABCDEF";
	std::string res;
	int			bits;
	int			start;

	res = "0x";
	start = 0;
	bits = 60;
	if (in == 0)
		return ("0x0");
	while (bits >= 0)
	{
		value = (in >> bits) & 0xf;
		start = (value != 0) ? 1 : start;
		if (start == 1)
			res += hexstr[value];
		bits -= 4;
	}
	return (res);
}

std::string Brain::identify(void) const
{
	return (to_hex((long long)this));
}
