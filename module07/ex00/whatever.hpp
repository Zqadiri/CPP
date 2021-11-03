/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:37:03 by zqadiri           #+#    #+#             */
/*   Updated: 2021/11/03 13:01:28 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP_
#define WHATEVER_HPP_

#include <iostream>
#include <string>

template <typename T>
void    swap(T &a, T &b){
    T tmp;
    tmp = a;
    a = b;
    b = tmp; 
}

template <typename X>
X     min(X &a, X &b){
    return ((a < b) ? a : b);
}

template <typename Y>
Y     max(Y &a, Y &b){
    return ((a > b) ? a : b);
}


#endif