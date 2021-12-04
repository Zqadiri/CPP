/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 14:02:41 by zqadiri           #+#    #+#             */
/*   Updated: 2021/12/04 20:51:43 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

#define ERROR "* ARGUMENT ERROR *"
#define FILE_ERROR "* BAD FILE *"



std::string		megaphone(std::string filename)
{
	std::string output;
	for (int i = 0; i < filename[i]; i++)
		output += toupper(filename[i]);
	output += ".replace";
	return (output);
}

int     main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << ERROR << std::endl;
		return (EXIT_FAILURE);
	}
	else
	{
		std::string filename(argv[1]);
		std::string string1(argv[2]);
		std::string string2(argv[3]);
		std::string output(argv[1]);
		std::string buffer;
		std::ifstream ifs(filename);
		if (!ifs.good()) 
		{
			std::cout << FILE_ERROR << std::endl;
			return (EXIT_FAILURE);
		}
		output = megaphone(filename);
		std::ofstream ofs(output);
		if (!ofs.good()) 
		{
			std::cout << FILE_ERROR << std::endl;
			return (EXIT_FAILURE);
		}
		size_t pos = 0;
		while(std::getline(ifs, buffer))
		{
			size_t index = 0;
			while ((pos = buffer.find(string1, index)) >= 0 && pos != std::string::npos)
			{
				buffer.erase(pos, string1.length());
				buffer.insert(pos, string2);
				index = pos+string1.length();
			}
			ofs << buffer << std::endl;
		}
		ifs.close();
		ofs.close();
	}
	return (1);
}