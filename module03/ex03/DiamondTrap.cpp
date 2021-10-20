/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 20:11:49 by zqadiri           #+#    #+#             */
/*   Updated: 2021/10/20 21:12:03 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/*
    Virtual base classes, used in virtual inheritance, is a way 
    of preventing multiple "instances" of a given class appearing 
    in an inheritance hierarchy when using multiple inheritance.
*/

DiamondTrap::DiamondTrap(void){
    std::cout << "DiamondTrap Default Constructor" << std::endl;
}

DiamondTrap::~DiamondTrap(void){
	std::cout << "DiamondTrap Destructor" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name):ClapTrap(name + "_clap_name"),
    FragTrap(name), ScavTrap(name)
{
	std::cout << "DiamondTrap Parameterized Constructor" << std::endl;
    this->_name = name;
    this->_hit_points = FragTrap::_hit_points;
    this->_energy_points = ScavTrap::_hit_points;
    this->_attack_damage = FragTrap::_attack_damage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &d):FragTrap(d), ScavTrap(d)
{
	std::cout << "DiamondTrap Copy Constructor" << std::endl;
    *this = d;
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap &obj)
{
	std::cout << "DiamondTrap operator=" << std::endl;
   	this->_name = obj._name;
	this->_hit_points = obj._hit_points;
	this->_energy_points = obj._energy_points;
	this->_attack_damage = obj._attack_damage;
    return (*this);
}

void whoAmI(void)
{
    // std::cout << _name << std::endl;
}

void DiamondTrap::attack(std::string const & target)
{
    ScavTrap::attack(target);
}