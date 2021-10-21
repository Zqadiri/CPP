/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 20:11:47 by zqadiri           #+#    #+#             */
/*   Updated: 2021/10/21 12:23:43 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRP_HPP_
#define DIAMONDTRP_HPP_

#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string _name;
	public:
		DiamondTrap();
		~DiamondTrap();
		DiamondTrap(std::string);
		DiamondTrap(const DiamondTrap &);

		DiamondTrap &operator=(const DiamondTrap &obj);
		void	whoAmI();
		void	attack(std::string const & target);
};

#endif
