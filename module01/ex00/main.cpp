/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 18:08:32 by zqadiri           #+#    #+#             */
/*   Updated: 2021/11/05 16:07:54 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *new_Zombie;
	
	new_Zombie = newZombie("DEADHEAD");
	new_Zombie->announce();
	randomChump("BITER");
	delete new_Zombie;
	return (0);
}
