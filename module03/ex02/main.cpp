/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 11:52:09 by zqadiri           #+#    #+#             */
/*   Updated: 2022/02/20 19:14:37 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    FragTrap st("FragTrap1");
    FragTrap st2("FragTrap2");

    st.attack("FragTrap2");
    st.beRepaired(10);
    st2.highFivesGuys();
    return 1;
}
