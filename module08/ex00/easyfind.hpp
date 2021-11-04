/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:27:12 by zqadiri           #+#    #+#             */
/*   Updated: 2021/11/04 11:02:33 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <exception>

/*
    Containers or the Standard Template Library are some predefined templates.
    They manage the storage space for its elements and provide
    member functions to access and manipulate them.
*/

template <typename T>

int       easyfind(T vec, int occur){
    // Iterator used to store the position 
    // of searched element
    typename T::iterator it;
    // std::find function call
    it = std::find (vec.begin(), vec.end(), occur);
    if (it != vec.end())
        return (it - vec.begin());
    return -1;
        
}


#endif
