/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 14:35:33 by hbutt             #+#    #+#             */
/*   Updated: 2025/12/17 14:58:19 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void) {}

ScalarConverter::ScalarConverter(const ScalarConverter &copy) { (void)copy; }

ScalarConverter::~ScalarConverter(void) {}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &src) { (void)src; return *this; }

static void charConverter(std::string str)
{
    std::cout << "char : " << str[0] << std::endl;
    std::cout << "int : " << static_cast<int>(str[0]) << std::endl;
    std::cout << "float : " << static_cast<float>(str[0]) << std::endl;
    std::cout << "double : " << static_cast<double>(str[0]) << std::endl;
}

void ScalarConverter::convert(std::string str)
{
    if (str.size() == 1)
        charConverter(str);
}