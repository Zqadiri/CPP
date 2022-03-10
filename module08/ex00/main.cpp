/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:35:59 by zqadiri           #+#    #+#             */
/*   Updated: 2022/03/10 13:59:15 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <stack>

int main(void)
{
	int occur(4);

	std::stack <int> v;
	v.push(1);
	v.push(2);
	v.push(3);
	v.push(4);
	v.push(5);
	v.push(6);
	v.push(7);
	if (easyfind(v, occur) == -1)
		std::cout << "Element not found.\n\n";
	else{
		std::cout << "Element " << occur <<" found at position : " ;
        std::cout << easyfind(v, occur) << " (counting from zero) \n" ;
	}
	return 0;
}
