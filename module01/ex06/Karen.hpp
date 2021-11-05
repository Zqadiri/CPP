/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 17:30:40 by zqadiri           #+#    #+#             */
/*   Updated: 2021/11/05 17:48:09 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP_
#define KAREN_HPP_

#include <string>
#include<iostream>

class Karen
{
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
	public:
		Karen(void);
		~Karen(void);
		void complain( std::string level);      
};

#endif
