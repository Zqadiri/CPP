/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:16:00 by zqadiri           #+#    #+#             */
/*   Updated: 2021/11/03 13:38:41 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void    printElement(const T &i){
    std::cout << i << std::endl;
}

int main(void)
{
    int array[] = {0,1,2,3,4,5};
    iter(array, 6, printElement);
    return (0);
}