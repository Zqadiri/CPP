/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 16:14:20 by zqadiri           #+#    #+#             */
/*   Updated: 2021/10/21 16:40:00 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/*-- Constructors & Destructor --*/

WrongAnimal::WrongAnimal()
{
	std::cout << "Default Constructor Called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Default Destructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& WrongAnimal)
{
    std::cout << "Copy Constructor Called" << std::endl;
	*this = WrongAnimal;
}

WrongAnimal::WrongAnimal(std::string type)
{
	std::cout << "Parameterized Constructor Called" << std::endl;
	this->_type = type;
}

/*-- Operator --*/

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &obj)
{
    std::cout << "Operator Called" << std::endl;
	this->_type = obj._type;
	return (*this);
}

/*-- Functions --*/

std::string WrongAnimal::getType(void) const{
	return (this->_type);
}

void	WrongAnimal::makeSound(void)const{
	std::cout << "WrongAnimal sound" << std::endl;
}

