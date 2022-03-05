/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 10:03:00 by zqadiri           #+#    #+#             */
/*   Updated: 2022/02/27 18:14:43 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP_
#define ROBOTOMY_REQUEST_FORM_HPP_

#include <iostream>
#include <string>
#include <fstream>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
    private:
        std::string     target;
    public:
        RobotomyRequestForm();
        ~RobotomyRequestForm();
        RobotomyRequestForm(std::string);
        RobotomyRequestForm(const RobotomyRequestForm&);

        RobotomyRequestForm &operator=(const RobotomyRequestForm&);

        void    execute(Bureaucrat const &b)const;
};

#endif
