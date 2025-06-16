/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 14:17:12 by hbutt             #+#    #+#             */
/*   Updated: 2025/06/16 20:23:33 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    _type = "Animal";
    std::cout << "An animal is created." << std::endl;
}

Animal::~Animal()
{
    std::cout << "An animal is destroyed." << std::endl;
}

Animal::Animal(const Animal &other)
{
    std::cout << "Copy constructor of Animal called." << std::endl;
    _type = other._type;
}

Animal& Animal::operator=(const Animal &other)
{
    std::cout << "Copy assignment constructor of Animal called." << std::endl;
    this->_type = other.getType();
    return *this;
}

std::string Animal::getType() const
{
    return (_type);
}

void Animal::makeSound() const
{
    std::cout << "Im a animal." << std::endl;
}