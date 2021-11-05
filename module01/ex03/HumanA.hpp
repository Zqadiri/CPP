/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 17:40:14 by zqadiri           #+#    #+#             */
/*   Updated: 2021/11/05 17:45:08 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP_
#define HUMANA_HPP_

#include<iostream>
#include<string>
#include "Weapon.hpp"

class   HumanA
{
	private:
		std::string Name;
		Weapon &weaponA;
	public:
		~HumanA(void);
		HumanA(std::string name, Weapon &weaponA);
		void    attack(void);        
};

#endif
