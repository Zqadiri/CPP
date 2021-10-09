/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 14:09:29 by zqadiri           #+#    #+#             */
/*   Updated: 2021/10/09 16:31:35 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
 NOTICE : new keyword create an object and a pointer to it it means thath the object 
 is stored in the heap, you must delete the object by yourself using delete keyword
*/

Zombie* newZombie(std::string name)
{
    Zombie *deadHead = new Zombie(name);
    this->name  = setName(name);
    return deadHead;
}
