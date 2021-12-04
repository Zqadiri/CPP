/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 17:30:37 by zqadiri           #+#    #+#             */
/*   Updated: 2021/12/04 21:12:08 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#define ERROR "argument error"

int main(int argc, char *argv[])
{
	Karen karen;
	if (argc <= 1 || argc > 2) {
		std::cout << ERROR << std::endl;
		return 1;		
	}
	else
		karen.complain(argv[1]);
	return (0);
}
