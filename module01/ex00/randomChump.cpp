/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 14:33:56 by zqadiri           #+#    #+#             */
/*   Updated: 2021/11/05 16:02:14 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
	The only difference here is that you are getting the object 
	and not a pointer to it [you create the object on the stack],
	so it will be disposed of when going out of scope
*/

void    randomChump(std::string name)
{
	Zombie Biter(name);
	Biter.announce();
}
