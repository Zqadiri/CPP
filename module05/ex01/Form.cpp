/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 15:23:52 by zqadiri           #+#    #+#             */
/*   Updated: 2021/10/26 15:09:14 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*-- Constructor & Destructor --*/

Form::Form(){
	std::cout << "Default Constructor" << std::endl;      
}

Form::~Form(){
	std::cout << "Default Destructor" << std::endl;
}

Form::Form(std::string n, int sign, int exec)
{
	this->_singed = 0;
	std::cout << "Parameterized Constructor" << std::endl;
	if (sign > 150 || exec > 150)
		throw Form::GradeTooLowException();
	if (sign < 1 || exec < 1)
		throw Form::GradeTooHighException();
	this->_name = n;
	this->_grade_to_sign = sign;
	this->_grade_to_exec = exec;
}

Form::Form(const Form &f)
{
	std::cout << "copy Constructor" << std::endl;
	  *this = f;  
}

/*-- Operators --*/

Form    &Form::operator=(const Form& f)
{
	std::cout << " = Operator " << std::endl;
	this->_name = f._name;
	this->_singed = f._singed;
	this->_grade_to_sign = f._grade_to_sign;
	this->_grade_to_exec = f._grade_to_exec;
	return (*this);
}

std::ostream    &operator<<(std::ostream &o, const Form &f)
{
	std::cout << f.getName() << f.getSigned() << f.getGradetoExec() 
				<< f.getGradetoSign() << std::endl;
	return (o);
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
		std::cout << "This Form can not be signed :";
		throw Form::GradeTooLowException();	
	}
	else
		this->_singed = 1;
}
