/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 18:16:00 by zqadiri           #+#    #+#             */
/*   Updated: 2022/03/05 17:23:05 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*--- Exception --*/

const char* Bureaucrat::GradeTooHighException::what() const throw(){
	return "GradeTooHigh";
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return "GradeTooLow";
}

/*-- Constructor & Destructor --*/

Bureaucrat::Bureaucrat(){
	std::cout << "Bureaucrat Default Constructor" << std::endl;   
}

Bureaucrat::~Bureaucrat(){
	std::cout << "Bureaucrat Default Destructor" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
	std::cout << "Bureaucrat Parameterized Constructor" << std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &b): _name(b._name)
{
	std::cout << "Bureaucrat copy Constructor" << std::endl;
	*this = b;
}

/*-- Operators --*/

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &b)
{
	std::cout << " = Operator " << std::endl;
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
	try
	{
		f.beSigned(*this);
		std::cout << this->getName() << " signs " << f.getName() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << this->getName() << " cannot sign "
		<< f.getName() << " because " ;
		if (this->getGrade() > f.getGradetoSign())
			std::cout << "the grade is too low";
		if (this->getGrade() < f.getGradetoSign())
			std::cout << "the grade is too high";
		std::cout << std::endl;
	}
}

void	Bureaucrat::executeForm(Form const & form)
{
	try
	{
		form.execute(*this);
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << this->getName() << " can't execute > "  << e.what() << '\n';
	}
}
