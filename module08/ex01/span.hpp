/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:04:27 by zqadiri           #+#    #+#             */
/*   Updated: 2021/11/04 16:55:09 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <exception>
#include <string>
#include<iterator>

class Span
{
	private:
		unsigned int    N;
		std::vector <int> vec;
	public:
		Span();
		~Span();
		Span(unsigned int);
		Span(const Span &);

		Span	&operator=(const Span &);
		void    addNumber(int);
		void	addRange(std::vector<int>::iterator , std::vector<int>::iterator);
		int     shortestSpan(void);
		int     longestSpan(void);
		void    printAll(void);

};

#endif
