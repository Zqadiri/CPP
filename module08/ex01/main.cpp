/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:07:03 by zqadiri           #+#    #+#             */
/*   Updated: 2021/11/04 17:02:20 by zqadiri          ###   ########.fr       */
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
		std::cout << sp.longestSpan() << std::endl;
		std::cout << sp.shortestSpan()  << std::endl;

		std::cout << "--------------------" << std::endl;
		std::vector<int> vec;
		Span sp1 = Span(5);
		vec.push_back(5);
		vec.push_back(59);
		vec.push_back(100);
		vec.push_back(0);
		vec.push_back(4);
		sp1.addRange(vec.begin(), vec.end());
		sp1.printAll();

		// std::vector<int>::iterator begin = vec.begin();
		// std::vector<int>::iterator end = vec.end();

		Span M = Span(10000);
		for (int i = 0; i < 10000; i++)
			M.addNumber(rand());
		std::cout << "/*******************/" << std::endl;
		std::cout << M.longestSpan() << std::endl;
		std::cout << M.shortestSpan()  << std::endl;
		// M.printAll();	
	}
	{
		try
		{
			Span sp2 = Span(1);
			sp2.addNumber(5);
			std::cout << sp2.shortestSpan() << std::endl;
			std::cout << sp2.longestSpan() << std::endl;
		}
		catch(std::exception &e)
		{
			std::cout << "THERE IS NO SPAN FOUND !" << std::endl;
		}
	}
}