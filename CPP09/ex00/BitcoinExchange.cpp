/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 20:13:20 by hbutt             #+#    #+#             */
/*   Updated: 2026/01/14 21:14:04 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <cstdlib>
BitcoinExchange::BitcoinExchange(char **av)
{
    _data.open("data.csv", std::ifstream::in);
    _input.open(av[1], std::ifstream::in);
    if (!_input)
        throw std::runtime_error("Error: cannot open input file");
    if (!_data)
        throw std::runtime_error("Error: cannot open data file");
    std::string line;
    // getline(_input,line);
    if (!getline(_input, line))
        throw EmptyFileException();
    else if (line != "date | value")
        throw NotValidLineException();
    
    while(getline(_input, line))
    {
        if (line.length() < 14 || line[10] != ' ' || line[11] != '|' || line[12] != ' ')
        {
            std::cerr << "Error: bad input => " << line << std::endl;
            continue;
        }
        std::string date = line.substr(0, 10);
        float value = atof(line.substr(13).c_str());
        _inputFile.insert(std::make_pair(date, value));
    }
    
    // Maintenant parcourir la map et afficher
    std::map<std::string, float>::iterator it;
    for (it = _inputFile.begin(); it != _inputFile.end(); it++)
    {
        std::cout << "Date: " << it->first << " | Value: " << it->second << std::endl;
    }
}

BitcoinExchange::~BitcoinExchange() {}
// BitcoinExchange::BitcoinExchange(const BitcoinExchange &other){}