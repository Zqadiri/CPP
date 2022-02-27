/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 18:15:57 by zqadiri           #+#    #+#             */
/*   Updated: 2022/02/27 15:10:09 by zqadiri          ###   ########.fr       */
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
		Bureaucrat(std::string, int);
		Bureaucrat(const Bureaucrat &);
		Bureaucrat &operator=(const Bureaucrat&);
		
		std::string	getName(void) const;
		int	getGrade(void) const;

		void	increment(void);
		void	decrement(void);

		class GradeTooHighException : public std::exception{
		public:
			virtual const char * what () const throw () {
	  			return "GradeTooHigh";
   			}
		};

		class GradeTooLowException : public std::exception{
		public:
			virtual const char * what () const throw () {
	  			return "GradeTooLow";
			}
		};
};

std::ostream & operator<< (std::ostream&, Bureaucrat const &);

#endif
