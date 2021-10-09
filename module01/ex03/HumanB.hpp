/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 17:40:31 by zqadiri           #+#    #+#             */
/*   Updated: 2021/10/09 19:38:29 by zqadiri          ###   ########.fr       */
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
        //WEAPON
        std::string Name;
        Weapon *weaponB;
    public:
        ~HumanB(void);
        HumanB(std::string name);
        void    attack(void);
        void    setWeapon(Weapon &weaponB);
};

#endif