/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 09:48:26 by zqadiri           #+#    #+#             */
/*   Updated: 2021/11/07 19:14:55 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>

#define ERROR  "* LOUD AND UNBEARABLE FEEDBACK NOISE *"

int main(int argc, char *argv[])
{
	if (argc == 1)
		std::cout << ERROR << std::endl;
	else 
	{
		for (int i = 1; i < argc; i++)
			for (int j = 0; argv[i][j]; j++)
				std::cout << (char)toupper(argv[i][j]);
		std::cout << std::endl;
	}
	return (0);
}