/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 18:09:35 by zqadiri           #+#    #+#             */
/*   Updated: 2021/10/09 16:31:02 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void){}
Zombie::Zombie(std::string name)
{
    std::cout << "-------------------" << std::endl;
    this->name  = name;
    std::cout << name << " is OUT"  << std::endl;
}

Zombie::~Zombie(void){
    std::cout << "-------------------" << std::endl;
    std::cout << this->name << " is DEAD" << std::endl;
}

std::string Zombie::getName(void) const{
    return this->name;
}


void    Zombie::setName(std::string n){
    this->name = n;
    return ;
}

void    Zombie::announce(void){
    std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl; 
}