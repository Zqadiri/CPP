/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:40:48 by zqadiri           #+#    #+#             */
/*   Updated: 2021/12/21 17:36:03 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP_
#define CAT_HPP_

#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat(void);
		~Cat(void);

		Cat(const Cat &);
	Cat	&operator=(const Cat &obj);
	std::string getType(void) const;
	void	makeSound(void)const;
};

#endif
