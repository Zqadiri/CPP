/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 12:29:09 by zqadiri           #+#    #+#             */
/*   Updated: 2022/02/26 17:19:14 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#define NUMBER_OF_ANIMALS 5

int main(void)
{
	{
		std::cout << "----- Deep copy Check -------" << std::endl;
		
		Animal* meta = new Animal();
		Dog* dog = new Dog();
		Cat* cat = new Cat();
		std::cout << meta->getType()<< " " << std::endl;
		std::cout << dog->getType() << " " << std::endl;
		std::cout << cat->getType() << " " << std::endl;
		cat->makeSound(); //will output the cat sound!
		dog->makeSound(); //will output the dog sound!
		meta->makeSound();

		std::cout << cat->getBrain()->getIdea(2) << std::endl;

		Cat cat2(*cat); //copy constructor

		cat2.getBrain()->setIdeas("new Cat's Idea");
		
		std::cout << "NEW Idea : " <<cat2.getBrain()->getIdea(2) << std::endl;
		std::cout << "OLD Idea : " <<cat->getBrain()->getIdea(2) << std::endl;

		delete meta;
		delete cat;
		delete dog;
	}
	{
		Animal	*animals[NUMBER_OF_ANIMALS];

		for (int i = 0; i < NUMBER_OF_ANIMALS; i++)
		{
			if (i % 2 == 0)
				animals[i] = new Dog();
			else
				animals[i] = new Cat();
			std::cout << animals[i]->getType() << std::endl;
		}
		for (int i = 0; i < NUMBER_OF_ANIMALS; i++)
			delete animals[i];
		// system("leaks Animal");
	}
	return EXIT_SUCCESS;
}
