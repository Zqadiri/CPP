/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 18:12:13 by zqadiri           #+#    #+#             */
/*   Updated: 2021/10/07 17:42:28 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

contact::contact(){};
contact::~contact(){};

void    contact::print_field(std::string str)
{
  if (str.length() > 10)
  	std::cout << str.substr(0, 9) << ".";
  else
	  std::cout << std::setw(10) << str;
}

void	contact::print_contact(int index)
{
  std::cout << std::setw(10) << index << "|";
  this->print_field(_first_name);
  std::cout << "|";
  this->print_field(_last_name);
  std::cout << "|";
  this->print_field(_nickname);
  std::cout << std::endl;
}

void  contact::search_command(contact contact)
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