/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 18:04:45 by zqadiri           #+#    #+#             */
/*   Updated: 2021/10/20 21:13:07 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"FragTrap.hpp"

/*-- Destructor & Constructor --*/

FragTrap::FragTrap(void){
    std::cout << "FragTrap Default Constructor" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap Parameterized Constructor " << std::endl;
	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &clap): ClapTrap(clap){
	std::cout << "FragTrap Copy Constructor" << std::endl;
}

FragTrap    &FragTrap::operator=(const FragTrap &obj)
{
	std::cout << "FragTrap operator=" << std::endl;
	_name = obj._name;
	_hit_points = obj._hit_points;
	_energy_points = obj._energy_points;
	_attack_damage = obj._attack_damage;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Default Destructor" << std::endl;
}

/*-- Public Functions --*/

void FragTrap::highFivesGuys(void)
{
    std::cout << "High Five !!" << std::endl;
}

