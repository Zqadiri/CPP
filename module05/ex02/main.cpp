/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 18:15:55 by zqadiri           #+#    #+#             */
/*   Updated: 2021/10/26 16:06:21 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
int main ()
{
	try
	{
		Bureaucrat a("bur1", 1);
		Bureaucrat b("bur2", 150);
		Form f1("form1" , 3, 5);
		f1.beSigned(b);
		b.decrement();
		std::cout << b << std::endl;
		b.decrement();
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	return (1);
}