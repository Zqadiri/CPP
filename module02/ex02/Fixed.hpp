/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 13:05:32 by zqadiri           #+#    #+#             */
/*   Updated: 2021/12/19 15:26:34 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP_
#define FIXED_HPP_

#include<iostream>
#include <string>
#include <cmath>

class Fixed
{
 	private:
		int fixedPointValue;
		static const int fractionalBits = 8;
	public:
		Fixed(void);
		~Fixed(void);
		Fixed(const Fixed &obj);
		Fixed(const int i);
		Fixed(const float f);

	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
	void operator= (const Fixed &obj);
	
	bool operator== ( const Fixed  &a) const;
	bool operator!= (const Fixed& c1) const;
	bool operator> (const Fixed& c1) const;
	bool operator>= (const Fixed& c1) const;
	bool operator< (const Fixed& c1) const;
	bool operator<= (const Fixed& c1) const;
	
	Fixed operator+(const Fixed &a) const ;
	Fixed operator*(const Fixed &a) const ;
	Fixed operator-(const Fixed &a) const ;
	Fixed operator/(const Fixed &a) const ;

	Fixed &operator++(void);
	Fixed &operator--(void);
	Fixed operator++(int);
	Fixed operator--(int);

	static Fixed &min(Fixed&, Fixed&);
	static const Fixed &min(const Fixed &, const Fixed &);
	static Fixed &max(Fixed&, Fixed&);
	static const Fixed &max (const Fixed &, const Fixed &);
	
};

std::ostream & operator<< (std::ostream& os, Fixed const &fix);

#endif
