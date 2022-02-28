/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 19:52:56 by zqadiri           #+#    #+#             */
/*   Updated: 2022/02/28 12:33:48 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(){
	std::cout << "Intern Default constructor" << std::endl;
}

Intern::~Intern(){
	std::cout << "Intern Default Destructor" << std::endl;
}

Form  *Intern::makeForm(std::string formName , std::string target)
{
	int i = 0;
	std::string requests[] = {"robotomy request","shrubbery creation","presidential pardon"}; // array of requests
	Form* (Intern::*fct[])(std::string) = {&Intern::RobotomyRequest, &Intern::ShrubberyCreation, &Intern::PresidentialPardon};
	for (i = 0; i < 3; i++)
	{
		if (!formName.compare(requests[i])){
			std::cout << "Intern creates " << requests[i] << std::endl;
			break;
		}
	}
	if (i == 3)
		throw Intern::invalidForm();
	return (this->*fct[i])(target);
}

Form*	Intern::RobotomyRequest(std::string target)
{
	RobotomyRequestForm *ret = new RobotomyRequestForm(target);
	return ret;
}

Form*	Intern::PresidentialPardon(std::string target)
{
	PresidentialPardonForm *ret = new PresidentialPardonForm(target);
	return ret;
}

Form*	Intern::ShrubberyCreation(std::string target)
{
    ShrubberyCreationForm *ret = new ShrubberyCreationForm(target);
	return ret;
}
