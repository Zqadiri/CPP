/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 18:12:07 by zqadiri           #+#    #+#             */
/*   Updated: 2021/10/07 17:28:08 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

phonebook::~phonebook(){};

phonebook::phonebook(void){
    _bookmark = 0;
}

bool    phonebook::add_contact(contact contact)
{
    if (_bookmark >= 8)
	    return false;
    _contacts[_bookmark] = contact;
    _bookmark++;
    return true;
}

void    phonebook::print_full_list(void)
{
    std:: cout << std::setw(10)	<< "index"
								<< "|"
								<< "first name"
								<< "|"
								<< " last name"
								<< "|"
								<< "  nickname" 
								<< std::endl;
    for (int i = 0; i < _bookmark; i++)
	    _contacts[i].print_contact(i);
}

void	phonebook::print_contact_by_index(int index)
{
	for(int i = 0; i < _bookmark ; i++)
	{
		if (i == index)
			_contacts[i].search_command(_contacts[i]);	
	}
}
