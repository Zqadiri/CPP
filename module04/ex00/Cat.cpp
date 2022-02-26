/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:40:47 by zqadiri           #+#    #+#             */
/*   Updated: 2022/02/24 16:34:32 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*-- Constructors & Destructor --*/

Cat::Cat(void){
	std::cout << "Cat Default Constructor Called" << std::endl;
	this->_type = "Cat";
}

Cat::~Cat(void){
	std::cout << "Cat Default Destructor Called" << std::endl;
}

Cat::Cat(const Cat &c) : Animal(c){
	std::cout << "Cat Copy Constructor Called" << std::endl;
	*this = c;
}

/*-- Operators --*/

Cat	&Cat::operator=(const Cat &obj)
{
	std::cout << "Cat Assignment Operator Called" << std::endl;
	this->_type = obj._type;
	return (*this);
}

/*-- Functions --*/

std::string Cat::getType(void) const{
	return (this->_type);
}

void	Cat::makeSound(void) const{
	std::cout << "meaw meaw !" << std::endl;
}

