/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 13:05:37 by zqadiri           #+#    #+#             */
/*   Updated: 2021/10/15 18:27:15 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default Constructor called " << std::endl;
	fixedPointValue = 0;
}
Fixed::~Fixed(void){
	std::cout << "Default Destructor called " << std::endl;
}

/*
	A copy constructor is a member function that initializes an 
	object using another object of the same class.
*/

Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy Constructor called " << std::endl;
	*this = obj;
}

Fixed::Fixed(const int i)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixedPointValue = i << this->fractionalBits;
}

int Fixed::toInt( void ) const
{
	return (this->fixedPointValue / (1 << this->fractionalBits));
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixedPointValue = roundf(f * (1 << this->fractionalBits));
}

float Fixed::toFloat( void ) const{
    return (((float)(this->fixedPointValue) / (1 << this->fractionalBits)));
}
/*
	The purpose of the copy constructor and the assignment operator are almost equivalent -- 
	both copy one object to another. However, the copy constructor initializes new objects,
	whereas the assignment operator replaces the contents of existing objects
*/

void    Fixed::operator=(const Fixed &obj)
{
	std::cout << "Assignation operator called " << std::endl;
	this->fixedPointValue = obj.getRawBits();
}

int     Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixedPointValue);
}

void    Fixed::setRawBits(int const raw){
	this->fixedPointValue = raw;
}
