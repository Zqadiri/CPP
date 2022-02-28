/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 18:15:55 by zqadiri           #+#    #+#             */
/*   Updated: 2022/02/28 12:34:00 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main (void)
{
	Intern someRandomIntern;
	Form* rrf;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	std::cout << "Type of the form : " << rrf->getName() << std::endl;
	{
		Intern someRandomIntern;
		Form *ret;

		ret = someRandomIntern.makeForm("shrubbery creation", "form");
		ret->execute(Bureaucrat());
	}
	{
		try 
		{
			std::cout << "-- Invalid Form --" << std::endl;
			Intern someRandomIntern;
			Form *ret;

			ret = someRandomIntern.makeForm("cherry creation", "form");
			ret->execute(Bureaucrat());
		}
		catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}
	}
	return EXIT_SUCCESS;
}