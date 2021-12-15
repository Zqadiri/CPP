/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 17:40:18 by zqadiri           #+#    #+#             */
/*   Updated: 2021/12/14 01:11:25 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

/*-- Constructors & Destructor --*/

HumanB::HumanB(void){
}

HumanB::~HumanB(void){
}

/*
    error: constructor for 'HumanB' must explicitly initialize the member 'weaponA' which does not have a default constructor
    You need to use the constructor initializer list 
*/

HumanB::HumanB(std::string name) : Name(name){
}

void    HumanB::setWeapon(Weapon& weaponB){
    this->weaponB = &weaponB;
}

/*-- Member functions --*/

void    HumanB::attack(void){
   std::cout << this->Name << " attacks with his "
            << this->weaponB->getType() << std::endl;
}