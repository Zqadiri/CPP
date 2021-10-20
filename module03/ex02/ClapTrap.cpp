/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 11:52:06 by zqadiri           #+#    #+#             */
/*   Updated: 2021/10/20 17:54:44 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"


/*----- Constructor & Destructor -----*/

ClapTrap::ClapTrap(void){
    std::cout << "ClapTrap Default Constructor" << std::endl;
}

ClapTrap::~ClapTrap(void){
	std::cout << "ClapTrap Destructor" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap Parameterized Constructor" << std::endl;
	this->_name = name;
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
}
/*----- Accessors -------*/

std::string ClapTrap::getName(void){
	return (this->_name);
}
unsigned int ClapTrap::getHitPoints(void){
	return (this->_hit_points);
}
unsigned int ClapTrap::getEnergyPoints(void){
	return (this->_energy_points);
}
unsigned int ClapTrap::getAttackDamage(void){
	return (this->_attack_damage);
}

/*----- Constructor & Destructor -----*/

void ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << this->getName() 
	<< " attack " << target <<" , causing " << this->getAttackDamage() 
	<< " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	// std::cout <<this->getHitPoints() << "  "<< amount << std::endl;
	if (this->_hit_points < 0)
	{
		std::cout << "ClapTrap " << this->getName() 
		<< " can't take more damage , he only has " << this->getHitPoints() 
		<< " hit points !"<< std::endl;
	}
	if (this->_hit_points > 0  && this->_hit_points >= amount)
	{
		this->_hit_points -= amount;
		std::cout << "ClapTrap " << this->getName() 
		<< " has " << this->getHitPoints()  <<" hit points after taking {" << 
		amount << "} points of damage!" << std::endl;
	}
	else
	{
		this->_hit_points = 0;
		std::cout << "ClapTrap " << this->getName() << " is dead *_-" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hit_points <= 0)
		std::cout << "Sadly "<< this->getName() << " can not be repaired" << std::endl;
	else
	{
		this->_hit_points += amount;
		this->_energy_points += amount;
		std::cout << this->_name << " restored " << amount << " points!" << std::endl;	
	}
	std::cout << "-- Current State " << this->getName() 
	<< " Hit points : " << this->getHitPoints() 
	<< " Energy points : " << this->getEnergyPoints() 
	<< " Attack damage : " << this->getAttackDamage() 
	<< " --" << std::endl;
}
