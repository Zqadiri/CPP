/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 17:40:46 by zqadiri           #+#    #+#             */
/*   Updated: 2021/11/05 17:44:29 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

/*-- Constructors & Destructor --*/

Weapon::Weapon(std::string const &type){
    this->WeaponType = type;
}

Weapon::~Weapon(){}

/*-- Accessors --*/

std::string const &Weapon::getType(void) const{
    return this->WeaponType;
}

void    Weapon::setType(std::string const &type){
    this->WeaponType = type;
}
