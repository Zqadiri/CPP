/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 10:02:49 by zqadiri           #+#    #+#             */
/*   Updated: 2021/11/02 11:30:03 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/*-- Constructors & destructors --*/

PresidentialPardonForm::PresidentialPardonForm(){
	std::cout << "Default Constructor "<< std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(){
	std::cout << "Default Destructor " << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", 25, 5){
	std::cout << "Parmeterized Constructor " << std::endl;
	this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & pf): Form("PresidentialPardonForm", 25, 5){
	std::cout << "Copy Constructor " << std::endl;
	*this = pf;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm& p){
	std::cout << "= Operator" << std::endl;
	this->target = p.target;
	return (*this);
}

/*-- Member Functions --*/

void    PresidentialPardonForm::execute(Bureaucrat const &b)const{
	if (this->getSigned() == 1)
		std::cout << "Form id already signed !" << std::endl;
	else if (b.getGrade() > this->getGradetoExec())
		throw Bureaucrat::GradeTooLowException();
	std::cout << this->target <<  " has been pardoned by Zafod Beeblebrox" << std::endl;
}
