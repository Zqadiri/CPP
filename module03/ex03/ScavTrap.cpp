/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 13:22:28 by zqadiri           #+#    #+#             */
/*   Updated: 2021/10/20 21:17:11 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*
	Note: A derived class doesn’t inherit access to private data members. 
	However, it does inherit a full parent object, 
	which contains any private members which that class declares.
*/

/*-- Destructor & Constructor --*/

ScavTrap::ScavTrap(void){
	std::cout << "Scavtrap Default Constructor" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	std::cout << "Scavtrap Parameterized Constructor " << std::endl;
	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &st) : ClapTrap(st){
	std::cout << "Scavtrap copy Constructor" << std::endl;
	*this = st;
}

/*-- Operator --*/

ScavTrap	&ScavTrap::operator=(const ScavTrap &s)
{
	std::cout << "Scavtrap operator=" << std::endl;
	this->_name = s._name;
	this->_hit_points = s._hit_points;
	this->_energy_points = s._energy_points;
	this->_attack_damage = s._attack_damage;
	return (*this);
}

ScavTrap::~ScavTrap(void){
	std::cout << "Scavtrap Default Destructor" << std::endl;
}

void ScavTrap::attack( std::string const & target ){
	std::cout << "ScavTrap " << this->_name << " attack " << target;
	std::cout << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate( void ){
	std::cout << "["<< this->_name << "}"<< " ScavTrap have enterred in Gate keeper mode." << std::endl;
}
