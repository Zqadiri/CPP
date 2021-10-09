/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 17:40:46 by zqadiri           #+#    #+#             */
/*   Updated: 2021/10/09 18:36:38 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string const &type)
{
    this->WeaponType = type;
}

Weapon::~Weapon(){}

std::string const &Weapon::getType(void) const
{
    return this->WeaponType;
}

void    Weapon::setType(std::string const &type)
{
    this->WeaponType = type;
}
