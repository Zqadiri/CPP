/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 18:15:55 by zqadiri           #+#    #+#             */
/*   Updated: 2022/02/27 17:42:02 by zqadiri          ###   ########.fr       */
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
		std::cout << f1 << std::endl;
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