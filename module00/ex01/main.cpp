#include "contact.hpp"
#include "phonebook.hpp"

using namespace std;

contact     get_contact_info(void)
{
    string contact_tmp[5];
    cout << "Enter the contact's first name :"		<< endl;
	cin >> contact_tmp[0];

	cout << "Enter the contact's last name :"		<< endl;
	cin >> contact_tmp[1];

	cout << "Enter the contact's nickname :"		<< endl;
	cin >> contact_tmp[2];
    
    cout <<  "Enter the contact's phone number :"	<< endl;
	cin >> contact_tmp[3];

    cout <<  "Enter the contact's darkest secret :"	<< endl;
	cin >> contact_tmp[4];

    contact new_contact = contact(contact_tmp[0], contact_tmp[1], contact_tmp[2], contact_tmp[3], \
						contact_tmp[4]);
	return (new_contact);
}

int			main(void)
{
	string		input;
	phonebook	my_phonebook;

	while (true) 
	{
		cout << "Please enter your command: " << endl;
		cin >> input;
		if (input == "EXIT")
			break;
		else if (input == "ADD")
		{
			contact new_contact = get_contact_info();
			if (!my_phonebook.add_contact(new_contact))
				cout << "Contact list is full!" << endl;
		} 
		else if (input == "SEARCH") 
		{
			my_phonebook.print_full_list();
			cout	<< "Please enter the index you would like to see more informations of"
					<< endl;
			cin >> input;
			int index = input.at(0) - 48;
			my_phonebook.print_contact(index);
		}
	}
}