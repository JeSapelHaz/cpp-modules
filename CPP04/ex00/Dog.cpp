/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 17:07:46 by hbutt             #+#    #+#             */
/*   Updated: 2025/06/16 20:20:39 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    _type = "Dog";
    std::cout << "A dog is created." << std::endl;
}

Dog::~Dog()
{
    std::cout << "A dog is destroyed." << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
    std::cout << "Copy constructor of Dog called." << std::endl;
    _type = other._type;
}

Dog& Dog::operator=(const Dog &other)
{
    std::cout << "Copy assignment constructor of Dog called." << std::endl;
    this->_type = other.getType();
    return *this;
}

std::string Dog::getType() const
{
    return (_type);
}

void Dog::makeSound() const
{
    std::cout << "Wouaf Wouaf" << std::endl;
}