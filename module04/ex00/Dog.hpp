/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:56:10 by zqadiri           #+#    #+#             */
/*   Updated: 2021/12/21 17:36:00 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP_
#define DOG_HPP_

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog(void);
		~Dog(void);

		Dog(const Dog &);
		Dog	&operator=(const Dog &obj);
		std::string getType(void) const;
		void	makeSound(void)const;
};

#endif