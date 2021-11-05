/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 12:55:06 by zqadiri           #+#    #+#             */
/*   Updated: 2021/11/05 17:46:08 by zqadiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>

#define ERROR "* ARGUMENT ERROR *"
#define FILE_ERROR "* BAD FILE *"

/*
 -ifstream data type represents the input file stream and is used to read information from files.
 -ofstream  data type represents the output file stream and is used to create files and to 
 write information to files.
 -npos: It actually means until the end of the string.
*/

int     main(int argc, char *argv[])
{
    std::string filename(argv[1]);
    std::string string1(argv[2]);
    std::string string2(argv[3]);
    std::string output(argv[1]);;
    std::string buffer;

    if (argc < 4)
    {
        std::cout << ERROR << std::endl;
        return (EXIT_FAILURE);
    }
    else
    {
        std::ifstream ifs(filename);
        if (!ifs.good()) 
        {
            std::cout << FILE_ERROR << std::endl;
            return (EXIT_FAILURE);
        }
        std::transform(filename.begin(), filename.end(), output.begin(), ::toupper);
        output += ".replace";
        std::ofstream ofs(output);
        if (!ofs.good())
        {
            std::cout << FILE_ERROR << std::endl;
            return (EXIT_FAILURE);
        }
        size_t pos = 0;
        while (std::getline(ifs, buffer))
        {
            while ((pos = buffer.find(string1)) >= 0 && pos != std::string::npos)
            {
                buffer.erase(pos, string1.size());
                buffer.insert(pos, string2);
            }
            ofs << buffer << std::endl;
        }
        ifs.close();
        ofs.close();
    }
    return (0);
}
