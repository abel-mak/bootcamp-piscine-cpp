/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 15:15:19 by abel-mak          #+#    #+#             */
/*   Updated: 2021/06/06 17:45:41 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

std::string str_trunc(std::string s)
{
	std::string res;
	int i;

	i = 0;
	while (i < (int)s.length())
	{
		if (s[i] == '\t')
			s[i] = ' ';
		i++;
	}
	if (s.length() > 10)
	{
		res = s.substr(0, 9);
		res += ".";
		return (res);
	}
	return (s);
}

void	list_contacts(Contact *contacts, int len)
{
	int i;

	std::cout << std::setw(10) << "index"
		<< "|";
	std::cout << std::setw(10) << "first name" 
		<< "|";
	std::cout << std::setw(10) << "last name"
		<< "|";
	std::cout << std::setw(10) << "nickname"
		<< std::endl;
	i = 0;
	while (i < len)
	{
		std::cout << std::setw(10) << i
			<< "|";
		std::cout << std::setw(10) << str_trunc(contacts[i].get_f())
			<< "|";
		std::cout << std::setw(10) << str_trunc(contacts[i].get_l())
			<< "|";
		std::cout << std::setw(10) << str_trunc(contacts[i].get_n())
			<< std::endl;
		i++;
	}
}

int		is_number(std::string str)
{
	int i;

	i = 0;
	while (i < (int)str.length())
	{
		if (isdigit(str[i]) == 0 && std::iswspace(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}

int main(void)
{
	Contact		contacts[8];
	std::string cmd;
	int			i;
	bool		rr;
	int			index;

	i = 0;
	rr = true;
	while (rr)
	{
		std::cout << "Waiting for command!" << std::endl;
		rr = !!std::getline(std::cin, cmd);
		if (cmd.compare("ADD") == 0)
		{
			if (i < 8)
			{
				contacts[i].setcont(rr);
				i++;
			}
			else
				std::cout << "ERROR: contact limit reached!" << std::endl;
		}
		else if (cmd.compare("SEARCH") == 0)
		{
			list_contacts(contacts, i);
			std::cout << "index: ";
			rr = !!std::getline(std::cin, cmd);
			if (is_number(cmd) == 1)
			{
				index = (cmd.length() != 0) ? std::stoi(cmd) : -1;
				if (index >= 0 && index < i)
					contacts[index].getcont();
				else
					std::cout << "ERROR: index out of range" << std::endl;
			}
			else
				std::cout << "ERROR: expected number!" << std::endl;
		}
		else if (cmd.compare("EXIT") == 0)
			return (0);	
	}
	return (0);
}
