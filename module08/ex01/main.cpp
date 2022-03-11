/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:07:03 by zqadiri           #+#    #+#             */
/*   Updated: 2022/03/11 22:05:45 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int RandomNumber () { 
	return (std::rand()%100); 
}

int main()
{
	{
		std::cout << "----------------------" << std::endl;
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "Long  Span : "  << sp.longestSpan() << std::endl;
		std::cout << "Short Span : "  << sp.shortestSpan()  << std::endl;
		try{
			sp.addNumber(11);
		}catch(std::exception &e){
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << "--------------------" << std::endl;
		Span M = Span(10000);
		for (int i = 0; i < 10000; i++)
			M.addNumber(std::rand() % 100);
		// M.printAll();
		std::cout << "Long  Span : "  << M.longestSpan() << std::endl;
		std::cout << "Short Span : "  << M.shortestSpan()  << std::endl;
	}
	{
		std::cout << "--------------------" << std::endl;
		std::vector<int> vec(100, 0);
		std::generate(vec.begin(), vec.end(), RandomNumber);
		Span sp1 = Span(100);
		sp1.addRange(vec.begin(), vec.end());
		std::cout << "Long  Span : "  << sp1.longestSpan() << std::endl;
		std::cout << "Short Span : "  << sp1.shortestSpan()  << std::endl;
		// sp1.printAll();
	}
	{
		std::cout << "--------------------" << std::endl;
		try{
			Span sp2 = Span(1);
			sp2.addNumber(5);
			std::cout << sp2.shortestSpan() << std::endl;
			std::cout << sp2.longestSpan() << std::endl;
		}
		catch(std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
}