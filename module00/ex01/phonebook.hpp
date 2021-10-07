/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 18:14:14 by zqadiri           #+#    #+#             */
/*   Updated: 2021/10/07 17:28:36 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP_
# define PHONEBOOK_HPP_

# include <iostream>
# include <iomanip>
# include "Contact.hpp"

class phonebook
{
    private:
        contact _contacts[8];
        int  _bookmark;
    public:
        phonebook();
        ~phonebook();

    bool		add_contact(contact contact);
	void		print_full_list(void);
    void        print_contact_by_index(int index);
    void        search_command(contact contact);
};

# endif
