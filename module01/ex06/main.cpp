/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 17:30:37 by zqadiri           #+#    #+#             */
/*   Updated: 2021/11/05 18:51:44 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#define ERROR "argument error"

int	getLevel(std::string level, std::string levels[])
{
	for (size_t i = 0; i < 4; i++)
		if (!level.compare(levels[i]))
			return i;
	return -1;
}

int main(int argc, char *argv[])
{
	Karen karen;
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	if (argc <= 1 || argc > 2){
		std::cout << ERROR << std::endl;
		return 1;		
	}
	else
	{
		std::string level(argv[1]);
		switch (getLevel(level, levels))
		{
			case 0:
				karen.complain(levels[0]);
				break;
			case 1:
				for (size_t i = 0; i <= 1; i++)
					karen.complain(levels[i]);
				break;
			case 2:
				for (size_t i = 0; i <= 2; i++)
					karen.complain(levels[i]);
				break;
			case 3:
				for (size_t i = 0; i <= 3; i++)
					karen.complain(levels[i]);
				break;	
			default:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		}
	}
	return (0);
}
