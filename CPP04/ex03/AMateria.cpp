/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 15:16:53 by hbutt             #+#    #+#             */
/*   Updated: 2025/06/23 17:09:46 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(const std::string& type) : _type(type)
{
    std::cout << "An AMateria is created." << std::endl;
}

AMateria::~AMateria()
{
    std::cout << "An AMateria is destroyed." << std::endl;
}

AMateria::AMateria(const AMateria &other) : _type(other._type)
{
    std::cout << "Copy constructor of AMateria called." << std::endl;
}

AMateria& AMateria::operator=(const AMateria &other)
{
    std::cout << "Copy assignment constructor of AMateria called." << std::endl;
    this->_type = other._type;
    return *this;
}

const std::string& AMateria::getType() const
{
    return (_type);
}
