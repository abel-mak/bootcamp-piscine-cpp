/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 18:20:02 by abel-mak          #+#    #+#             */
/*   Updated: 2021/07/10 14:27:22 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

int main()
{
	int		ai;
	float	af;
	char	ac;
	int		bi;
	float	bf;
	char	bc;

	ai = 13;
	af = 13.5;
	ac = '+';
	bi = 37;
	bf = 37;
	bc = '-';
	std::cout << "ai: " <<  ai << " af: " << af << " ac: " << ac << std::endl;
	std::cout << "bi: " <<  bi << " bf: " << bf << " bc: " << bc << std::endl;
	swap<int>(ai, bi);
	swap<float>(af, bf);
	swap<char>(ac, bc);
	std::cout << "ai: " <<  ai << " af: " << af << " ac: " << ac << std::endl;
	std::cout << "bi: " <<  bi << " bf: " << bf << " bc: " << bc << std::endl;
	swap<int>(ai, bi);
	swap<float>(af, bf);
	swap<char>(ac, bc);
	std::cout << "------------------------" << std::endl;
	std::cout << max<int>(ai, bi) << std::endl;
	std::cout << max<float>(af, bf) << std::endl;
	std::cout << (char)max<char>(ac, bc) << std::endl;
	std::cout << max<int>(ai, ai) << std::endl;
	std::cout << max<float>(af, af) << std::endl;
	std::cout << (char)max<char>(ac, ac) << std::endl;
	std::cout << "------------------------" << std::endl;
	std::cout << min<int>(ai, bi) << std::endl;
	std::cout << min<float>(af, bf) << std::endl;
	std::cout << (char)min<char>(ac, bc) << std::endl;
	std::cout << min<int>(bi, bi) << std::endl;
	std::cout << min<float>(bf, bf) << std::endl;
	std::cout << (char)min<char>(bc, bc) << std::endl;
	std::cout << "------------------------" << std::endl;
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;

}
