/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 10:02:57 by zqadiri           #+#    #+#             */
/*   Updated: 2021/11/02 11:46:13 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*-- Constructors & destructors --*/

RobotomyRequestForm::RobotomyRequestForm(){
	std::cout << "Default Constructor "<< std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(){
	std::cout << "Default Destructor " << std::endl;  
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("RobotomyRequestForm", 72, 45){
	std::cout << "Parmeterized Constructor " << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &rf): Form("RobotomyRequestForm", 72, 45){
	std::cout << "Copy Constructor " << std::endl;
	*this = rf;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm& r){
	std::cout << "= Operator" << std::endl;
	this->target = r.target;
	return (*this);
}

/*-- Member Functions --*/


void RobotomyRequestForm::execute(Bureaucrat const &b)const{
	int random;
	if (this->getSigned() == 1)
		std::cout << "Form id already signed !" << std::endl;
	else if (b.getGrade() > this->getGradetoExec())
		throw Bureaucrat::GradeTooLowException();
	random = rand();
	if (random % 2 == 0)
		std::cout << this->target << "has been robotomized successfully 50% of the time." << std::endl;
	else
		std::cout << "IT'S a FAILURE." << std::endl;
}


