/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 16:28:56 by abel-mak          #+#    #+#             */
/*   Updated: 2021/06/09 15:11:27 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	ft_replace(std::string &tmp, std::string s1, std::string s2)
{
	int	i;
	int	j;

	i = 0;
	while (i < (int)tmp.length())
	{
		j = 0;
		while (tmp[i + j] == s1[j] && j < (int)s1.length())
		{
			j++;
		}
		if (j == (int)s1.length())
		{
			tmp = tmp.substr(0, i) + s2 + tmp.substr(i + j, tmp.length());
			i += s2.length();
		}
		else
			i++;
	}
}

int main(int argc, char **argv)
{
	if (argc < 4 || argc > 4 || argv[2][0] == '\0' || argv[3][0] == '\0')
	{
		std::cout << "arguments!" << std::endl;
		return (1);
	}
	std::ifstream	file(argv[1]);
	if (file.fail()) {
		std::cout << "Error bad file" << std::endl;
		return (1);
	}
	std::ofstream	ofile((std::string)argv[1] + ".replace");
	bool			r;
	std::string		tmp;

	while (file.eof() != true)
	{
		r = !!std::getline(file, tmp);
		ft_replace(tmp, argv[2], argv[3]);
		if (file.eof() != true)
			tmp += "\n";
		ofile << tmp;
	}
	file.close();
	ofile.close();
	return (0);
}
