/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 18:15:55 by zqadiri           #+#    #+#             */
/*   Updated: 2022/02/27 15:18:21 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main ()
{
    //! Grade 1 is the highest one and 150 the lowest
   { 
        try
        {
            Bureaucrat a("B-one" , 3); 
            Bureaucrat b("B-two", 100);
            std::cout << "a before incrementing : " << a << std::endl;
            a.increment();
            std::cout << "a after incrementing : " << a << std::endl;
            std::cout << "b before decrementing : " << b << std::endl;
            b.decrement();
            std::cout << "b after decrementing : " << b << std::endl;
        }
        catch (std::exception &e){
            std::cout << e.what() << std::endl;
        }
    }
    { 
        std::cout << "------Wrong Test 1-------" << std::endl;
        try
        {
            Bureaucrat b("B-two", 149);
            b.decrement();
            std::cout << b << std::endl;
            b.decrement();
            std::cout << b << std::endl;
        }
        catch (std::exception &e){
            std::cout << e.what() << std::endl;
        }
    }
    {
        std::cout << "------Wrong Test 2 -------" << std::endl;
        try
        {
            Bureaucrat a("B-one" , 1); 
            std::cout << a << std::endl;
            a.increment();
            std::cout << a << std::endl;
            a.increment();

        }
        catch (std::exception &e){
            std::cout << e.what() << std::endl;
        }
    }
    return (1);
}