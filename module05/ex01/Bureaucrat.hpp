/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 18:15:57 by zqadiri           #+#    #+#             */
/*   Updated: 2022/03/05 14:54:38 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP_
#define BUREAUCRAT_HPP_

#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		const std::string _name;
		int _grade;

	public:
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(std::string, int);
		Bureaucrat(const Bureaucrat &);
		Bureaucrat &operator=(const Bureaucrat&);
		
		std::string	getName(void) const;
		int	getGrade(void) const;

		void	increment(void);
		void	decrement(void);

		void	signForm(Form &f);

		class GradeTooHighException : public std::exception{
		public:
			virtual const char * what () const throw ();
		};

		class GradeTooLowException : public std::exception{
		public:
			virtual const char * what () const throw ();
		};
};

std::ostream & operator<< (std::ostream&, Bureaucrat const &);

#endif
