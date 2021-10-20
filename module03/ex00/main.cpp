/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 11:52:09 by zqadiri           #+#    #+#             */
/*   Updated: 2021/10/20 18:43:04 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

int main(void)
{
    ClapTrap c1("crap1");
    ClapTrap c2(c1);
    ClapTrap c3;

    c3 = c2;
    c1.attack(c2.getName());
    c1.takeDamage(1);
    c1.takeDamage(10);
    c1.beRepaired(15);
    c2.takeDamage(1);
    c2.beRepaired(1);
    return 1;
}
