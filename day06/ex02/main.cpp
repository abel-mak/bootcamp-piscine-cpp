/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 10:56:05 by abel-mak          #+#    #+#             */
/*   Updated: 2021/07/09 10:59:48 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int	main(void)
{
	Base	*b;

	b = generate();
	identify(b);
	identify(*b);	
	return (0);
}
