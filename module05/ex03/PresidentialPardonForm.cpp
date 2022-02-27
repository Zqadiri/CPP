/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 10:02:49 by zqadiri           #+#    #+#             */
/*   Updated: 2022/02/27 19:23:12 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/*-- Constructors & destructors --*/

PresidentialPardonForm::PresidentialPardonForm(){
	std::cout << "PresidentialForm Default Constructor "<< std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(){
	std::cout << "PresidentialForm Default Destructor " << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", 25, 5){
	std::cout << "PresidentialForm Parmeterized Constructor " << std::endl;
	this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & pf): Form("PresidentialPardonForm", 25, 5){
	std::cout << "PresidentialForm Copy Constructor " << std::endl;
	*this = pf;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm& p){
	std::cout << "PresidentialForm = Operator" << std::endl;
	this->target = p.target;
	return (*this);
}

/*-- Member Functions --*/

void    PresidentialPardonForm::execute(Bureaucrat const &b)const{
	if (this->getSigned() == 0)
		throw Form::NotSigned();	
	else if (b.getGrade() > this->getGradetoExec())
		throw Bureaucrat::GradeTooLowException();
	std::cout << this->target <<  " has been pardoned by Zafod Beeblebrox" << std::endl;
}
