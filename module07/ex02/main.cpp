/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:16:00 by zqadiri           #+#    #+#             */
/*   Updated: 2022/03/10 18:12:24 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
void        printArray(Array<T> arr)
{
	std::cout << " ----- " << std::endl;
	if (!arr.size())
		std::cout << "Empty Array" << std::endl;
	for (size_t i = 0; i < arr.size(); i++)
		std::cout << "index : " << i << " Value : " << "<" << arr[i]<< ">" << std::endl;
}

int main(void)
{
	{
		Array<int> a(5);
		std::cout << "Default State :" << std::endl;
		printArray(a);
		a[2] = 5;
		printArray(a);
		try{
			a[10] = 5;
		}
		catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << "\n Data type 2 : " << std::endl;
		Array<std::string> a(5);
		Array<std::string> b(10);
		for (size_t i = 0; i < b.size(); i++)
			b[i] = "string";
		std::cout << "Default State :" << std::endl;
		printArray(a);
		a = b;
		printArray(a); 
		std::cout << "\n Deep copy check  : " << std::endl;
		a[5] = a[6] = a[7] = "new string";
		printArray(a);
		printArray(b);
	}
	{
		std::cout << "------- const array --------" << std::endl;
		const Array<int> a(5) ;
		std::cout << "Default State :" << std::endl;
		std::cout << a[2] << std::endl;
	}
	// system ("leaks array");
	return (0);
}