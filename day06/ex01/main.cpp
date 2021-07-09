/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 16:12:29 by abel-mak          #+#    #+#             */
/*   Updated: 2021/07/09 11:21:38 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdint>

typedef struct
{
	int		a;
}	Data;

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data	*deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

int	main(void)
{
	Data		*d;
	Data		*d1;
	uintptr_t	ui;
	
	d = new Data;
	d->a = 1337;
	ui = serialize(d);
	d1 = deserialize(ui);
	std::cout << "d1: " << d1->a << std::endl;
	std::cout << " d: " << d->a << std::endl;
	delete d;
	return (0);
}
