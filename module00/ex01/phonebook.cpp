/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 18:12:07 by zqadiri           #+#    #+#             */
/*   Updated: 2021/11/05 15:55:26 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

/*-- Constructors & Destructor --*/

Phonebook::~Phonebook(void){
}

Phonebook::Phonebook(void){
    _bookmark = 0;
}

bool    Phonebook::add_Contact(Contact Contact)
{
    if (_bookmark >= 8)
	    return false;
    _Contacts[_bookmark] = Contact;
    _bookmark++;
    return true;
}

void    Phonebook::print_full_list(void)
{
    std:: cout << std::setw(10)	<< "index"
								<< "|"
			   << std::setw(10) << "first name"
								<< "|"
			   << std::setw(10) << "last name"
								<< "|"
			   << std::setw(10) << "nickname" 
								<< std::endl;
    for (int i = 0; i < _bookmark; i++)
	    _Contacts[i].print_Contact(i);
}

void	Phonebook::print_Contact_by_index(int index)
{
	for(int i = 0; i < _bookmark ; i++)
	{
		if (i == index)
			_Contacts[i].search_command(_Contacts[i]);	
	}
}
