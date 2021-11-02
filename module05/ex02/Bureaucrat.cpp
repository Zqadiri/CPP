/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 18:16:00 by zqadiri           #+#    #+#             */
/*   Updated: 2021/10/26 16:03:44 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*-- Constructor & Destructor --*/

Bureaucrat::Bureaucrat(){
	std::cout << "Default Constructor" << std::endl;   
}

Bureaucrat::~Bureaucrat(){
	std::cout << "Default Destructor" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
	std::cout << "Parameterized Constructor" << std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_name = name;
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &b)
{
	std::cout << "copy Constructor" << std::endl;
	*this = b;
}

/*-- Operators --*/

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &b)
{
	std::cout << " = Operator " << std::endl;
	this->_name = b._name;
	this->_grade = b._grade;
	return (*this);
}

std::ostream &operator<< (std::ostream& oc, Bureaucrat const &b)
{
	std::cout << b.getName() << ", bureaucrat grade " << b.getGrade();
	return (oc);
}

/*-- Accessors --*/

std::string	Bureaucrat::getName(void) const{
	return (this->_name);
}

int Bureaucrat::getGrade(void) const{
	return (this->_grade);
}

/*-- Functions --*/

void	Bureaucrat::decrement(void){
	if (this->_grade > 149){
		throw Bureaucrat::GradeTooLowException();
	}
	this->_grade++;
}

void	Bureaucrat::increment(void){
	if (this->_grade < 1){
		throw Bureaucrat::GradeTooHighException();
	}
	this->_grade--;
}

void	Bureaucrat::signForm(Form &f)
{
	if (f.getSigned() == 1){
		std::cout << this->getName() << " signs " << f.getName() << std::endl;
	}
	else{
		std::cout << this->getName() << " cannot sign "
		<< f.getName() << " because " ;
		if (this->getGrade() > f.getGradetoSign())
			std::cout << "the grade is too low";
		if (this->getGrade() < f.getGradetoSign())
			std::cout << "the grade is too high";
	}
}
