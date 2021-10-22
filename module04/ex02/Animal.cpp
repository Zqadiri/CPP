/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 12:30:11 by zqadiri           #+#    #+#             */
/*   Updated: 2021/10/22 17:07:37 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*-- Constructors & Destructor --*/

Animal::Animal()
{
	std::cout << "Default Constructor Called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Default Destructor Called" << std::endl;
}

Animal::Animal(const Animal& animal)
{
	std::cout << "Copy Constructor Called" << std::endl;
	*this = animal;
}

Animal::Animal(std::string type)
{
	std::cout << "Parameterized Constructor Called" << std::endl;
	this->_type = type;
}

/*-- Operator --*/

Animal	&Animal::operator=(const Animal &obj)
{
	std::cout << "Operator Called" << std::endl;
	this->_type = obj._type;
	return (*this);
}

/*-- Functions --*/

std::string Animal::getType(void) const{
	return (this->_type);
}