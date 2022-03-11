/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:04:25 by zqadiri           #+#    #+#             */
/*   Updated: 2022/03/11 21:49:03 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

/*-- Exceptions --*/

const char* Span::addMore::what() const throw(){
	return "Can not add more";
}

const char* Span::Spanotfound::what() const throw(){
	return "Span not found";
}

/*-- Constructors & Destructor --*/

Span::Span(){
}

Span::~Span(){
}

Span::Span(unsigned int n){
	this->N = n;
}

Span::Span(const Span & sp){
	*this = sp;
}

/*-- Operators --*/

Span	&Span::operator=(const Span &sp){
	this->N = sp.N;
	return (*this);
}

/*-- Member Functions --*/

void	Span::addNumber(unsigned int i)
{
	if (this->vec.size() >= this->N)
		throw Span::addMore();
	this->vec.push_back(i);
}

int		Span::longestSpan(void)
{
	if (this->vec.size() <= 1){
		throw Span::Spanotfound();
	}
	std::sort(this->vec.begin(), this->vec.end());
	return (this->vec.back() - this->vec.front());
}

int		Span::shortestSpan(void)
{
	int diff;
	int	shortestSpan = -1;

	if (this->vec.size() <= 1){
		throw Span::Spanotfound();
	}
	std::sort(this->vec.begin(), this->vec.end());
	shortestSpan = this->vec[1] - this->vec[0];
	for (int i = 0; i < (int)this->vec.size() - 1; i++) 
	{
		diff = this->vec[i + 1] - this->vec[i];
		if (diff < shortestSpan)
			shortestSpan = diff;
	}
	return shortestSpan;
}

void	Span::printAll(void)
{
	for (int i = 0; i < (int)this->vec.size(); i++){
		std::cout << this->vec[i] << std::endl;
	}
}

	