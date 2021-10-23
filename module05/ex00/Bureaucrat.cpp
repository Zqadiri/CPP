/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 18:16:00 by zqadiri           #+#    #+#             */
/*   Updated: 2021/10/23 12:32:27 by zqadiri          ###   ########.fr       */
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

/*-- Accessors --*/

std::string	Bureaucrat::getName(void) const{
	return (this->_name);
}

int Bureaucrat::getGrade(void) const{
	return (this->_grade);
}

void	Bureaucrat::setName(std::string name){
	this->_name = name;
}

void	Bureaucrat::setGrade(int grade){
	this->_grade = grade;
}

