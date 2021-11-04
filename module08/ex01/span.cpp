/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:04:25 by zqadiri           #+#    #+#             */
/*   Updated: 2021/11/04 16:55:21 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

/*-- Constructors & Destructor --*/

Span::Span(){
	std::cout << "Default Constructor" << std::endl;
}

Span::~Span(){
	std::cout << "Default Destructor" << std::endl;
}

/*
	You most certainly want to use std::vector<int> myVector. No need 
	to initialize it, as it gets automatically initialized in the 
	constructor of your class and deallocated when your class is destroyed.
*/

Span::Span(unsigned int n)
{
	std::cout << "Parametrized Constructor" << std::endl;
	this->N = n;
}

Span::Span(const Span & sp)
{
	std::cout << "Copy Constructor" << std::endl;
	*this = sp;
}

/*-- Operators --*/

Span	&Span::operator=(const Span &sp)
{
	std::cout << "= Operator " << std::endl;
	this->N = sp.N;
	return (*this);
}

/*-- Functions --*/

void    Span::addNumber(int i)
{
	if (this->vec.size() >= this->N){
		throw std::exception();
	}
	this->vec.push_back(i);
}

int		Span::longestSpan(void)
{
	if (this->vec.size() <= 1){
		throw std::exception();
	}
	std::sort(this->vec.begin(), this->vec.end());
	return (this->vec.back() - this->vec.front());
}

int		Span::shortestSpan(void)
{
	int diff;
	int	shortestSpan = -1;

	if (this->vec.size() <= 1){
		throw std::exception();
	}
	std::sort(this->vec.begin(), this->vec.end());

	
	shortestSpan = this->vec[1] - this->vec[0];

	for (int i = 0; i < (int)this->vec.size() - 1; i++) 
	{
		diff = this->vec[i + 1] - this->vec[i];
		if (i == 0 || diff < shortestSpan)
			shortestSpan = diff;
	}
	return shortestSpan;
}

void	Span::addRange(std::vector<int>::iterator begin , std::vector<int>::iterator end)
{
	if (this->vec.size() >= this->N || (this->N - (std::distance(begin, end))) < 0)
		throw std::exception();
	this->vec.insert(this->vec.end(), begin, end);
}


void	Span::printAll(void)
{
	for (int i = 0; i < (int)this->vec.size(); i++)
	{
		std::cout << this->vec[i] << std::endl;
	}
}

	