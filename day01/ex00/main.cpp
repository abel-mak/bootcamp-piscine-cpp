/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 12:11:43 by abel-mak          #+#    #+#             */
/*   Updated: 2021/06/07 12:50:34 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp" 

void	ponyOnTheHeap(void)
{
	Pony *p;

	p = new Pony;
	delete p;
}

void	ponyOnTheStack(void)
{
	Pony p;
}

int main(void)
{
	ponyOnTheStack();
	ponyOnTheHeap();
	return (0);
}
