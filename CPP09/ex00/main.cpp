/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 18:49:33 by hbutt             #+#    #+#             */
/*   Updated: 2026/01/12 21:29:07 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include "Checks.hpp"

void checkArgs(int ac, char **av)
{
    if (ac < 2)
        throw FewArgumentsException();
    else if (ac > 2)
        throw TooManyArgumentsException();
    std::string filename = av[1];
    if (filename.length() < 4 || filename.substr(filename.length() - 4) != ".txt")
        throw IncorrectFileType();
}

int main(int ac, char **av)
{
    try
    {
        checkArgs(ac, av);
        std::ifstream file(av[1]);
        if (!file)
            throw std::runtime_error("error : could not open the file");
        std::string line;
        getline(file,line);
        if (line.empty())
            throw EmptyFileException();
        else if (line != "date | value")
            throw NotValidLineException();
        
        while(getline(file, line))
        {
            if (line.substr())
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
        return 1;
    }
    return 0;
}