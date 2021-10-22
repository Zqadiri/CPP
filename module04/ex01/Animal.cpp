/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 12:30:11 by zqadiri           #+#    #+#             */
/*   Updated: 2021/10/22 13:10:13 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*-- Constructors & Destructor --*/

Animal::Animal()
{
	std::cout << "Animal Default Constructor Called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal Default Destructor Called" << std::endl;
}

Animal::Animal(const Animal& animal)
{
	std::cout << "Animal Copy Constructor Called" << std::endl;
	*this = animal;
}

Animal::Animal(std::string type)
{
	std::cout << "Animal Parameterized Constructor Called" << std::endl;
	this->_type = type;
}

/*-- Operator --*/

Animal	&Animal::operator=(const Animal &obj)
{
	std::cout << "Animal Operator Called" << std::endl;
	this->_type = obj._type;
	return (*this);
}

/*-- Functions --*/

std::string Animal::getType(void) const{
	return (this->_type);
}

void	Animal::makeSound(void) const{
	std::cout << "Animal sound" << std::endl;
}