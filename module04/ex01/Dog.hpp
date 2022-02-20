/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:56:10 by zqadiri           #+#    #+#             */
/*   Updated: 2021/12/21 17:48:39 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP_
#define DOG_HPP_

#include "Animal.hpp"
#include "Brain.hpp"
class Dog : public Animal
{
	private:
		Brain *brain;
	public:
	//! 7aydi Animal(std::string type);....
		Dog(void);
		~Dog(void);
		Dog(std::string);
		Dog(const Dog &);

		Dog	&operator=(const Dog &obj);
		std::string getType(void) const;
		void	makeSound(void)const;

		Brain *getBrain( void );
		void setBrain(std::string str);
};

#endif