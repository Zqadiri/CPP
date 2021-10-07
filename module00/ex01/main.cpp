#include "Contact.hpp"
#include "PhoneBook.hpp"

contact     get_contact_info(void)
{
    std::string contact_tmp[5];
    std::cout << "Enter the contact's first name :"	<< std::endl;
	std::cin >> contact_tmp[0];

	std::cout << "Enter the contact's last name :"	<< std::endl;
	std::cin >> contact_tmp[1];

	std::cout << "Enter the contact's nickname :"		<< std::endl;
	std::cin >> contact_tmp[2];
    
    std::cout <<  "Enter the contact's phone number :"	<< std::endl;
	std::cin >> contact_tmp[3];

    std::cout <<  "Enter the contact's darkest secret :"	<< std::endl;
	std::cin >> contact_tmp[4];

    contact new_contact = contact(contact_tmp[0], contact_tmp[1], contact_tmp[2], contact_tmp[3], \
						contact_tmp[4]);
	return (new_contact);
}

int			main(void)
{
	std::string		input;
	phonebook	my_phonebook;

	while (true) 
	{
		std::cout << "Please enter your command: " << std::endl;
		std::cin >> input;
		if (input == "EXIT")
			break;
		else if (input == "ADD")
		{
			contact new_contact = get_contact_info();
			if (!my_phonebook.add_contact(new_contact))
				std::cout << "Contact list is full!" << std::endl;
		} 
		else if (input == "SEARCH") 
		{
			my_phonebook.print_full_list();
			std::cout	<< "Please enter the index you would like to see more informations of"
					<< std::endl;
			std::cin >> input;
			// int index = input.at(0) - 48;
			// my_phonebook.print_contact(index);
		}
	}
}