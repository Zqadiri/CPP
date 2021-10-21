/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 16:17:50 by zqadiri           #+#    #+#             */
/*   Updated: 2021/10/21 16:39:39 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/*-- Constructors & Destructor --*/

WrongCat::WrongCat(void){
	std::cout << "Default Constructor Called" << std::endl;
}

WrongCat::~WrongCat(void){
	std::cout << "Default Destructor Called" << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type){
	std::cout << "Parameterized Constructor Called" << std::endl;
	this->_type = type;
}

WrongCat::WrongCat(const WrongCat &c) : WrongAnimal(c){
	std::cout << "Copy Constructor Called" << std::endl;
	*this = c;
}

/*-- Operator --*/

WrongCat	&WrongCat::operator=(const WrongCat &obj)
{
	std::cout << "Operator Called" << std::endl;
	this->_type = obj._type;
	return (*this);
}

/*-- Functions --*/

std::string WrongCat::getType(void) const{
	return (this->_type);
}

void	WrongCat::makeSound()const{
	std::cout << "meaw meaw" << std::endl;
}