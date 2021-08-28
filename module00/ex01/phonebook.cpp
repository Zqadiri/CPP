#include "phonebook.hpp"

using namespace std;

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
    for (int i = 0; i < _index; i++)
	    _contacts[i].print_contact(i);
}