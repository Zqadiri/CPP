#ifndef PHONEBOOK_HPP_
#define PHONEBOOK_HPP_

# include <iostream>
# include <iomanip>
# include "contact.hpp"

class phonebook
{
    private:
        contact _contacts[8];
        size_t  _index;
    public:
        phonebook();
        ~phonebook();
    /*
     functions
    */
    bool		add_contact(contact contact);
	void		print_contact(int index);
	void		print_full_list(void);
};

#endif