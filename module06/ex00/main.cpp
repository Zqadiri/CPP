/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:40:55 by zqadiri           #+#    #+#             */
/*   Updated: 2022/02/28 17:28:01 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>

#define ERROR "ARG error"
#define NON_dis "Non displayable"
#define IMP "impossible operation"

char	isChar(char	**argv)
{
	std::string str;

	str = argv[1];
	if (str.size() == 1 && !std::isdigit(str[0]))
		return (str[0]);
	return (0);
}

/*
	The isprint() function checks whether a character is a printable character or not.
	https://stackoverflow.com/questions/103512/why-use-static-castintx-instead-of-intx
*/

void	convertToChar(char **argv)
{
	std::cout << "char : ";
	if (isChar(argv)){
		std::cout << isChar(argv) << std::endl;
	}
	else
	{
		try{
			int output = std::stoi(argv[1]);
			if (output < 0 || output > 255)
				throw std::out_of_range();
			if (!std::isprint(output)){
				std::cout << NON_dis << std::endl;
				return;	
			}
			std::cout << static_cast<char>(output) << std::endl;
		}
		catch(std::exception &e){
			std::cout << IMP << std::endl;
		}
	}
}

void	convertToInt(char **argv)
{
	std::cout << "int : ";
	if (isChar(argv)){
		std::cout << static_cast<int>(isChar(argv)) << std::endl;
	}
	else{
		try{
			int output = std::stoi(argv[1]);
			std::cout << static_cast<int>(output) << std::endl;
		}
		catch(std::exception &e){
			std::cout << IMP << std::endl;
		}
	}
}

void	convertToFloat(char **argv)
{
	std::cout << "float : ";
	if (isChar(argv)){
		std::cout << static_cast<float> (isChar(argv))
						<< ".0f"<< std::endl;
	}
	else{
		try{
			float output = std::stof(argv[1]);
			std::cout << static_cast<float>(output);
			if (output == (int)output)
				std::cout << ".0f"<< std::endl;
			else
				std::cout << "f"<< std::endl;
		}catch(std::exception &e){
			
		}
	}
}

void	convertToDouble(char **argv)
{
	std::cout << "double : ";
	if (isChar(argv)){
		std::cout << static_cast<double> (isChar(argv)) << std::endl;
	}
	else{
		try{
			float output = std::stod(argv[1]);
			std::cout << static_cast<double>(output);
			if (output == (int)output)
				std::cout << ".0"<< std::endl;
		}catch(std::exception &e){
			
		}
	}
	// std::cout << std::endl;
}

int     main(int argc, char **argv)
{
	if (argc != 2)
		std::cout << ERROR << std::endl;
	else
	{
		convertToChar(argv);
		convertToInt(argv);
		convertToFloat(argv);
		convertToDouble(argv);
	}
	return (1);
}
