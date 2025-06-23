/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 17:07:46 by hbutt             #+#    #+#             */
/*   Updated: 2025/06/23 14:09:05 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    _type = "Dog";
    _brain = new Brain;
    std::cout << "A dog is created." << std::endl;
}

Dog::~Dog()
{
    delete _brain;
    std::cout << "A dog is destroyed." << std::endl;
}

Dog::Dog(const Dog &other) : AAnimal(other)
{
    std::cout << "Copy constructor of Dog called." << std::endl;
    _type = other._type;
    _brain = new Brain(*other._brain);
}

Dog& Dog::operator=(const Dog &other)
{
    std::cout << "Copy assignment constructor of Dog called." << std::endl;
    if (this != &other)
    {
        AAnimal::operator=(other);
        delete _brain;
        _brain = new Brain(*other._brain);
    }
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

Brain* Dog::getBrain() const
{
    return _brain;
}
