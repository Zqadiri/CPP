/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 18:14:02 by zqadiri           #+#    #+#             */
/*   Updated: 2021/08/29 18:18:03 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP_
#define CONTACT_HPP_

# include <string>
# include <iomanip>
# include <iostream>

class contact
{
    private:
        std::string _first_name;
        std::string _last_name;
        std::string _nickname;
        std::string _phone_number;
        std::string _darkest_secret;
    public:
    /*
     constructor is a special type of member function of a class which initializes objects of a class
    */
        contact(); // default
        contact(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds) // PARAMETERIZED CONSTRUCTOR
        {
            _first_name = fn;
            _last_name = ln;
            _nickname = nn;
            _phone_number = pn;
            _darkest_secret = ds;
        };
    /*
     we should write a destructor to release memory before the class instance is destroyed. This must be done to avoid memory leak.
    */
        ~contact(); // destructor
    /*
     class functions   
    */
        // think to switch to const // --> indique au compilateur que votre méthode ne modifie pas l'objet
        void    print_field(std::string field_name);
        void    print_all_contacts(void);
        void    print_contact(int index);
};

#endif