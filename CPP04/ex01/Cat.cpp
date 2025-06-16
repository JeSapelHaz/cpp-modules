/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 17:06:54 by hbutt             #+#    #+#             */
/*   Updated: 2025/06/16 20:33:18 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    _type = "Cat";
    _brain = new Brain;
    std::cout << "A cat is created." << std::endl;
}

Cat::~Cat()
{
    std::cout << "A cat is destroyed." << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
    std::cout << "Copy constructor of Cat called." << std::endl;
    _type = other._type;
}

Cat& Cat::operator=(const Cat &other)
{
    std::cout << "Copy assignment constructor of Cat called." << std::endl;
    this->_type = other.getType();
    return *this;
}

std::string Cat::getType() const
{
    return (_type);
}

void Cat::makeSound() const
{
    std::cout << "Miaou Miaou" << std::endl;
}