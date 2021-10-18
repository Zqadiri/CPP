/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 13:05:32 by zqadiri           #+#    #+#             */
/*   Updated: 2021/10/18 16:15:00 by zqadiri          ###   ########.fr       */
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
};

std::ostream & operator<< (std::ostream& os, Fixed const &fix);
bool operator== (const Fixed& c1, const Fixed& c2);
bool operator!= (const Fixed& c1, const Fixed& c2);
bool operator> (const Fixed& c1, const Fixed& c2);
xed& c2);
bool operator<= (const Fixed& c1, const Fixed& c2);bool operator>= (const Fixed& c1, const Fixed& c2);
bool operator< (const Fixed& c1, const Fi

#endif
