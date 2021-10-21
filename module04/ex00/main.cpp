/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 12:29:09 by zqadiri           #+#    #+#             */
/*   Updated: 2021/10/21 16:49:20 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	{
		std::cout << "---WRONG TEST---" << std::endl << std::endl;
		WrongAnimal a;
		WrongAnimal b(a);
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* i = new WrongCat("WRG");
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		meta->makeSound();
	}
	{
		std::cout << "---VaLid TEST---" << std::endl << std::endl;
		Animal a;
		Animal b(a);
		const Animal* meta = new Animal();
		const Animal* j = new Dog("Dogi");
		const Animal* i = new Cat("Cati");
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		j->makeSound();
		meta->makeSound();
	}
	return (1);
}