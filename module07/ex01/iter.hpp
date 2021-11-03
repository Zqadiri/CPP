/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:06:27 by zqadiri           #+#    #+#             */
/*   Updated: 2021/11/03 13:38:13 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename T>
// void func ( void (*f)(int) );

void    iter(T *array, int count, void (*func)(const T &)){
    for (int i = 0; i < count; i++){
        func(array[i]);
    }   
}

#endif