/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:16:00 by zqadiri           #+#    #+#             */
/*   Updated: 2022/03/10 17:22:13 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"


int main(void)
{
	std::string arr[3] = {"string", "string", "string"};
	iter(arr, 3, print);
	int array[] = {0,1,2,3,4,5};
	iter(array, 6, print);
	{
		int tab[] = { 0, 1, 2, 3, 4 };
		Awesome tab2[5];
		iter( tab, 5, print );
		iter( tab2, 5, print);
	}
	return (0);
}