/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:40:47 by zqadiri           #+#    #+#             */
/*   Updated: 2021/12/21 17:35:41 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*-- Constructors & Destructor --*/

Cat::Cat(void){
	std::cout << "Default Constructor Called" << std::endl;
	this->_type = "Cat";
}

Cat::~Cat(void){
	std::cout << "Default Destructor Called" << std::endl;
}

// Cat::Cat(std::string type) : Animal(type){
// 	std::cout << "Parameterized Constructor Called" << std::endl;
// 	this->_type = type;
// }

Cat::Cat(const Cat &c) : Animal(c){
	std::cout << "Copy Constructor Called" << std::endl;
	*this = c;
}

/*-- Operator --*/

Cat	&Cat::operator=(const Cat &obj)
{
	std::cout << "Operator Called" << std::endl;
	this->_type = obj._type;
	return (*this);
}

/*-- Functions --*/

std::string Cat::getType(void) const{
	return (this->_type);
}

void	Cat::makeSound(void) const{
	std::cout << "meaw meaw" << std::endl;
}

