/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 14:14:50 by hbutt             #+#    #+#             */
/*   Updated: 2025/12/31 14:38:19 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() : _a(10), _str("coucou") {}

Data::~Data() {}

Data::Data(const Data &other) {*this = other;}

Data &Data::operator=(const Data &other)
{
    if (this != &other)
    {
        this->_a = other._a;
        this->_str = other._str;
    }
    return *this;
}

int Data::getInt()
{
    return _a;
}

std::string Data::getString()
{
    return _str;
}