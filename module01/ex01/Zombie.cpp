/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 18:09:35 by zqadiri           #+#    #+#             */
/*   Updated: 2021/12/02 16:00:12 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*-- Constructors & Destructor --*/

Zombie::Zombie(void){
	std::cout << "Default Constructor" << std::endl;
}

Zombie::Zombie(std::string name){
	this->_name  = name;
	std::cout << name << " is OUT"  << std::endl;
}

Zombie::~Zombie(void){
	std::cout << this->_name << " is DEAD" << std::endl;
}

/*-- Accessors --*/

std::string Zombie::getName(void) const{
	return (this->_name);
}

void    Zombie::setName(std::string n){
	this->_name = n;
}

/*-- Member functions --*/
 
void    Zombie::announce(void){
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl; 
}
