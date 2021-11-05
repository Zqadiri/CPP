/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 17:40:08 by zqadiri           #+#    #+#             */
/*   Updated: 2021/11/05 17:44:58 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

/*
 A class with a reference member needs to set the reference in its constructors.
 In most cases this means, that the class cannot have a default constructor.
*/

/*
 error: constructor for 'HumanA' must explicitly initialize the member 'weaponA' which does not have a default constructor
 You need to use the constructor initializer list 
 REASON: Reference data members must be intialized when compiler enters constructor as references can't be just declared 
 & initialized later. This is possible only with constructor initializer list.
*/

/*-- Constructors & Destructor --*/

/*
This is because references must refer to something and therefore cannot be default constructed.
*/

HumanA::~HumanA(void){
}

HumanA::HumanA(std::string name, Weapon &weapon) : Name(name), weaponA(weapon){   
}

/*-- Member functions --*/

void    HumanA::attack(void){
   std::cout << this->Name << " attacks with his "
            << this->weaponA.getType() << std::endl;
}      