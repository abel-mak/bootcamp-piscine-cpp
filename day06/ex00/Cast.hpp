/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 14:38:29 by abel-mak          #+#    #+#             */
/*   Updated: 2021/07/09 11:18:49 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAST_HPP
# define CAST_HPP

# include <iostream>

enum	e_state
{
	e_state_start,
	e_state_sign,
	e_state_point,
	e_state_decimal,
	e_state_fractional,
};

class Cast
{
	private:
		std::string const	str;
		double				d;
		bool				isCnv;
		bool				is_nan;
		bool				is_inf;
		Cast(void);

	public:
		Cast(Cast const &src);
		Cast(std::string const &str);
		virtual ~Cast(void);
		Cast				&operator=(Cast const &rhs);
		int					toInt(void) const;
		float				toFloat(void) const;
		double				toDouble(void) const;
		bool				getIsNan(void) const;
		bool				getIsCnv(std::string const &type) const;
		bool				getIsInf(void) const;
		char				toChar(void) const;
		std::string const	&getStr(void) const;
		int					getPrecision(void) const;
};
int 			ft_isdigit(char c);
int				ft_isprint(int c);
int				isFloat(std::string str);
std::ostream	&operator<<(std::ostream &o, Cast const &input);

#endif /* CAST_HPP */
