/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 17:40:08 by zqadiri           #+#    #+#             */
/*   Updated: 2021/10/09 19:09:49 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::~HumanA(void){}

/*
    error: constructor for 'HumanA' must explicitly initialize the member 'weaponA' which does not have a default constructor
    You need to use the constructor initializer list 
*/
HumanA::HumanA(std::string name, Weapon &weapon) : Name(name), weaponA(weapon)
{
    
}

// NAME attacks with his WEAPON_TYPE
void    HumanA::attack(void)
{
   std::cout << this->Name << " attacks with his "
            << this->weaponA.getType() << std::endl;
}