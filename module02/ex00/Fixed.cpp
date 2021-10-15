/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 12:54:22 by zqadiri           #+#    #+#             */
/*   Updated: 2021/10/15 12:01:28 by zqadiri          ###   ########.fr       */
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

