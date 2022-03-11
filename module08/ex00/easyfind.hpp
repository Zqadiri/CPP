/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:27:12 by zqadiri           #+#    #+#             */
/*   Updated: 2022/03/11 14:16:16 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <exception>
#include <vector>
#include <array>
#include <stack>
#include <queue>

template <typename T>
int		easyfind(T con, int occur){
	typename T::iterator it;
	it = std::find (con.begin(), con.end(), occur);
	if (it != con.end())
		return (it - con.begin());
	return -1;
}

template <typename T>
int		easyfind(std::stack<T> st, int occur) //LIFO
{
	size_t tmp = st.size();
	for (size_t i = 0; i < tmp; i++)
	{
		if (st.top() == occur)
			return i;
		else
			st.pop();
	}
	return -1;
}

template <typename T>
int		easyfind(std::queue<T> st, int occur) //FIFO
{
	size_t tmp = st.size();
	for (size_t i = 0; i < tmp; i++)
	{
		if (st.front() == occur)
			return i;
		else
			st.pop();
	}
	return -1;
}

#endif
