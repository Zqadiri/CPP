/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 18:14:14 by zqadiri           #+#    #+#             */
/*   Updated: 2021/11/05 15:53:20 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  PHONEBOOK_HPP_
# define PHONEBOOK_HPP_

# include <iostream>
# include <iomanip>
# include "Contact.hpp"

class Phonebook
{
	private:
		Contact _Contacts[8];
		int  _bookmark;
	public:
		Phonebook(void);
		~Phonebook(void);

	bool		add_Contact(Contact Contact);
	void		print_full_list(void);
	void        print_Contact_by_index(int index);
	void        search_command(Contact Contact);
};

# endif
