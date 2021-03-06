/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 11:52:06 by zqadiri           #+#    #+#             */
/*   Updated: 2022/02/20 18:44:12 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"


/*----- Constructor & Destructor -----*/

ClapTrap::ClapTrap(void){
    std::cout << "ClapTrap Default Constructor" << std::endl;
}

ClapTrap::~ClapTrap(void){
	std::cout << "ClapTrap Default Destructor" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap Parameterized Constructor" << std::endl;
	this->_name = name;
}

ClapTrap::ClapTrap(const ClapTrap &clap){
	std::cout << "ClapTrap Copy Constructor" << std::endl;
	*this = clap;
}

/*--- Operator --*/

ClapTrap &ClapTrap::operator=(const ClapTrap &obj)
{
	std::cout << "ClapTrap operator=" << std::endl;
	_name = obj._name;
	_hit_points = obj._hit_points;
	_energy_points = obj._energy_points;
	_attack_damage = obj._attack_damage;
	return (*this);
}

/*----- Accessors -------*/

void ClapTrap::setName(std::string name){
	this->_name = name;
}

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

/*----- Functions -----*/

void ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << this->getName() 
	<< " attack " << target <<" , causing " << this->getAttackDamage() 
	<< " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_points < 0)
	{
		std::cout << "ClapTrap " << this->getName() 
		<< " can't take more damage , he only has " << this->getHitPoints() 
		<< " hit points !"<< std::endl;
	}
	if (this->_hit_points > 0  && this->_hit_points >= amount)
	{
		this->_hit_points -= amount;
		this->_energy_points -= amount;
		std::cout << "ClapTrap " << this->getName() 
		<< " has " << this->getHitPoints()  <<" hit points after taking {" << 
		amount << "} points of damage!" << std::endl;
	}
	else
	{
		this->_hit_points = 0;
		this->_energy_points = 0;
		std::cout << "ClapTrap " << this->getName() << " is dead *_- after taking {" << 
		amount << "} points of damage!" << std::endl;
	}
	this->_attack_damage += amount;
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
	<< " Hit points :" << this->getHitPoints() << " "
	<< "Energy points :" << this->getEnergyPoints() << " " 
	<< "Attack damage :" << this->getAttackDamage() 
	<< " --" << std::endl;
}
