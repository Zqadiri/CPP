/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 19:52:00 by zqadiri           #+#    #+#             */
/*   Updated: 2022/02/27 20:13:56 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		Intern();
		~Intern();
		Intern( Intern const & src );
		Form*	Makeform(std::string form,std::string name);
		Form*	PresidentialPardon(std::string name);
		Form*	ShrubberyCreation(std::string name);
		Form*	RobotomyRequest(std::string name);

		Intern &		operator=( Intern const & rhs );
};
