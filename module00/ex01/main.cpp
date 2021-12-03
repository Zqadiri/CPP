/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:43:16 by zqadiri           #+#    #+#             */
/*   Updated: 2021/11/20 19:34:02 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

Contact     get_Contact_info(void)
{
	std::string buff;
	std::string Contact_tmp[5];

	std::cout << "Enter the Contact's first name :\n";
	getline(std::cin , Contact_tmp[0]);

	std::cout << "Enter the Contact's last name :" << std::endl;
	getline(std::cin , Contact_tmp[1]);

	std::cout << "Enter the Contact's nickname :" << std::endl;
	getline(std::cin , Contact_tmp[2]);
	
	std::cout <<  "Enter the Contact's phone number :"	<< std::endl;
	getline(std::cin , Contact_tmp[3]);

	std::cout <<  "Enter the Contact's address :" << std::endl;
	getline(std::cin , Contact_tmp[4]);

	// Implicit call of the parametrized constructor
	Contact new_Contact(Contact_tmp[0], Contact_tmp[1], \
				Contact_tmp[2], Contact_tmp[3],	Contact_tmp[4]);
	return (new_Contact);
}

int			main(void)
{
	std::string		input;
	Phonebook		yellow_Phonebook;
	int				search_index;

	while (true) 
	{
		std::cout << "Enter your command [EXIT, ADD, SEACH]:" << std::endl;
		getline(std::cin, input);
		if (!input.compare("EXIT"))
			break;
		else if (!input.compare("ADD"))
		{
			Contact new_Contact = get_Contact_info();
			if (!yellow_Phonebook.add_Contact(new_Contact))
				std::cout << "SORRY ! Contact list is full!" << std::endl;
		} 
		else if (!input.compare("SEARCH")) 
		{
			yellow_Phonebook.print_full_list();
			std::cout << "Please enter the index you would like to see more informations of" << std::endl;
			getline(std::cin, input);
			try{
			search_index = std::stoi(input);}
			catch(std::exception &err){}
			yellow_Phonebook.print_Contact_by_index(search_index);
		}
		else
			std::cout << "Oops! try again ." << std::endl;
	}
	return (0);
}
