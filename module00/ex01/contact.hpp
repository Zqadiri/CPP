/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 18:14:02 by zqadiri           #+#    #+#             */
/*   Updated: 2021/11/05 15:53:13 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP_
#define CONTACT_HPP_

# include <string>
# include <iomanip>
# include <iostream>

class Contact
{
	/*
		Member variables are private = encapsulation
	*/
	private:
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _address;

	public:
	
	/*
	 constructor is a special type of member function of a class which initializes objects of a class
	*/
		Contact(void);
		Contact(std::string fn, std::string ln, std::string nn, std::string pn, std::string ad) // PARAMETERIZED CONSTRUCTOR
		{
			_first_name = fn;
			_last_name = ln;
			_nickname = nn;
			_phone_number = pn;
			_address = ad;
		};
	/*
	 we should write a destructor to release memory before the class instance is destroyed. This must be done to avoid memory leak.
	*/
		~Contact(void);

		std::string getName(void);
		std::string getLastName(void);
		std::string getNickname(void);
		std::string getPhone(void);
		std::string getAddress(void);

		void	print_field(std::string field_name);
		void	print_all_Contacts(void);
		void	print_Contact(int index);
		void	search_command(Contact Contact);
};

#endif