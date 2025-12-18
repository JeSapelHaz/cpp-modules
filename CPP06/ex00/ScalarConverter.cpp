/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 14:35:33 by hbutt             #+#    #+#             */
/*   Updated: 2025/12/18 17:30:55 by hbutt            ###   ########.fr       */
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

static void floatConverter(std::string str)
{
    std::cout << "char : " << static_cast<char>(atof(str.c_str())) << std::endl;
    std::cout << "int : " <<  static_cast<int>(atof(str.c_str())) << std::endl;
    std::cout << "float : " << atof(str.c_str()) << "f" <<std::endl;
    std::cout << "double : " <<  static_cast<double>(atof(str.c_str())) << std::endl;
}

static void doubleConverter(std::string str)
{
    std::cout << "char : " << static_cast<char>(atof(str.c_str())) << std::endl;
    std::cout << "int : " <<  static_cast<int>(atof(str.c_str())) << std::endl;
    std::cout << "float : " << atof(str.c_str()) << "f" <<std::endl;
    std::cout << "double : " <<  static_cast<double>(atof(str.c_str())) << std::endl;
}

static void intConverter(std::string str)
{
    std::cout << "char : " << static_cast<char>(atoi(str.c_str())) << std::endl;
    std::cout << "int : " <<  atoi(str.c_str()) << std::endl;
    std::cout << "float : " << atof(str.c_str()) << "f" <<std::endl;
    std::cout << "double : " <<  static_cast<double>(atof(str.c_str())) << std::endl;
}

static void errorMessage()
{
    std::cout << "Error" << std::endl;
}

void ScalarConverter::convert(std::string str)
{
    if (str.size() == 1 && std::isprint(str[0]) && !std::isdigit(str[0]))
        charConverter(str);
    else if (str[str.length() - 1] == 'f')
        floatConverter(str);
    else if (str.find('.'))
        doubleConverter(str);
    else if (std::isdigit(str[0]))
        intConverter(str);
    else
        errorMessage();
}