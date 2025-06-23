/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 17:06:54 by hbutt             #+#    #+#             */
/*   Updated: 2025/06/16 17:17:39 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    _type = "WrongCat";
    std::cout << "A WrongCat is created." << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "A WrongCat is destroyed." << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
    std::cout << "Copy constructor of WrongCat called." << std::endl;
    _type = other._type;
}

WrongCat& WrongCat::operator=(const WrongCat &other)
{
    std::cout << "Copy assignment constructor of WrongCat called." << std::endl;
    this->_type = other.getType();
    return *this;
}

std::string WrongCat::getType() const
{
    return (_type);
}

void WrongCat::makeSound() const
{
    std::cout << "Miaou Miaou" << std::endl;
}