/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 15:24:40 by abel-mak          #+#    #+#             */
/*   Updated: 2021/06/06 11:57:56 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	str_to_upper(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		std::cout << (char)toupper(str[i]);
		i++;
	}

}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		int i;

		i = 1;
		while (i < argc)
		{
			str_to_upper(argv[i]);
			i++;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
