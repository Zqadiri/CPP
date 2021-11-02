/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 15:23:55 by zqadiri           #+#    #+#             */
/*   Updated: 2021/10/26 14:59:28 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP_
#define FORM_HPP_

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
	private:
		std::string _name;
		bool		_singed;
		int			_grade_to_sign;
		int			_grade_to_exec;
	public:
		Form();
		~Form();
		Form(std::string, int, int);
		Form(const Form&);

		std::string	getName(void) const;
		bool	getSigned(void) const;
		int		getGradetoSign(void) const;
		int		getGradetoExec(void) const;

		Form	&operator=(const Form&);
		
		class	GradeTooHighException : public std::exception{
			public:
				const char * what () const throw () {
	  			return "GradeTooHigh";
   			}
		};
		class	GradeTooLowException : public std::exception{
			public:
				const char * what () const throw () {
	  			return "GradeTooLow";
   			}
		};

		void	beSigned(Bureaucrat &);
};

std::ostream &operator<< (std::ostream &o, const Form &);

#endif
