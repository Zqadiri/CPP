/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 09:48:26 by zqadiri           #+#    #+#             */
/*   Updated: 2021/10/07 11:47:23 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>

#define ERROR  "* LOUD AND UNBEARABLE FEEDBACK NOISE *"

using namespace std;

int main(int argc, char *argv[])
{
    if (argc == 1)
        cout << ERROR << endl;
    else 
    {
        for (int i = 1; i < argc; i++)
            for (int j = 0; argv[i][j]; j++)
                cout << (char)(toupper(argv[i][j]));
        cout <<endl;
    }
    return (0);
}