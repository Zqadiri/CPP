/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 16:31:03 by zqadiri           #+#    #+#             */
/*   Updated: 2021/10/09 17:36:11 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <iostream>

/*
    References is an alias, that is, another name for an already existing variable
    References are pointer types that cannot be reassigned once set
    and cannot be null.
*/

int main(void)
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string; 

    std::cout << "The address in memory of the string:" << std::endl;
    std::cout << &string << std::endl;
    std::cout << "the address of the string by using stringPTR:" << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << "the address of the string by using stringREF:" << std::endl;
    std::cout << &stringREF << std::endl;

    std::cout << "Display the string using the pointer:  " << *stringPTR << std::endl;
    std::cout << "Display the string using the reference:  " << stringREF << std::endl;
    return (0);
}