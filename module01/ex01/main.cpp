/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 15:29:26 by zqadiri           #+#    #+#             */
/*   Updated: 2021/11/05 16:08:38 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *Zombies;
    int     N(4);

    Zombies = zombieHorde(N, "deadHead");
    for (int i = 0; i < N; i++)
       Zombies[i].announce();
    delete [] Zombies;   
    return (0);
}
