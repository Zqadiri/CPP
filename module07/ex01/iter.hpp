/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:06:27 by zqadiri           #+#    #+#             */
/*   Updated: 2022/03/10 17:19:41 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

//* Testing

class Awesome
{
	public:
	Awesome( void ) : _n( 42 ) { return; }
	int get( void ) const { return this->_n; }
	private:
	int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) {
	o << rhs.get(); 
	return o; 
}

//*

template <typename T>
void print( T const & x ){
	std::cout << x << std::endl;
	return; 
}

template <typename T>
void	iter(T *array, int count, void (*func)(const T &)){
	for (int i = 0; i < count; i++){
		func(array[i]);
	}
}

#endif