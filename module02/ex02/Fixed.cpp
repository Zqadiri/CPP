/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 13:05:37 by zqadiri           #+#    #+#             */
/*   Updated: 2021/12/19 15:28:03 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*-------- Constructors && Destructor --------*/

Fixed::Fixed(void){
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

Fixed::Fixed(const Fixed &obj){
	std::cout << "Copy Constructor called " << std::endl;
	*this = obj;
}

Fixed::Fixed(const int i){
	std::cout << "Int constructor called" << std::endl;
	this->fixedPointValue = i << this->fractionalBits;
}

/*-------- Member functions --------*/

int Fixed::toInt( void ) const{
	return (this->fixedPointValue / (1 << this->fractionalBits));
}

Fixed::Fixed(const float f){
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

int     Fixed::getRawBits(void) const{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->fixedPointValue);
}

void    Fixed::setRawBits(int const raw){
	this->fixedPointValue = raw;
}

//*----------------- overloading operators -------------------*//

void    Fixed::operator=(const Fixed &obj){
	// std::cout << "Assignation operator called " << std::endl;
	this->fixedPointValue = obj.getRawBits();
}

// Overload output operator << to print values for user defined datatypes

std::ostream& operator<< (std::ostream& os, const Fixed & fix){
	os << fix.toFloat();
	return os;
}

	//?-------- Relational operators ---------?//

bool	Fixed::operator==(const Fixed& c1) const{
	return (this->getRawBits() == c1.getRawBits());
}

bool	Fixed::operator!=(const Fixed& c1) const{
	return (!(this->getRawBits() == c1.getRawBits()));
}

bool	Fixed::operator> (const Fixed& c1) const{
	return (this->getRawBits() > c1.getRawBits());
}

bool	Fixed::operator>=(const Fixed & a) const{
	return (this->getRawBits() >= a.getRawBits());
}

bool	Fixed::operator< (const Fixed& c1) const{
	return (this->getRawBits() < c1.getRawBits());
}

bool	Fixed::operator<= (const Fixed& c1) const{
	return (this->getRawBits() <= c1.getRawBits());
}

	//?-------- Arithmetic operators --------?//

Fixed Fixed::operator+(const Fixed &a) const{
	Fixed rtn;
	rtn.setRawBits(this->fixedPointValue + a.getRawBits());
	return (rtn);
}

Fixed Fixed::operator*(const Fixed &a)const {
	Fixed rtn;
	rtn.setRawBits(this->fixedPointValue * a.getRawBits());
	return (rtn);
}

Fixed Fixed::operator-(const Fixed &a)const {
	Fixed rtn;
	rtn.setRawBits(this->fixedPointValue - a.getRawBits());
	return (rtn);
}

Fixed Fixed::operator/(const Fixed &a)const {
	Fixed rtn;
	rtn.setRawBits(this->fixedPointValue / a.getRawBits());
	return (rtn);
}

	//?----- overloading postfix and prefix operators ----?//

/*
**	T& T::operator++()	=> Prefix Increment
**	T& T::operator--()	=> Prefix Decrement
*/

Fixed &Fixed::operator++(void){
	this->fixedPointValue++;
	return (*this);
}

Fixed &Fixed::operator--(void){
	this->fixedPointValue--;
	return (*this);
}

/*
 T T::operator++(int) => Postfix Increment
 T T::operator++(int) => Postfix Decrement
*/

/*
 Post-increment and post-decrement creates a copy of the object, increments or decrements 
 value of the object and returns the copy from before the increment or decrement.
*/

Fixed Fixed::operator++(int){
	Fixed tmp = *this;
	operator++();
	return (tmp);
}

Fixed Fixed::operator--(int){
	Fixed tmp = *this;
	operator--();
	return (tmp);
}

	//?----------- Static Member Functions --------------?//

/*
	the keyword static declares members that are not bound to class instances
*/

 Fixed& Fixed::min(Fixed& u, Fixed& v){
	return ((u > v) ? v : u);
}

 const Fixed&  Fixed::min (const Fixed &u, const Fixed &v){
	return ((u > v) ? v : u);
}

 Fixed&  Fixed::max(Fixed& u, Fixed& v){
	return ((u > v) ? u : v);
}

 const Fixed&  Fixed::max(const Fixed &u, const Fixed &v){
	return ((u > v) ? u : v);	
}

