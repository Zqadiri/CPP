/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 10:03:04 by zqadiri           #+#    #+#             */
/*   Updated: 2022/02/27 18:39:44 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/*-- Constructors & destructors --*/

ShrubberyCreationForm::ShrubberyCreationForm(){
	std::cout << "ShrubberyForm Default Constructor "<< std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
	std::cout << "ShrubberyForm Default Destructor  " << std::endl;  
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
						: Form ("ShrubberyForm", 145 ,137){
	std::cout << "ShrubberyForm Parmeterized Constructor " << std::endl;
	this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &sf)
								: Form ("ShrubberyForm", 145 ,137){
	std::cout << "ShrubberyForm Copy Constructor " << std::endl;
	*this = sf;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm& s){
    std::cout << "ShrubberyForm = Operator" << std::endl;
    this->target = s.target;
    return (*this);
}

/*-- Member Functions --*/

void		ShrubberyCreationForm::execute(Bureaucrat const &b)const
{
	if (this->getSigned() == 1)
		std::cout << "Form id already signed !" << std::endl;
	else if (b.getGrade() > this->getGradetoExec())
		throw Bureaucrat::GradeTooLowException();
	std::ofstream outfile(this->target + "_shrubbery");

	outfile <<  "                                   .         ;		 "	<< std::endl;
	outfile <<  "      .              .              ;%     ;;		 "	<< std::endl;
	outfile <<  "        ,           ,                :;%  %;		 "	<< std::endl;
	outfile <<  "         :         ;                   :;%;'     ., "	<< std::endl;	
	outfile <<  ",.        %;     %;            ;        %;'    ,;	 "	<< std::endl;	
	outfile <<  "  ;       ;%;  %%;        ,     %;    ;%;    ,%'	 "	<< std::endl;	
	outfile <<  "   %;       %;%;      ,  ;       %;  ;%;   ,%;'	 "	<< std::endl;		
	outfile <<  "    ;%;      %;        ;%;        % ;%;  ,%;'		 "	<< std::endl;					
	outfile <<  "     `%;.     ;%;     %;'         `;%%;.%;'		 "	<< std::endl;				
	outfile <<  "      `:;%.    ;%%. %@;        %; ;@%;%'			 "	<< std::endl;			
	outfile <<  "         `:%;.  :;bd%;          %;@%;'				 "	<< std::endl;			
	outfile <<  "           `@%:.  :;%.         ;@@%;'				 "	<< std::endl;		
	outfile <<  "             `@%.  `;@%.      ;@@%;				 "	<< std::endl;							
	outfile <<  "               `@%%. `@%%    ;@@%;					 "	<< std::endl;					
	outfile <<  "                 ;@%. :@%%  %@@%;					 "	<< std::endl;				
	outfile <<  "                   %@bd%%%bd%%:;					 "	<< std::endl;								
	outfile <<  "                     #@%%%%%:;;					 "	<< std::endl;							
	outfile <<  "                     %@@%%%::;						 "	<< std::endl;				
	outfile <<  "                     %@@@%(o);  . '				 "	<< std::endl;									
	outfile <<  "                     %@@@o%;:(.,					 "	<< std::endl;				
	outfile <<  "                 `.. %@@@o%::;						 "	<< std::endl;					
	outfile <<  "                    `)@@@o%::;						 "	<< std::endl;								
	outfile <<  "                     %@@(o)::;						 "	<< std::endl;						
	outfile <<  "                    .%@@@@%::;						 "	<< std::endl;				
	outfile <<  "                    ;%@@@@%::;.					 "	<< std::endl;					
	outfile <<  "                   ;%@@@@%%:;;;.					 "	<< std::endl;				
	outfile <<  "               ...;%@@@@@%%:;;;;,.. 				 "	<< std::endl;
	outfile.close();						
}