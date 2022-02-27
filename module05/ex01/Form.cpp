/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 15:23:52 by zqadiri           #+#    #+#             */
/*   Updated: 2022/02/27 17:56:54 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*-- Constructor & Destructor --*/

Form::Form(): _name(), _grade_to_sign(), _grade_to_exec(){
	std::cout << "Form Default Constructor" << std::endl;      
}

Form::~Form(){
	std::cout << "Form Default Destructor" << std::endl;
}

Form::Form(std::string name, int sign, int exec) : _name(name), _grade_to_sign(sign), _grade_to_exec(exec)
{
	this->_singed = 0;
	std::cout << "Form Parameterized Constructor" << std::endl;
	if (sign > 150 || exec > 150)
		throw Form::GradeTooLowException();
	if (sign < 1 || exec < 1)
		throw Form::GradeTooHighException();
}

Form::Form(const Form &f): _name(f._name), _grade_to_sign(f._grade_to_sign), _grade_to_exec(f._grade_to_exec)
{
	std::cout << "Form copy Constructor" << std::endl;
	*this = f;  
}

/*-- Operators --*/

Form    &Form::operator=(const Form& f)
{
	std::cout << "Form = Operator " << std::endl;
	this->_singed = f._singed;
	return (*this);
}

std::ostream    &operator<<(std::ostream &os, const Form &f)
{
	std::cout << "Form's name : " << f.getName() <<std::endl;
	std::cout << "Is signed : " << f.getSigned() << std::endl;
	std::cout << "Grade required to Execute : " << f.getGradetoExec() << std::endl;
	std::cout << "Grade required to Signe : " << f.getGradetoSign() << std::endl;
	return (os);
}

/*-- Accessors --*/

std::string Form::getName(void) const{
	return (this->_name);
}

bool    Form::getSigned(void) const{
	return (this->_singed);
}

int     Form::getGradetoSign(void) const{
	return (this->_grade_to_sign);
}

int     Form::getGradetoExec(void) const{
	return (this->_grade_to_exec);
}

/*-- Functions  --*/

void    Form::beSigned(Bureaucrat &b)
{
	if (this->getSigned() == 1)
	{
		std::cout << "Form already signed" << std::endl;
		return ;
	}
	if (b.getGrade() > this->getGradetoSign())
	{
		std::cout << "This Form can not be signed " << std::endl;
		throw Form::GradeTooLowException();	
	}
	else{
		std::cout << "Form signed ! " << std::endl;
		this->_singed = 1;
	}
}
