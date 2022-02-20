/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 12:29:09 by zqadiri           #+#    #+#             */
/*   Updated: 2021/12/21 17:47:57 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	// {
	// 	std::cout << "-----------------------------" << std::endl;
	// 	const Animal* j = new Dog();
	// 	const Animal* i = new Cat();
	// 	delete j;
	// 	delete i;
	// }
	// {
	// 	std::cout << "-----------------------------" << std::endl;
	// 	int N = 4;
	// 	const Animal *animals[N];
	// 	for (int i = 0; i < N; i++)
	// 	{
	// 		if (i % 2 == 0){
	// 			animals[i] = new Cat();
	// 		}
	// 		else{
	// 			animals[i] = new Dog();
	// 		}
	// 	}
		
	// }
	Cat basic;
	{
		basic.p();
	Cat tmp = basic;
	}
	basic.p();
	return (1);
}
