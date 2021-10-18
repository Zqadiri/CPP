/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 13:05:33 by zqadiri           #+#    #+#             */
/*   Updated: 2021/10/18 18:23:14 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void )
{
	/*-- overloaded operator== and operator!= --*/
		
		Fixed a(12);
		Fixed c(15);
		std::cout << a << std::endl;
		std::cout << c << std::endl;
		std::cout << (a == c) << std::endl;
		std::cout << (a != c) << std::endl;

	// /*-- overloaded operator> and operator>= --*/
	
		std::cout << (a > c) << std::endl;
		std::cout << (a >= c) << std::endl;

	// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	// std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << b << std::endl;
	// std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}