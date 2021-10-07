/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 18:12:07 by zqadiri           #+#    #+#             */
/*   Updated: 2021/10/07 12:55:00 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

using namespace std;

phonebook::~phonebook(){};

phonebook::phonebook(void){
    _index = 0;
}

bool    phonebook::add_contact(contact contact)
{
    if (_index >= 8)
	    return false;
    _contacts[_index] = contact;
    _index++;
    return true;
}

void    phonebook::print_full_list(void)
{
    cout << setw(10)  << "index"
					<< "|"
					<< "first name"
					<< "|"
					<< " last name"
					<< "|"
					<< "  nickname" 
					<< endl;
    for (size_t i = 0; i < _index; i++)
	    _contacts[i].print_contact(i);
}