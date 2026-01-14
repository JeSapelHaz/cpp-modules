/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 18:51:13 by hbutt             #+#    #+#             */
/*   Updated: 2026/01/14 20:44:45 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <map>
#include <fstream>
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include "Checks.hpp"

class BitcoinExchange
{
    private:
        std::map<std::string, float> _dataFile;
        std::map<std::string, float> _inputFile;
        std::ifstream _input;
        std::ifstream _data;
        
    
    public:
        BitcoinExchange(char **av);
        ~BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &other);
        BitcoinExchange &operator=(const BitcoinExchange &other);
};