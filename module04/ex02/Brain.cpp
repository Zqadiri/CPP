/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 17:59:26 by zqadiri           #+#    #+#             */
/*   Updated: 2021/10/22 13:15:03 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain Default Constructor" << std::endl;
}

Brain::~Brain(){
    std::cout << "Brain Default Destructor" << std::endl;   
}

Brain::Brain( const Brain & src ){
	std::cout << "Brain Copy constructor called!" << std::endl;
    *this = src;
}

Brain &	Brain::operator=( Brain const & b )
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = b.ideas[i];
	return *this;
}

void        Brain::setIdeas(std::string idea){
	for(int i = 0; i < 100; i++)
		this->ideas[i] = idea;
}

std::string	    Brain::getIdea(unsigned int i){
	return(this->ideas[i]);
}
