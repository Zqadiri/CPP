/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 17:40:49 by zqadiri           #+#    #+#             */
/*   Updated: 2021/11/05 17:46:26 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP_
#define WEAPON_HPP_

#include<iostream>
#include<string>

class Weapon
{
	private:
		std::string WeaponType;
	public:
		Weapon(void);
		~Weapon(void);
		Weapon(std::string const &type);
		std::string const &getType(void) const;
		void    setType(std::string const &type);
};

#endif
