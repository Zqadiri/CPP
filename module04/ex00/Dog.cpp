/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:55:28 by zqadiri           #+#    #+#             */
/*   Updated: 2022/02/24 16:35:03 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*-- Constructors & Destructor --*/

Dog::Dog(void){
	std::cout << "Dog Default Constructor Called" << std::endl;
	this->_type = "Dog";
}

Dog::~Dog(void){
	std::cout << "Dog Default Destructor Called" << std::endl;
}

Dog::Dog(const Dog &c) : Animal(c){
    std::cout << "" << std::endl;
    *this = c;
}

/*-- Operators --*/

Dog	&Dog::operator=(const Dog &obj)
{
    std::cout << "Dog Assignment Operator Called" << std::endl;
	this->_type = obj._type;
	return (*this);
}

/*-- Functions --*/

std::string Dog::getType(void) const{
	return (this->_type);
}

void	Dog::makeSound(void)const{
	std::cout << "woaf woaff !" << std::endl;
}