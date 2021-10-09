/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 15:31:28 by zqadiri           #+#    #+#             */
/*   Updated: 2021/10/09 15:51:55 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
    A* a = new A[4];
	delete [] a; // Delete array
*/

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *Zombies = new Zombie[N];
    for (int i = 0; i < N; i++)
        Zombies[i].setName(name);
    return (Zombies);
}
