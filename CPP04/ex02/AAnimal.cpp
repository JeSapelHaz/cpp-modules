/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 14:17:12 by hbutt             #+#    #+#             */
/*   Updated: 2025/06/16 20:23:33 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    _type = "AAnimal";
    std::cout << "An Aanimal is created." << std::endl;
}

AAnimal::~AAnimal()
{
    std::cout << "An Aanimal is destroyed." << std::endl;
}

AAnimal::AAnimal(const AAnimal &other)
{
    std::cout << "Copy constructor of AAnimal called." << std::endl;
    _type = other._type;
}

AAnimal& AAnimal::operator=(const AAnimal &other)
{
    std::cout << "Copy assignment constructor of AAnimal called." << std::endl;
    this->_type = other.getType();
    return *this;
}

std::string AAnimal::getType() const
{
    return (_type);
}

void AAnimal::makeSound() const
{
    std::cout << "Im a Aanimal." << std::endl;
}