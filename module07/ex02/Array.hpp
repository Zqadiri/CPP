/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 11:25:06 by zqadiri           #+#    #+#             */
/*   Updated: 2022/03/02 12:07:08 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP_
#define ARRAY_HPP_

template <typename T>
class Array
{
    public:
        Array(){
            T* array = new T();
        }
        Array(unsigned int n){
        }
        ~Array();
        
};
#endif