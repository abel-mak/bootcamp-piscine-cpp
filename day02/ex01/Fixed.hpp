/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 15:40:13 by abel-mak          #+#    #+#             */
/*   Updated: 2021/06/12 17:32:20 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int					val;
		static const int	fraBits = 8;

	public:
		Fixed(void);
		Fixed(const Fixed &f);
		Fixed(int const inp);
		Fixed(float const inp);
		~Fixed(void);
		Fixed	&operator=(const Fixed &rhs);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		int		getFraBits() const;
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif /* FIXED_HPP */
