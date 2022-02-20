/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 11:52:09 by zqadiri           #+#    #+#             */
/*   Updated: 2021/12/24 16:10:09 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"
#include"ScavTrap.hpp"

int main(void)
{
    /*{
		ClapTrap clap1("clap1");
		ClapTrap clap2(clap1);
		clap2.setName("clap2");
		std::cout << std::endl;

		clap1.attack(clap2.getName());							std::cout << std::endl;
		clap1.takeDamage(1);									std::cout << std::endl;
		clap1.takeDamage(10);									std::cout << std::endl;
		clap1.beRepaired(15);									std::cout << std::endl;
		clap2.takeDamage(1);									std::cout << std::endl;
		clap2.beRepaired(1);									std::cout << std::endl;
	}*/
    
    {
        ScavTrap st("ScavTrap1");
        ScavTrap st2("ScavTrap2");

        st.guardGate();
        st2.guardGate();
        st.attack("ScavTrap2"); 
    }

    return 1;
}
