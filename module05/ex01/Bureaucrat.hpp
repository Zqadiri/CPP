/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 18:15:57 by zqadiri           #+#    #+#             */
/*   Updated: 2021/10/26 15:14:55 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP_
#define BUREAUCRAT_HPP_

#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"

class Form; /*forward declaration*/

class Bureaucrat
{
	private:
		std::string _name;
		int _grade;

	public:
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(std::string, int);
		Bureaucrat(const Bureaucrat &);
		Bureaucrat &operator=(const Bureaucrat&);
		
		std::string	getName(void) const;
		int	getGrade(void)const;

		void	increment(void);
		void	decrement(void);

		class GradeTooHighException : public std::exception{
		public:
			const char * what () const throw () {
	  			return "GradeTooHigh";
   			}
		};
		class GradeTooLowException : public std::exception{
		public:
			const char * what () const throw () {
	  			return "GradeTooLow";
			}
		};

		void	signForm(Form &);
};

std::ostream & operator<< (std::ostream&, Bureaucrat const &);

#endif
