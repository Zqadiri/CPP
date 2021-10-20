/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 11:52:09 by zqadiri           #+#    #+#             */
/*   Updated: 2021/10/20 18:25:29 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    // ClapTrap c1("crap1");
    // ClapTrap c2("crap2");
    FragTrap st("FragTrap1");
    FragTrap st2("FragTrap2");

    st.attack("FragTrap2");
    return 1;
}
