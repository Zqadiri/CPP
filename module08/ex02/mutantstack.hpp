/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:14:06 by zqadiri           #+#    #+#             */
/*   Updated: 2022/03/11 22:26:27 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <stack>
#include <iterator>
#include <list>

template <typename T>
class MutantStack : public std::stack<T>
{
	private:
		
	public:
		MutantStack<T>(){};
		~MutantStack<T>(){};
		MutantStack(const MutantStack<T> &mutant){
			*this = mutant;
		}

		MutantStack<T> &operator=(const MutantStack<T> &mutant){
			this->c = mutant.c;
			return (*this);
		}

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator	begin(void){
			return this->c.begin();
		}
		iterator	end(void){
			return this->c.end();
		}
};

#endif
