/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 18:12:13 by zqadiri           #+#    #+#             */
/*   Updated: 2021/08/29 18:12:15 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

using namespace std;

contact::contact(){};
contact::~contact(){};

void    contact::print_field(string str)
{
  if (str.length() > 10)
	cout << str.substr(0, 9) << ".";
  else
	cout << setw(10) << str;
}

void	contact::print_contact(int index)
{
  cout << setw(10) << index << "|";
  this->print_field(_first_name);
  cout << "|";
  this->print_field(_last_name);
  cout << "|";
  this->print_field(_nickname);
  cout << endl;
}

