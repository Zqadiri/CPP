/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:14:06 by zqadiri           #+#    #+#             */
/*   Updated: 2021/11/04 18:59:56 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <stack>

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
			*this = mutant;
			return (*this);
		}
		

};

#endif
