/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 19:52:56 by zqadiri           #+#    #+#             */
/*   Updated: 2022/02/27 20:21:31 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(/* args */)
{
}

Intern::~Intern()
{

}

// whose name is the one passed as parameter whose target will be initialized to the second parameter
Form  *makeForm(std::string formName , std::string target)
{
    // Intern creates <form>
    std::string names[] = {"robotomy request","shrubbery creation","presidential pardon"};
	Form* (Intern::*fct[])(std::string) = 
	{
		&Intern::RobotomyRequest, &Intern::ShrubberyCreation, &Intern::PresidentialPardon
	};
    
}

Form*	PresidentialPardon(std::string name)
{

}

Form*	ShrubberyCreation(std::string name)
{
    
}

Form*	RobotomyRequest(std::string name)
{
    
}