/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 12:54:56 by zqadiri           #+#    #+#             */
/*   Updated: 2022/02/27 10:51:45 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
    Fixed a;
    Fixed b(a);
    Fixed c = b;
    // c = b;
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
