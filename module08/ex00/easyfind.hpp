/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:27:12 by zqadiri           #+#    #+#             */
/*   Updated: 2022/03/10 14:09:38 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <exception>


template <typename T>

int		easyfind(T con, int occur){
	typename T::iterator it;
	it = std::find (con.begin(), con.end(), occur);
	if (it != con.end())
		return (it - con.begin());
	return -1;
}

#endif
