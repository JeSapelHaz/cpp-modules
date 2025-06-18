/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 17:06:54 by hbutt             #+#    #+#             */
/*   Updated: 2025/06/18 14:27:10 by hbutt            ###   ########.fr       */
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
    delete _brain;
    std::cout << "A cat is destroyed." << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
    std::cout << "Copy constructor of Cat called." << std::endl;
    _type = other._type;
    _brain = new Brain(*other._brain);
}

Cat& Cat::operator=(const Cat &other)
{
    std::cout << "Copy assignment constructor of Cat called." << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
        delete _brain;
        _brain = new Brain(*other._brain);
    }
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

Brain* Cat::getBrain() const
{
    return _brain;
}
