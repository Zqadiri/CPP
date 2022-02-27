/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:56:10 by zqadiri           #+#    #+#             */
/*   Updated: 2022/02/27 11:04:35 by zqadiri          ###   ########.fr       */
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
		Dog(void);
		virtual ~Dog(void);
		Dog(const Dog &);

		Dog	&operator=(const Dog &obj);
		std::string getType(void) const;
		void	makeSound(void)const;

		Brain *getBrain( void )const;
		void setBrain(std::string str);
};

#endif