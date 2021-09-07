/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 16:34:04 by abel-mak          #+#    #+#             */
/*   Updated: 2021/07/13 11:58:26 by abel-mak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
	{
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "-----" << std::endl;
		try
		{
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		Span sp = Span(5);
		sp.addNumber(-5);
		sp.addNumber(-3);
		sp.addNumber(-17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "-----" << std::endl;
		try
		{
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "-----" << std::endl;
		try
		{
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		Span sp = Span(5);
		sp.addNumber(5);
		std::cout << "-----" << std::endl;
		try
		{
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		Span sp = Span(5);
		std::cout << "-----" << std::endl;
		try
		{
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		try 
		{
			Span sp = Span(5);
			std::cout << "-----" << std::endl;
			sp.addNumber(5);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			sp.addNumber(9);
			sp.addNumber(9);
			sp.addNumber(9);
			sp.addNumber(11);
			sp.addNumber(11);
			sp.addNumber(11);
			std::cout << "-----" << std::endl;

		}
		catch(std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::vector<int> a;
		Span sp = Span(5);

		a.push_back(9);
		a.push_back(1069);
		a.push_back(0);
		a.push_back(257);
		a.push_back(18);
		sp.addNumber(a.begin(), a.end());
		std::cout << "-----" << std::endl;
		try
		{
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::vector<int> a(10000, 111);
		Span sp = Span(10020);

		a.push_back(9);
		a.push_back(1069);
		a.push_back(0);
		a.push_back(257);
		a.push_back(18);
		sp.addNumber(a.begin(), a.end());
		std::cout << "-----" << std::endl;
		try
		{
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::vector<int> a(10001, 111);
		Span sp = Span(10000);
		
		std::cout << "-----" << std::endl;
		try
		{
			sp.addNumber(a.begin(), a.end());
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
}
