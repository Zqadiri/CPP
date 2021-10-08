#include "Contact.hpp"
#include "PhoneBook.hpp"

contact     get_contact_info(void)
{
	std::string buff;
    std::string contact_tmp[5];

    std::cout << "Enter the contact's first name :\n";
	getline(std::cin , contact_tmp[0]);

	std::cout << "Enter the contact's last name :" << std::endl;
	getline(std::cin , contact_tmp[1]);

	std::cout << "Enter the contact's nickname :" << std::endl;
	getline(std::cin , contact_tmp[2]);
    
    std::cout <<  "Enter the contact's phone number :"	<< std::endl;
	getline(std::cin , contact_tmp[3]);

    std::cout <<  "Enter the contact's address :" << std::endl;
	getline(std::cin , contact_tmp[4]);

	// explicit call of an constructor
    contact new_contact = contact(contact_tmp[0], contact_tmp[1], \
				contact_tmp[2], contact_tmp[3],	contact_tmp[4]);
	return (new_contact);
}

int			main(void)
{
	std::string		input;
	phonebook		yellow_phonebook;
	int				search_index;

	while (true) 
	{
		std::cout << "Enter your command [EXIT, ADD, SEACH]:" << std::endl;
		getline(std::cin, input);
		if (!input.compare("EXIT"))
			break;
		else if (!input.compare("ADD"))
		{
			contact new_contact = get_contact_info();
			if (!yellow_phonebook.add_contact(new_contact))
				std::cout << "SORRY ! Contact list is full!" << std::endl;
		} 
		else if (!input.compare("SEARCH")) 
		{
			yellow_phonebook.print_full_list();
			std::cout << "Please enter the index you would like to see more informations of" << std::endl;
			getline(std::cin, input);
			try{
			search_index = std::stoi(input);
			}catch(std::exception &err){
			}
			yellow_phonebook.print_contact_by_index(search_index);
		}
		else
			std::cout << "Oops! try again ." << std::endl;
	}
	return (0);
}
