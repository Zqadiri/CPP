/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 18:15:55 by zqadiri           #+#    #+#             */
/*   Updated: 2021/10/23 15:24:03 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main ()
{
	try
	{
		Bureaucrat a("bur1", 1);
		Bureaucrat b("bur2", 150);
		std::cout << a << std::endl;
		// a.increment();
		b.decrement();
		std::cout << b << std::endl;
		b.decrement();

	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (1);
}