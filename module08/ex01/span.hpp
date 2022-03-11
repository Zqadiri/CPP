/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:04:27 by zqadiri           #+#    #+#             */
/*   Updated: 2022/03/11 21:53:45 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <exception>
#include <string>
#include <iterator>
#include <algorithm>

class Span
{
	private:
		unsigned int		N;
		std::vector<int>	vec;
	public:
		Span();
		~Span();
		Span(unsigned int);
		Span(const Span &);

		Span	&operator=(const Span &);
		void	addNumber(unsigned int);
		int		shortestSpan(void);
		int		longestSpan(void);
		void	printAll(void);
		
		class addMore : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class Spanotfound : public std::exception
		{
			public:
					virtual const char* what() const throw();
		};

		template <typename T>
		void	addRange(T begin , T end)
		{
			if (this->vec.size() >= this->N || (this->N - (std::distance(begin, end))) < 0)
				throw Span::addMore();
			this->vec.insert(this->vec.end(), begin, end);
		}
};

#endif
