/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 17:40:08 by zqadiri           #+#    #+#             */
/*   Updated: 2021/10/15 12:52:16 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

/*
    A class with a reference member needs to set the reference in its constructors.
    In most cases this means, that the class cannot have a default constructor.
*/
HumanA::~HumanA(void){}

/*
    error: constructor for 'HumanA' must explicitly initialize the member 'weaponA' which does not have a default constructor
    You need to use the constructor initializer list 
    REASON: Reference data members must be intialized when compiler enters constructor as references can't be just declared 
    & initialized later. This is possible only with constructor initializer list.
*/

HumanA::HumanA(std::string name, Weapon &weapon) : Name(name), weaponA(weapon)
{   
}

void    HumanA::attack(void)
{
   std::cout << this->Name << " attacks with his "
            << this->weaponA.getType() << std::endl;