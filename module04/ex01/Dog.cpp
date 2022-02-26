/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:55:28 by zqadiri           #+#    #+#             */
/*   Updated: 2022/02/26 16:27:11 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*-- Constructors & Destructor --*/

Dog::Dog(void){
	std::cout << "Dog Default Constructor Called" << std::endl;
	this->_type = "Dog";
	this->brain = new Brain();
	this->setBrain("Dog's brain");
}

Dog::~Dog(void){
	std::cout << "Dog Default Destructor Called" << std::endl;
	delete this->brain;
}

Dog::Dog(const Dog &c) : Animal(c){
    std::cout << "Dog Copy Constructor Called" << std::endl;
	this->brain = new Brain();
	brain = this->getBrain();
    *this = c;
}

/*-- Operators --*/

Dog	&Dog::operator=(const Dog &obj)
{
    std::cout << "Dog Operator Called" << std::endl;
	this->_type = obj._type;
	*(this->brain) = *(obj.brain);
	return (*this);
}

/*-- Accessors --*/

Brain	*Dog::getBrain( void ){
	return (this->brain);
}

void	Dog::setBrain( std:: string idea ){
	brain->setIdeas(idea);
}

/*-- Functions --*/

std::string Dog::getType(void) const{
	return (this->_type);
}

void	Dog::makeSound(void)const{
	std::cout << "woaf woaff" << std::endl;
}
