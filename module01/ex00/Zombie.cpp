/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 18:09:35 by zqadiri           #+#    #+#             */
/*   Updated: 2021/10/15 11:37:45 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void){
    std::cout << "Default Constructor" << std::endl;    
}

Zombie::Zombie(std::string name)
{
    // std::cout << "Parametrized Constructor" << std::endl;
    this->_name  = name;
    std::cout << name << " is OUT"  << std::endl;
}

Zombie::~Zombie(void){
    // std::cout << "Default Destructor" << std::endl;
    std::cout << this->_name << " is DEAD" << std::endl;
}

std::string Zombie::getName(void) const{
    return (this->_name);
}

void    Zombie::setName(std::string n){
    this->_name = n;
}

void    Zombie::announce(void){
    std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl; 
}