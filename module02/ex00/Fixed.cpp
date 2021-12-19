/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 12:54:22 by zqadiri           #+#    #+#             */
/*   Updated: 2021/12/16 12:58:21 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*-- Constructors & Destructor --*/

Fixed::Fixed(void){
	std::cout << "Default Constructor called " << std::endl;
	fixedPointValue = 0;
}

Fixed::~Fixed(void){
	std::cout << "Default Destructor called " << std::endl;
}

/*
	The copy constructor is for creating a new object. It copies an existing 
	object to a newly constructed object.The copy constructor
 	is used to initialize a new instance from an old instance.
*/

Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy Constructor called " << std::endl;
	*this = obj;
}

/*-- Operators --*/

/*
	An assignment operator is used to replace the data of a previously 
	initialized object with some other object's data.
	NOTE: A reference gets returned. This enables chain assignments like in `c = a = b`
*/

Fixed 	&Fixed::operator=(const Fixed &obj)
{
	std::cout << "Assignation operator called " << std::endl;
	this->fixedPointValue = obj.getRawBits();
	return (*this);
}

/*-- Menber functions --*/

int     Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixedPointValue);
}

void    Fixed::setRawBits(int const raw){
	this->fixedPointValue = raw;
}

