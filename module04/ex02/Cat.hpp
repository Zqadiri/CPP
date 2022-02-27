/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:40:48 by zqadiri           #+#    #+#             */
/*   Updated: 2022/02/27 11:08:24 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP_
#define CAT_HPP_

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *brain;
	public:
		Cat(void);
		virtual ~Cat(void);
		Cat(const Cat &);

	Cat	&operator=(const Cat &obj);
	std::string getType(void) const;
	void	makeSound(void)const;

	Brain *getBrain( void );
	void setBrain(std::string str);		
};

#endif
