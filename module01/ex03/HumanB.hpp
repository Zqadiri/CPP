/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 17:40:31 by zqadiri           #+#    #+#             */
/*   Updated: 2021/11/05 17:46:17 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP_
#define HUMANB_HPP_

#include<iostream>
#include<string>
#include "Weapon.hpp"

class   HumanB
{
    private:
        std::string Name;
        Weapon *weaponB;
    public:
        HumanB(void);
        ~HumanB(void);
        HumanB(std::string name);
        void    attack(void);
        void    setWeapon(Weapon &weaponB);
};

#endif