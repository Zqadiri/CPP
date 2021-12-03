/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 14:09:29 by zqadiri           #+#    #+#             */
/*   Updated: 2021/12/02 16:20:55 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
 NOTICE : new keyword create an object and return a pointer to it.It means that the object 
 is stored in the heap, you must delete the object by yourself using delete keyword
*/

Zombie* newZombie(std::string name)
{
	Zombie *deadHead = new Zombie(name);
	return (deadHead);
}
