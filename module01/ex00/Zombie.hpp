/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 18:09:51 by zqadiri           #+#    #+#             */
/*   Updated: 2021/10/15 11:34:46 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP_
#define ZOMBIE_HPP_

# include <string>
# include <iomanip>
# include <iostream>

class Zombie
{
    private:
        std::string _name;

    public:
        Zombie(void);
        ~Zombie(void);
        Zombie(std::string name);

        std::string getName(void) const;
        void    setName(std::string name);
        void    announce(void);
};
void    randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif
