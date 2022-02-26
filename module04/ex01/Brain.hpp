/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 17:59:27 by zqadiri           #+#    #+#             */
/*   Updated: 2022/02/26 16:28:09 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP_
#define BRAIN_HPP_

#include "Animal.hpp"

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain();
		~Brain();
		Brain( Brain const & src );
		Brain &		operator=( Brain const & rhs );
		void setIdeas(std::string idea);
		std::string getIdea(unsigned int i);
		void printfbrain(void){
			std::cout << ideas[0] << std::endl;
		}
};

#endif
