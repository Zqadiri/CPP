/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 17:30:34 by zqadiri           #+#    #+#             */
/*   Updated: 2021/12/14 23:07:51 by zqadiri          ###   ########.fr       */
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
}

Karen::~Karen(void){
}

/*-- Member functions --*/

void    Karen::debug(void){
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double\
-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void     Karen::info(void){
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money.\
You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void     Karen::warning(void){
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been\
coming here for years and you just started working here last month." << std::endl;
}

void    Karen::error(void){
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

/*
 Unlike other pointers, a function pointer points to code rather than data. The start
 of executable code is commonly stored in a function pointer.
*/

int	getLevel(std::string level)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (size_t i = 0; i < 4; i++)
		if (!level.compare(levels[i]))
			return i;
	return -1;
}

void    Karen::complain(std::string level)
{
	fcnPtr Ptr[4] = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	switch (getLevel(level))
	{
		case 0:
			// for (size_t i = 0; i < 4; i++)
				(this->*Ptr[0])();
			// break;
		case 1:
			// for (size_t i = 1; i < 4; i++)
				(this->*Ptr[1])();
			// break;
		case 2:
			for (size_t i = 2; i < 4; i++)
				(this->*Ptr[i])();
			break;
		case 3:
			for (size_t i = 3; i < 4; i++)
				(this->*Ptr[i])();
			break;	
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
