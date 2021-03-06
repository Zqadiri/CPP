/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 12:56:07 by zqadiri           #+#    #+#             */
/*   Updated: 2021/12/16 12:58:13 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP_
#define FIXED_HPP_

#include <string>
#include <iostream>

class Fixed
{
  private:
	int fixedPointValue;
	static const int fractionalBits = 8;
  public:
	Fixed(void);
	~Fixed(void);
	Fixed(const Fixed &obj);
	  
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	Fixed &operator= (const Fixed &obj);
};

#endif