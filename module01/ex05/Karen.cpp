/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 17:30:34 by zqadiri           #+#    #+#             */
/*   Updated: 2021/12/03 14:36:37 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Karen.hpp"

/*
 typedef is a language construct that associates a name to a type.
 ex:  
 	typedef int myinteger;
 	myinteger i;   // is equivalent to    int i;
 A function pointer stores the address of a function.
*/

typedef void (Karen::*fcnPtr)(void);   

/*-- Constructors & Destructor --*/

Karen::Karen(void){
	std::cout << "Karen is awake" << std::endl;
}

Karen::~Karen(void){
	std::cout << "Karen is gone" << std::endl;
}

/*-- Member functions --*/

void    Karen::debug(void){
	std::cout << "I love to get extra bacon for my 7XL-double\
-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void     Karen::info(void){
	std::cout << "I cannot believe adding extra bacon cost more money.\
You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void     Karen::warning(void){
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been\
coming here for years and you just started working here last month." << std::endl;
}

void    Karen::error(void){
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

/*
 Unlike other pointers, a function pointer points to code rather than data. The start
 of executable code is commonly stored in a function pointer.
*/

void    Karen::complain(std::string level)
{
	fcnPtr Ptr[4] = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	std::string String[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (!level.compare(String[i]))
			(this->*Ptr[i])();
	}
}
