/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 12:54:56 by zqadiri           #+#    #+#             */
/*   Updated: 2021/12/16 13:01:02 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
    Fixed a;
    Fixed b(a);
    Fixed c;
    c = b;
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
    // {
    //     Fixed a;
    //     a.setRawBits(12);
    //     Fixed b, c;

    //     c = b = a;
    //     std::cout << a.getRawBits() << std::endl;
    //     std::cout << b.getRawBits() << std::endl;
    //     std::cout << c.getRawBits() << std::endl;
    // }
}
