/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 13:22:36 by zqadiri           #+#    #+#             */
/*   Updated: 2022/02/20 19:12:20 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP_
#define SCAVTRAP_HPP_

#include"ClapTrap.hpp"

/*	
 https://www.geeksforgeeks.org/order-constructor-destructor-call-c/
*/

class ScavTrap : public ClapTrap
{			
	public:
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap(const ScavTrap &);

		ScavTrap	&operator=(const ScavTrap &s);
	
	void attack(std::string const & target);
	void guardGate();
};

#endif
