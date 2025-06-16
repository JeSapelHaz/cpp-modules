/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 14:17:12 by hbutt             #+#    #+#             */
/*   Updated: 2025/06/16 17:17:29 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    _type = "WrongAnimal";
    std::cout <<  "A WrongAnimal is created." << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout <<  "A WrongAnimal is destroyed." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) : WrongAnimal(other)
{
    std::cout << "Copy constructor of WrongAnimal called." << std::endl;
    _type = other._type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other)
{
    std::cout << "Copy assignment constructor of WrongAnimal called." << std::endl;
    this->_type = other.getType();
    return *this;
}

std::string WrongAnimal::getType() const
{
    return (_type);
}

void WrongAnimal::makeSound() const
{
    std::cout << "Im a WrongAnimal." << std::endl;
}