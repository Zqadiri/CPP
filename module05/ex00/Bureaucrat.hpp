/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 18:15:57 by zqadiri           #+#    #+#             */
/*   Updated: 2021/10/23 12:31:19 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP_
#define BUREAUCRAT_HPP_

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat
{
	private:
		std::string _name;
		int _grade;

	public:
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &);
		Bureaucrat &operator=(const Bureaucrat&);

		std::string	getName(void) const;
		void	setName(std::string);
		int	getGrade(void)const;
		void	setGrade(int);

		
};

#endif
