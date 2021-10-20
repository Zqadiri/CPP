/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 11:52:09 by zqadiri           #+#    #+#             */
/*   Updated: 2021/10/20 18:03:04 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"
#include"ScavTrap.hpp"

int main(void)
{
    // ClapTrap c1("crap1");
    // ClapTrap c2("crap2");
    ScavTrap st("ScavTrap1");
    ScavTrap st2("ScavTrap2");

    st.guardGate();
    st2.guardGate();
    st.attack("ScavTrap2");
    return 1;
}
