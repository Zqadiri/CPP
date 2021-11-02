/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 10:03:04 by zqadiri           #+#    #+#             */
/*   Updated: 2021/11/02 11:58:52 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/*-- Constructors & destructors --*/

ShrubberyCreationForm::ShrubberyCreationForm(){
	std::cout << "Default Constructor "<< std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
	std::cout << "Default Destructor " << std::endl;  

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
						: Form ("ShrubberyCreationForm", 145 ,137){
	std::cout << "Parmeterized Constructor " << std::endl;
	this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &sf)
								: Form ("ShrubberyCreationForm", 145 ,137){
	std::cout << "Copy Constructor " << std::endl;
	*this = sf;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm& s){
    std::cout << "= Operator" << std::endl;
    this->target = s.target;
    return (*this);
}

/*-- Member Functions --*/

void		ShrubberyCreationForm::execute(Bureaucrat const &b)const{
	if (this->getSigned() == 1)
		std::cout << "Form id already signed !" << std::endl;
	else if (b.getGrade() > this->getGradetoExec())
		throw Bureaucrat::GradeTooLowException();
	std::ofstream outfile(this->target + "_shrubbery");

	outfile << "draw a tree" << std::endl;
}