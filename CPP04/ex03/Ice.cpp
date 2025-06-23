/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 15:39:02 by hbutt             #+#    #+#             */
/*   Updated: 2025/06/23 17:12:40 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){}


Ice::~Ice() {}

Ice::Ice(const Ice &other) : AMateria("ice")
{
    *this = other;
}

Ice &Ice::operator=(const Ice &other)
{
    this->_type = other._type;
    return (*this);
}

AMateria* Ice::clone() const
{
    return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at "<< target.getName() << " *" << std::endl;
}