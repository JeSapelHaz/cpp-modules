/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 15:23:12 by hbutt             #+#    #+#             */
/*   Updated: 2025/06/23 17:04:42 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"
#include "Cure.hpp"

Cure::Cure() : AMateria("cure"){}


Cure::~Cure() {}

Cure::Cure(const Cure &other) : AMateria("cure")
{
    *this = other;
}

Cure &Cure::operator=(const Cure &other)
{
    this->_type = other._type;
    return (*this);
}

AMateria* Cure::clone() const
{
    return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals "<< target.getName() <<" 's wounds *" << std::endl;
}