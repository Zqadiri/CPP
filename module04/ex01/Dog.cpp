/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:55:28 by zqadiri           #+#    #+#             */
/*   Updated: 2021/12/21 17:45:39 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*-- Constructors & Destructor --*/

Dog::Dog(void){
	std::cout << "Dog Default Constructor Called" << std::endl;
	this->brain = new Brain();
	brain->setIdeas("7mara");
}

Dog::~Dog(void){
	std::cout << "Dog Default Destructor Called" << std::endl;
	delete this->brain;
}

/*
	https://www.geeksforgeeks.org/shallow-copy-and-deep-copy-in-c/
*/

Dog::Dog(std::string type) : Animal("Dog"){
	std::cout << "Dog Parameterized Constructor Called" << std::endl;
	this->_type = type;
	this->brain = new Brain();
}

Dog::Dog(const Dog &c) : Animal(c){
    std::cout << "" << std::endl;
	this->brain = new Brain();
	*brain = *(c.brain);
    *this = c;
}

/*-- Accessors --*/

Brain	*Dog::getBrain( void ){
	return (this->brain);
}

void	Dog::setBrain( std:: string idea ){
	brain->setIdeas(idea);
}


/*-- Operator --*/

Dog	&Dog::operator=(const Dog &obj)
{
    std::cout << "Dog Operator Called" << std::endl;
	this->_type = obj._type;
	*(this->brain) = *(obj.brain);
	return (*this);
}

/*-- Functions --*/

std::string Dog::getType(void) const{
	return (this->_type);
}

void	Dog::makeSound(void)const{
	std::cout << "woaf woaff" << std::endl;
}