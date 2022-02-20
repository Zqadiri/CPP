/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 11:52:08 by zqadiri           #+#    #+#             */
/*   Updated: 2022/02/20 18:55:11 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPCRAP_HPP_
#define CLAPCRAP_HPP_

#include<iostream>
#include<string>

class ClapTrap
{
	protected:
		std::string _name;
		unsigned int _hit_points;
		unsigned int _energy_points;
		unsigned int _attack_damage;
		
	public:

		ClapTrap(void);
		~ClapTrap(void);
		ClapTrap(std::string _name);
		ClapTrap(const ClapTrap &);

		ClapTrap	&operator=(const ClapTrap &obj);
		
		std::string getName(void);
		void setName(std::string );

		unsigned int getHitPoints(void);
		unsigned int getEnergyPoints(void);
		unsigned int getAttackDamage(void);

		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
