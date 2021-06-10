/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 12:08:32 by abel-mak          #+#    #+#             */
/*   Updated: 2021/06/09 15:50:35 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Human.hpp"

std::string	Human::identify(void)
{
	return (this->br).identify();
}

const Brain &Human::getBrain(void)
{
	return (this->br);
}

/*
 * just to get rid of ale errors
 */

Human::Human(void)
{
}
