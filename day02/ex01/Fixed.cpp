/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 15:49:26 by abel-mak          #+#    #+#             */
/*   Updated: 2021/06/12 17:32:21 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include <cmath>

Fixed	&Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->val = rhs.getRawBits();
	return (*this);
}

Fixed::Fixed() : val(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &f)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const
{
	return (this->val);
}

void	Fixed::setRawBits(int const raw)
{
	this->val = raw;
}

int		Fixed::getFraBits() const
{
	return this->fraBits;
}

std::ostream &operator<<(std::ostream &o, Fixed const &rhs)
{
	float f;

	f = rhs.toFloat();
	o << f;
	return (o);
}

Fixed::Fixed(int const inp)
{
	std::cout << "Int constructor called" << std::endl;
	this->val = inp * (1 << this->getFraBits());
}

Fixed::Fixed(float const inp)
{
	std::cout << "Float constructor called" << std::endl;
	this->val = round(inp * (1 << this->getFraBits()));
}

float	Fixed::toFloat(void) const
{
	return ((float)this->val / (float)(1 << this->getFraBits()));
}

int		Fixed::toInt(void) const
{
	return (this->val >> this->getFraBits());
}
