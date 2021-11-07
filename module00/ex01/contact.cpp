/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 18:12:13 by zqadiri           #+#    #+#             */
/*   Updated: 2021/11/07 19:30:52 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

/*-- Constructors & Destructor --*/

Contact::Contact(void){
}

Contact::~Contact(void){
}

Contact::Contact(std::string fn, std::string ln, std::string nn, std::string pn, std::string ad){
  this->setName(fn);
  this->setLastName(ln);
  this->setNickname(nn);
  this->setPhone(pn);
  this->setAddress(ad);
};

/*-- Accessors --*/

std::string Contact::getName(void){
  return this->_first_name;
}

std::string Contact::getLastName(void){
  return this->_last_name;
}

std::string Contact::getNickname(void){
  return this->_nickname;
}

std::string Contact::getPhone(void){
  return this->_phone_number;
}

std::string Contact::getAddress(void){
  return this->_address;
}

void	Contact::setName(std::string fn){
  this->_first_name = fn;
}

void	Contact::setLastName(std::string ln){
  this->_last_name = ln;
}

void	Contact::setNickname(std::string nn){
  this->_nickname = nn;
}

void	Contact::setPhone(std::string pn){
  this->_phone_number = pn;
}

void	Contact::setAddress(std::string ad){
  this->_address = ad;
}


/*-- Member functions --*/

void    Contact::print_field(std::string str)
{
  if (str.length() > 10)
  	std::cout << str.substr(0, 9) << ".";
  else
	  std::cout << std::setw(10) << str;
}

void	Contact::print_Contact(int index)
{
  std::cout << std::setw(10) << index << "|";
  this->print_field(this->getName());
  std::cout << "|";
  this->print_field(this->getLastName());
  std::cout << "|";
  this->print_field(this->getNickname());
  std::cout << std::endl;
}

void  Contact::search_command(Contact contact)
{
  std::cout << "First name:  " 
            << std::setw(15)
            << contact._first_name
            << std::endl;
  std::cout << "Last name:   " 
            << std::setw(15)
            << contact._last_name
            << std::endl;
	std::cout << "Nickname:    "
            << std::setw(15)
            << contact._nickname
            << std::endl;
	std::cout << "Phone number:"
            << std::setw(15)
            << contact._phone_number
            << std::endl;
	std::cout << "Adress:      "
            << std::setw(15)
            << contact._address
            << std::endl;
}