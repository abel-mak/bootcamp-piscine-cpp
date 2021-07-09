/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 14:41:11 by abel-mak          #+#    #+#             */
/*   Updated: 2021/07/09 11:18:48 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cast.hpp"
#include <iomanip>
#include <cmath>

Cast::Cast(void)
{
}

Cast::~Cast(void)
{
}

Cast::Cast(std::string const &str) 
	: str(str), isCnv(false), is_nan(false), is_inf(false)

{
	if (isFloat(this->str) == 1)
	{
		try
		{
			this->d = std::stod(this->str);
			this->isCnv = true;
		}
		catch (std::exception &e)
		{
		}
	}
	else if (this->str.length() == 1)
	{
		this->d = this->str[0];
		this->isCnv = true;
	}
	else if (this->str.compare("inf") == 0 || this->str.compare("-inf") == 0
			|| this->str.compare("+inf") == 0
		|| this->str.compare("inff") == 0 || this->str.compare("-inff") == 0
			|| this->str.compare("+inff") == 0)
		this->is_inf = true;
	else if (this->str.compare("nan") == 0 || this->str.compare("nanf") == 0)
		this->is_nan = true;
}

Cast::Cast(Cast const &src) 
	: str(src.str),isCnv(false), is_nan(false), is_inf(false)
{
}

Cast	&Cast::operator=(Cast const &rhs)
{
	this->d = rhs.d;
	return (*this);
}

int	Cast::toInt(void) const
{
	return (static_cast<int>(this->d));
}

float	Cast::toFloat(void) const
{
	return (static_cast<float>(this->d));
}

char	Cast::toChar(void) const
{
	return (static_cast<char>(this->d));
}

double	Cast::toDouble(void) const
{
	return (double(this->d));
}

//[+-]?([0-9]*[.])?[0-9]+

int		isFloat(std::string str)
{
	int i;
	enum e_state state;

	state = e_state_start;
	i = 0;
	while (static_cast<size_t>(i) < str.length())
	{
		if ((str[i] == '-' || str[i] == '+') && state == e_state_start 
				&& i == 0)
			state = e_state_sign;
		else if (ft_isdigit(str[i]) != 0 &&
			   	(state == e_state_start || state == e_state_sign ||
				 state != e_state_fractional))
			state = e_state_decimal;
		else if (str[i] == '.' && state != e_state_point 
				&& state != e_state_fractional)
		{
			state = e_state_point;
			if (i > 0 && ft_isdigit(str[i - 1]) != 0)
				state = e_state_fractional;
		}
		else if (ft_isdigit(str[i]) != 0 && (state == e_state_fractional 
					|| state == e_state_point))
			state = e_state_fractional;
		else if (str[i] == 'f' && (state == e_state_fractional 
					|| state == e_state_decimal) 
				&& i == static_cast<int>(str.length()) - 1)
			return (1);
		else
			return (0);
		i++;
	}
	if (state != e_state_sign && state != e_state_point 
			&& state != e_state_start)
		return (1);
	return (0);
}

bool	Cast::getIsNan(void) const
{
	return (this->is_nan);
}

int	ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

bool	Cast::getIsCnv(std::string const &type) const
{
	if (this->isCnv == false)
		return (isCnv);
	if (type.compare("int") == 0)
	{
		return ((static_cast<long>(this->d) == static_cast<int>(this->d)) 
				? true : false);
	}
	else if (type.compare("char") == 0)
	{
		return ((static_cast<long>(this->d) == static_cast<char>(this->d))
				? true : false);
	}
	else if (type.compare("float") == 0)
	{
		return ((!std::isinf(static_cast<float>(this->d))));
	}
	return (this->isCnv);
}

bool	Cast::getIsInf(void) const
{
	return (this->is_inf);
}

std::string const &Cast::getStr(void) const
{
	return (this->str);
}

int	Cast::getPrecision(void) const
{
	int	res;
	long index;

	index = 0;
	res = 1;
	if (this->getIsCnv("double") == true && this->str.compare(".") != 0
			&& (index = static_cast<long>(this->str.find('.'))) != -1)
	{
		index += 2;
		while (index < static_cast<long>(this->str.length()) 
				&& ft_isdigit(this->str[index]) != 0)
		{
			res++;
			index++;
		}
	}
	return (res);
}

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

std::ostream	&operator<<(std::ostream &o, Cast const &input)
{
	int tmp;

	tmp = std::cout.precision();
	o << std::fixed << std::setprecision(input.getPrecision()) << "char: ";
	if (input.getIsCnv("char") == true)
		o << ((ft_isprint(input.toChar()) == 1) ?
			   	"'" + std::string(1, input.toChar()) + "'" : "Non displayable");
	else
		o << "impossible";
	o << std::endl
		<< "int: ";
	if (input.getIsCnv("int") == true)
		o << input.toInt();
	else
		o << "impossible";
	o << std::endl 
		<< "float: ";
	if (input.getIsCnv("float") == true)
		o << input.toFloat() << "f";
	else if (input.getIsInf() == true)
		o << ((input.getStr()[0] == '-') ? "-inff" : "inff");
	else if (input.getIsNan() == true)
		o << "nanf";
	else
		o << "impossible";
	o << std::endl
		<< "double: ";
	if (input.getIsCnv("double") == true)
		o << input.toDouble();
	else if (input.getIsInf() == true)
		o << ((input.getStr()[0] == '-') ? "-inf" : "inf");
	else if (input.getIsNan() == true)
		o << "nan";
	else
		o << "impossible";
	std::cout.precision(tmp);
	return (o);
}
