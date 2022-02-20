/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 12:30:13 by zqadiri           #+#    #+#             */
/*   Updated: 2021/12/24 14:10:00 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP_
#define ANIMAL_HPP_

#include <iostream>
#include <string>

class Animal
{
	protected:
		std::string _type;
		
	public:
		Animal();
		~Animal();

		Animal(const Animal&);
		Animal	&operator=(const Animal &obj);
		std::string	getType(void) const;
		virtual void	makeSound() const;
};

#endif
