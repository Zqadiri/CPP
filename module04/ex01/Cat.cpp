/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:40:47 by zqadiri           #+#    #+#             */
/*   Updated: 2022/02/24 16:58:36 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*-- Constructors & Destructor --*/

Cat::Cat(void){
	std::cout << "Cat Default Constructor Called" << std::endl;
	this->_type = "Cat";
	this->brain = new Brain();
}

Cat::~Cat(void){
	std::cout << "Cat Default Destructor Called" << std::endl;
	delete this->brain;
}

Cat::Cat(const Cat &c) : Animal(c){
	std::cout << "Cat Copy Constructor Called" << std::endl;
	*this->brain = *(c.brain);
	*this = c;
}

/*-- Operator --*/

Cat	&Cat::operator=(const Cat &obj)
{
	std::cout << "Cat Operator Called" << std::endl;
	this->_type = obj._type;
	*(this->brain) = *(obj.brain);
	return (*this);
}

/*-- Accessors --*/

Brain	*Cat::getBrain( void ){
	return (this->brain);
}

void	Cat::setBrain( std:: string idea ){
	brain->setIdeas(idea);
}


/*-- Functions --*/

std::string Cat::getType(void) const{
	return (this->_type);
}

void	Cat::makeSound(void) const{
	std::cout << "meaw meaw" << std::endl;
}

