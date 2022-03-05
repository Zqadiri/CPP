/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 18:16:00 by zqadiri           #+#    #+#             */
/*   Updated: 2022/03/05 12:51:16 by zqadiri          ###   ########.fr       */
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

Bureaucrat::Bureaucrat(const Bureaucrat &b)
{
	std::cout << "Bureaucrat copy Constructor" << std::endl;
	*this = b;
}

/*-- Operators --*/

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &b)
{
	std::cout << "Bureaucrat  = Operator " << std::endl;
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
	if (this->_grade < 2){
		throw Bureaucrat::GradeTooHighException();
	}
	this->_grade--;
}
