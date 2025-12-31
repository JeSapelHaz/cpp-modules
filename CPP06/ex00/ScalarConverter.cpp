/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 14:35:33 by hbutt             #+#    #+#             */
/*   Updated: 2025/12/31 14:05:21 by hbutt            ###   ########.fr       */
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
    std::cout << "float : " << std::fixed << std::setprecision(1) << static_cast<float>(str[0]) << std::endl;
    std::cout << "double : " << std::fixed << std::setprecision(1) << static_cast<double>(str[0]) << std::endl;
}

static void floatConverter(std::string str)
{
    if (atoi(str.c_str()) < 0 || atoi(str.c_str()) > 127)
        std::cout << "char : impossible" << std::endl;
    else if (atoi(str.c_str()) < 32 || atoi(str.c_str()) == 127)
        std::cout << "char : non-displayable" << std::endl;
    else
        std::cout << "char : " << static_cast<char>(atof(str.c_str())) << std::endl;
    std::cout << "int : " <<  static_cast<int>(atof(str.c_str())) << std::endl;
    std::cout << "float : " << std::fixed << std::setprecision(1) << atof(str.c_str()) << "f" <<std::endl;
    std::cout << "double : " <<  std::fixed << std::setprecision(1) << static_cast<double>(atof(str.c_str())) << std::endl;
}

static void doubleConverter(std::string str)
{
    if (atoi(str.c_str()) < 0 || atoi(str.c_str()) > 127)
        std::cout << "char : impossible" << std::endl;
    else if (atoi(str.c_str()) < 32 || atoi(str.c_str()) == 127)
        std::cout << "char : non-displayable" << std::endl;
    else
        std::cout << "char : " << static_cast<char>(atof(str.c_str())) << std::endl;
    std::cout << "int : " <<  static_cast<int>(atof(str.c_str())) << std::endl;
    std::cout << "float : " << std::fixed << std::setprecision(1) << atof(str.c_str()) << "f" <<std::endl;
    std::cout << "double : " <<  std::fixed << std::setprecision(1) << static_cast<double>(atof(str.c_str())) << std::endl;
}

static void intConverter(std::string str)
{
    if (atoi(str.c_str()) < 0 || atoi(str.c_str()) > 127)
        std::cout << "char : impossible" << std::endl;
    else if (atoi(str.c_str()) < 32 || atoi(str.c_str()) == 127)
        std::cout << "char : non-displayable" << std::endl;
    else
        std::cout << "char : " << static_cast<char>(atof(str.c_str())) << std::endl;
    std::cout << "int : " <<  atoi(str.c_str()) << std::endl;
    std::cout << "float : " << std::fixed << std::setprecision(1) << atof(str.c_str()) << "f" <<std::endl;
    std::cout << "double : " << std::fixed << std::setprecision(1) << static_cast<double>(atof(str.c_str())) << std::endl;
}


static void minInfConverter()
{
    std::cout << "char : impossible" << std::endl;
    std::cout << "int : impossible" << std::endl;
    std::cout << "float : -inff" << std::endl;
    std::cout << "double : -inf" << std::endl;
}

static void maxInfConverter()
{
    std::cout << "char : impossible" << std::endl;
    std::cout << "int : impossible" << std::endl;
    std::cout << "float : +inff" << std::endl;
    std::cout << "double : +inf" << std::endl;
}

static void nan()
{
    std::cout << "char : impossible" << std::endl;
    std::cout << "int : impossible" << std::endl;
    std::cout << "float : nanf" << std::endl;
    std::cout << "double : nan" << std::endl;
}

static void errorMessage() 
{
    std::cout << "Error" << std::endl;
}

void ScalarConverter::convert(std::string str)
{
    if (std::isprint(str[0]) && !std::isdigit(str[0]))
    {
        if (str.length() == 1)
            charConverter(str);
        else if (str == "-inf" || str == "-inff")
            minInfConverter();
        else if (str == "+inf" || str == "+inff")
            maxInfConverter();
        else if (str == "nan" || str == "nanf")
            nan();
        else
            errorMessage();
    }
    else if (str[str.length() - 1] == 'f')
        floatConverter(str);
    else if (str.find('.') != std::string::npos)
        doubleConverter(str);
    else if (std::isdigit(str[0]))
        intConverter(str);
    else
        errorMessage();
}