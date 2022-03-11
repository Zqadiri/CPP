/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:35:59 by zqadiri           #+#    #+#             */
/*   Updated: 2022/03/11 19:27:27 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
	{
		std::cout << "---------- Vector ---------" << std::endl;
		int occur(4);
		std::vector <int> v;
		v.push_back(1);
		v.push_back(4);
		v.push_back(3);
		v.push_back(7);
		if (easyfind(v, occur) == -1)
			std::cout << "Element not found.\n\n";
		else{
			std::cout << "Element " << occur <<" found at position : " ;
			std::cout << easyfind(v, occur) << " (counting from zero) \n" ;
		}
	}
	{
		std::cout << "---------- Array ---------" << std::endl;
		int occur(7);
		std::array<int, 6> arr;
		arr.fill(5);
		if (easyfind(arr, occur) == -1)
			std::cout << "Element not found.\n";
		else{
			std::cout << "Element " << occur <<" found at position : " ;
			std::cout << easyfind(arr, occur) << " (counting from zero) \n" ;
		}
	}
	{
		std::cout << "---------- Stack ---------" << std::endl;
		int occur(-9);
		std::stack<int> s;
		s.push(8);
		s.push(-9);
		s.push(1);
		s.push(0);
		if (easyfind(s, occur) == -1)
			std::cout << "Element not found.\n";
		else{
			std::cout << "Element " << occur <<" found at position : " ;
			std::cout << easyfind(s, occur) << " (counting from zero) \n" ;
		}
	}
	{
		std::cout << "---------- Queue ---------" << std::endl;
		int occur(6);
		std::queue<int> q;
		q.push(-9);
		q.push(6);
		q.push(1);
		q.push(3);
		if (easyfind(q, occur) == -1)
			std::cout << "Element not found.\n";
		else{
			std::cout << "Element " << occur <<" found at position : " ;
			std::cout << easyfind(q, occur) << " (counting from zero) \n" ;
		}
	}
	{
		std::cout << "---------- Priority_queue ---------" << std::endl;
		int occur(6);
		std::priority_queue<int> q;
		q.push(-9);
		q.push(6);
		q.push(1);
		q.push(3);
		if (easyfind(q, occur) == -1)
			std::cout << "Element not found.\n";
		else{
			std::cout << "Element " << occur <<" found at position : " ;
			std::cout << easyfind(q, occur) << " (counting from zero) \n" ;
		}
	}

	return 0;
}

