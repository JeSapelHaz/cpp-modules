/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 15:21:54 by hbutt             #+#    #+#             */
/*   Updated: 2025/06/05 16:33:13 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->_value = 0;
}

Fixed::Fixed(const int a)
{
    std::cout << "Int constructor called" << std::endl;
    this->_value = a << this->_nbrBits;
    
}
Fixed::Fixed(const float a)
{
    std::cout << "Float constructor called" << std::endl;
    this->_value = roundf(a * (1 << _nbrBits));
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed &Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
		this->_value = other.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return this->_value;
}

void Fixed::setRawBits(int const raw)
{
    // std::cout << "setRawBits member function called" << std::endl;
    this->_value = raw;
}
float Fixed::toFloat(void) const
{
    return ((float)this->_value / (float)(1 << _nbrBits));
}

int Fixed::toInt(void) const
{
    return ((int)this->_value >> _nbrBits);
}

std::ostream &operator<<(std::ostream &out, Fixed const &obj)
{
	out << obj.toFloat();
	return (out);
}