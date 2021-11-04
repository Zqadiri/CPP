/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:35:59 by zqadiri           #+#    #+#             */
/*   Updated: 2021/11/04 11:03:28 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
	int occur(4);

	std::vector <int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(6);
	v.push_back(7);
	if (easyfind(v, occur) == -1)
		std::cout << "Element not found.\n\n";
	else{
		std::cout << "Element " << occur <<" found at position : " ;
        std::cout << easyfind(v, occur) << " (counting from zero) \n" ;
	}
	return 0;
}
