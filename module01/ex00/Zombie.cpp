/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 18:09:35 by zqadiri           #+#    #+#             */
/*   Updated: 2021/10/08 18:47:23 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie(void)
{
    std::cout << "name of the zombie" << std::endl;
    this->announce();
}

Zombie::Zombie(void)
{
    std::cout << "in " << std::endl;
}

void    Zombie::announce(void)
{
    // std::cout << zombie->name << std::endl; 
}